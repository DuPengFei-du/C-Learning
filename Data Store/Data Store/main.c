#define _CRT_SECURE_NO_WARNINGS 1


//数据在内存中的存储
#include<stdio.h>
int main()
{
	//数组也是一种自定义类型
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));                //40
	printf("%d\n", sizeof(int [10]));          //40
	int a = 10;
	sizeof(int);  //可以的
	sizeof(a);    //可以的
	//那么问题来了，数组的类型是什么呢？
	//数组的类型，就是数组去掉数组名剩下的部分
	//比如上述对数组的声明 int arr[10],那么数组的类型就是int [10]
}


#include<stdio.h>
void test()
{
	printf("hehe");
}
int main()
{
	test(20);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 0x11223344;
	//0x11223344放在a里面是刚刚好的
	//因为11是一个字节，22是一个字节，33是一个字节，44是一个字节
	//通过监视看：转换到16进制，观察到a的值为0x1223344
	//通过内存看：输入&a，可以观察到，a显示为44332211
	return 0;
}


#include<stdio.h>
int main()
{
	int a = -10;
	//10000000000000000000000000001010  --原码
	//11111111111111111111111111110101  --反码
	//11111111111111111111111111110110  --补码
	//fffffff6               ---补码转换成16进制的样子
	//但是在内存中&a显示的结果是f6ffffff
}


//为什么在内存中存的是补码？
#include<stdio.h>
int main()
{
	//加入说我想算一个1-1的结果是多少
	//但是遗憾的是，计算机不能算减法
	//那我只好把减法转换为加法的形式
	//1 - 1;
	1 + (-1);
	//如果按原码来计算的话
	// 1的原码
	//00000000000000000000000000000001
	//-1的原码
	//10000000000000000000000000000001
	//两个码相加的结果为
	//10000000000000000000000000000010
	//如果按照原码直接相加的话，结果就为-2，这显然是不正确的
	//所以科学家们推出了补码的概念
	//用补码来算的时候，可以算出正确的结果
}


//判断当前机器是大端还是小端
#include<stdio.h>
int main()
{
	int a = 1;
	char* pa = (char*)&a;
	if (*pa == 1)
		printf("小端");
	else
		printf("大端");
	return 0;
}


//封装成一个函数
#include<stdio.h>
int check_system()
{
	int a = 1;
	char* pa = (char*)& a;
	if (*pa == 1)
		return 1;
	else
		return 0;
}
int main()
{
	int ret = check_system();
	if (ret == 1)
		printf("小端");
	else
		printf("大端");
	return 0;
}


//联合体(共用体)
#include<stdio.h>
struct Stu
{
	char name[20];
	int age;
};
union Un
{
	int i;
	char c;
};    //联合体类型
int main()
{
	union Un u = { 0 };   //u为联合体对象
	printf("%d\n", sizeof(u));   //结果为4
	printf("%p\n", &u);
	printf("%p\n", &(u.i));
	printf("%p\n", &(u.c));    
	//三个的地址是一模一样的，说明i和c占用同一块空间
	//所以联合体又叫共用体，共用体的意思就是我的成员要共用同一块空间
	//那么我给i里面放东西c就会发生变化
	//我给c里面放东西，i也会发生变化
	//c是i占的四个字节中的第一个字节，这也解决了大小端算法的另一种解法问题
	return 0;
}


#include<stdio.h>
int check_system()
{
	union Un
	{
		int i;
		char c;
	}u;
	u.i = 1;
	return u.c;
}
int main()
{
	int ret = check_system();
	if (ret == 1)
		printf("小端");
	else
		printf("大端");
	return 0;
}


#include<stdio.h>
int main()
{
	char a = -1;
	signed char b = -1;
	//char和signed char其实是一样得，所以前两个得结果一定是一样的
	//-1的补码为：11111111111111111111111111111111
	//保存到char中为11111111
	//反码为：11111110
	//原码为：10000001  --所以说前两个的结果为-1 和 -1
	//又符号的类型，高位所需要补的是符号位
	unsigned char c = -1;
	//c放在内存中 11111111---补码
	//又因为c是无符号数，所以给c的高位补0
	//00000000000000000000000011111111  -- 补码
	//又因为最高位是0，所以说为整数，整数的原，反，补相同
	//所以c的结果为255  8个1的结果为255
	printf("a=%d,b=%d,c=%d", a, b, c);
	//-1 -1 255
	return 0;
}


#include<stdio.h>
int main()
{
	char a = -128;
	//10000000000000000000000010000000   原码-- -128
	//11111111111111111111111101111111   反码
	//11111111111111111111111110000000   补码
	//但是只能存8个比特位，结果为10000000
	//需要进行整形提升
	//提升的时候需要看原来的符号位，全部补成1
	//结果为11111111111111111111111110000000  --补码
	//又因为是无符号数，所以原码，反码，补码全部相同
	//所以就得到了结果：4294967168
	printf("%u\n", a);
	return 0;
}


#include<stdio.h>
int main()
{
	char a = 128;
	printf("%u\n", a);
	return 0;
}


#include<stdio.h>
int main()
{
	int i= -20;
	unsigned  int  j = 10;
	printf("%d\n", i+j); 
	//10000000000000000000000000010100
	//11111111111111111111111111101011
	//11111111111111111111111111101100
	//00000000000000000000000000001010
	//11111111111111111111111111110110
	//11111111111111111111111111110101
	//10000000000000000000000000001010
	//-10
	return 0;
}


#include<stdio.h>
int main()
{
	unsigned int i;
	//无符号的数，是没有负数的
	//判断条件为i>=0，但是无符号的，i>=0是永恒成立的
	//所以结果为死循环
	for (i = 9; i >= 0; i--)
	{
		printf("%u\n", i);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	char a[1000];
	int i;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d", strlen(a));
	//什么时候遇到\0，长度就是多少，参考char的范围的哪个圆圈
	//所以结果为255
	return 0;
}


#include<stdio.h>
unsigned char i = 0;
int main()
{
	for (i = 0; i <= 255; i++)
	{
		printf("hello world\n");
	}
	return 0;
	//这个程序会死循环
	//unsigned char 的范围就是0-255，所以会死循环
}
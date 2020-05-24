#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	(void)scanf("%d %d", &a, &b);
	c = a + b;
	printf("%d", c);
	return 0;
}


#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	(void)scanf("%d %d", &a, &b);
	c = Add(a, b);
	printf("%d", c);
	return 0;
}


#include<stdio.h>
int main()
{
	printf("%c\n", '\'');
	printf("%s\n", "\"");
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	printf("%d\n", sizeof(int));  //4
	printf("%d\n", sizeof(char)); //1
	printf("%d\n", sizeof(short)); //2
	printf("%d\n", sizeof(long));  //4/8
	printf("%d\n", sizeof(long long));  //8
	printf("%d\n", sizeof(float));  //4
	printf("%d\n", sizeof(double));  //8
	return 0;
}
//类型的大小单位都是字节
//计算机中的单位 
//bit(位) byte(字节) kbyte(kb) mb gb tb pb  
//前两个单位之间的换算单位是8，后面的单位之间的是1024


#include<stdio.h>
int main()
{
	{
		int num = 10;
	}
	//printf("%d", num);
	return 0;
	//此时，这个程序会出错，num作用域中不包括有printf语句。
}


#include<stdio.h>
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c',0 };
	printf("%s\n", "abc");
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
	//三种打印的结果都是abc
	//如果arr2后面不加0的话，那么打印结果就会是再abc的后面还会出现烫烫烫的字符
	//因为如果不加0的话，字符串就会并没有结束，只有加了0或者\0才会停止打印
	//烫烫烫背后的真实东西其实是0xcccccc
	//由此可以看来\0对字符串来说是非常重要的
	//字符串是\0需要的结束标志的符号；
}


#include<stdio.h>
int main()
{
	printf("c:\test\test.c\n");
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	while (i < 10)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d", arr[4]);
	return 0;
}


#include<stdio.h>
int main()
{
	int a1 = 5 / 2;
	float a2 = 5 / 2;
	float a3 = 5.0 / 2;
	printf("%d\n", a1);
	printf("%f\n", a2);
	printf("%f\n", a3);
	return 0;
}
//针对于除法操作，与他存储的是什么类型是没有关系的
//主要是看两个除法的操作数到底是什么类型的，如果有一个是浮点型的，得到的结果就会是浮点型的结果


#include<stdio.h>
int main()
{
	int a = 5 % 2;
	printf("%d", a);
	return 0;
}
//针对于取模运算，有一点需要特别注意：
//取模运算符左右两边的操作数都必须是整数，如果不是整数，那么就会出错。


//#include<stdio.h>
//int main()
//{
//	int a = 5/2;
//	int a = 5/2.0;
//	printf("%d\n", a);
//	int a = 5%2;
//	printf("%d\n", a);
//	int a = 15;
//	int b = a << 1;
//	a = a<<1;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	<< 移位操作符-移动的是二进制位
//	原码-反码-补码
//	00000000000000000000000000001111-原码-反码-补码相同
//	00000000000000000000000000011110
//	
//	-1
//	10000000000000000000000000000001-原码
//	11111111111111111111111111111110-反码
//	11111111111111111111111111111111-补码
//	system("pause");
//	return 0;
//}


#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	int c = a & b;
	printf("%d", c);
	return 0;
	//结果为1，按位与的按位是按二进制，相同的为1，不同的为0
}


#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	int c = a | b;
	printf("%d", c);
	return 0;
	//结果为7
}


#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	int c = a ^ b;
	printf("%d", c);
	return 0;
	//相同为0，相异为1
	//结果为6
}


#include<stdio.h>
int main()
{
	int a = 10;
	int b = ++a;
	printf("%d\n", a);   //11
	printf("%d\n", b);   //11
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	int b = --a;
	printf("%d\n", a);   //9
	printf("%d\n", b);   //9
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	int c = a && b;
	printf("%d", c);
	return 0;
}
//结果为1


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 5;
	int c = a || b;
	printf("%d", c);
	return 0;
}
//结果为1


#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int max = 0;
	max = (a > b) ? a : b;
	printf("%d", max);
	return 0;
}


#include<stdio.h>
int main()
{
	//数组也是一种自定义类型
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));                //40
	printf("%d\n", sizeof(int[10]));          //40
	int a = 10;
	sizeof(int);  //可以的
	sizeof(a);    //可以的
	//那么问题来了，数组的类型是什么呢？
	//数组的类型，就是数组去掉数组名剩下的部分
	//比如上述对数组的声明 int arr[10],那么数组的类型就是int [10]
}


//char          //字符数据类型
//short        //短整型
//int          //整形
//long         //长整型
//long long    //更长的整形
//float        //单精度浮点型
//double       //双精度浮点型


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
//屏幕上打印的结果是hehe，虽然test函数实际上是没有参数的，但是在主函数调用test函数时候，还是传了参数，但是是没有任何影响的。
//你传是你的事情，我接不接受是我的事情。
//但是如果没有参数的话，最好还是在test函数的括号中加一个void，声明这个函数是没有参数的。


#include<stdio.h>
int main()
{
	int a = 0x11223344;
	//0x11223344放在a里面是刚刚好的
	//因为11是一个字节，22是一个字节，33是一个字节，44是一个字节
	//通过监视看：转换到16进制，观察到a的值为0x11223344
	//通过内存看：输入&a，可以观察到，a显示为44332211
	return 0;
}


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


#include<stdio.h>
int main()
{
	int a = 1;
	char* pa = (char*)& a;
	if (*pa == 1)
		printf("小端");
	else
		printf("大端");
	return 0;
}


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


#include<stdio.h>
int CheckSystem()
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
	int ret = CheckSystem();
	if (ret == 1)
		printf("小端");
	else
		printf("大端");
	return 0;
}


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
int main()
{
	char a = -1;
	signed char b = -1;
	//char和signed char其实是一样得，所以前两个得结果一定是一样的
	//-1的补码为：11111111111111111111111111111111
	//保存到char中为11111111
	//反码为：11111110
	//原码为：10000001  --所以说前两个的结果为-1 和 -1
	//有符号的类型，高位所需要补的是符号位
	unsigned char c = -1;
	//c放在内存中 11111111---补码
	//又因为c是无符号数，所以给c的高位补0
	//00000000000000000000000011111111  -- 补码
	//又因为最高位是0，所以说为正数，正数的原，反，补相同
	//所以c的结果为255  8个1的结果为255
	printf("a=%d,b=%d,c=%d", a, b, c);
	//-1 -1 255
	return 0;
}


#include<stdio.h>
int main()
{
	char a = -128;
	/*10000000000000000000000010000000   原码-- -128
	11111111111111111111111101111111   反码
	11111111111111111111111110000000   补码
	但是只能存8个比特位，结果为10000000
	需要进行整形提升
	提升的时候需要看原来的符号位，全部补成1
	结果为11111111111111111111111110000000  --补码
	又因为是无符号数，所以原码，反码，补码全部相同
	所以就得到了结果：4294967168*/
	printf("%u\n", a);
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
int main()
{
	int n = 9;
	//9存在内存中，存储的时他的补码
	//00000000000000000000000000001001
	float* pFloat = (float*)& n;
	//要把一个整形，转换层成一个浮点型，那么现在就来转换一下
	//0 00000000 00000000000000000001001
	//又因为上述浮点型的存储中E全为0，所以这个数字是一个无限接近于0的数字 ，所以打印的结果为0.000000
	printf("n的值为:%d\n", n);
	//以整形的形式存入，再以整形的形式取出，那么结果当然还是整形了，所以说结果为9;
	printf("*pFloat的值为:%f\n", *pFloat);
	//要把一个整形，转换层成一个浮点型，那么现在就来转换一下
	//0 00000000 00000000000000000001001
	//又因为上述浮点型的存储中E全为0，所以这个数字是一个无限接近于0的数字 ，所以打印的结果为0.000000
	*pFloat = 9.0;
	printf("n的值为:%d\n", n);
	//以浮点数的形式存进去，以浮点数的形式往出拿
	//先将9写成二进制的形式
	//1001.0
	//1.001*2^3;
	//0 100000010 00100000000000000000000  --补码
	//整数，原，反，补相同
	//所以结果为010000001000100000000000000000000  --结果为1091567616
	printf("*pFloat的值为:%f\n", *pFloat);
	//以浮点数形式存进去，再以浮点是结果拿出来，结果是不会变化的
	//结果为9.000000
	return 0;
}
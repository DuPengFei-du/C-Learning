#define _CRT_SECURE_NO_WARNINGS 1



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
	printf("c:\\test\\test.c\n");
	return 0;
}
//输出的结果为
//c:\test\test.c


#include<stdio.h>
#include<string.h>
int main()
{
	printf("%d\n", 10);
	printf("%d\n", strlen("abc"));
	printf("%d\n", strlen("c:\test\47\test.c"));
	return 0;
	//其中，第三个printf语句的输出结果为13，主要的陷阱就在于\47
	//这其中的本质还是在考察对于转义字符的理解
	//\ddd也为转义字符，其中ddd表示1-3个八进制的数字，这三个东西统一的看成一个字符，所以说长度为1.
	//\xddd  ddd表示3个16进制数字
}


#include<stdio.h>
int main()
{
	printf("%c\n", '\'');
	printf("%s\n", "\"");
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
	int arr[5] = { 3,4,68,2,4 };
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
	//int a = 5/2;
	//int a = 5/2.0;
	//printf("%d\n", a);
	//int a = 5%2;
	//printf("%d\n", a);
	int a = 15;
	int b = a << 1;
	//a = a<<1;
	printf("%d\n", a);
	printf("%d\n", b);
	//<< 移位操作符-移动的是二进制位
	//原码-反码-补码
	//00000000000000000000000000001111-原码-反码-补码相同
	//00000000000000000000000000011110
	//
	//-1
	//10000000000000000000000000000001-原码
	//11111111111111111111111111111110-反码
	//11111111111111111111111111111111-补码
	system("pause");
	return 0;
}
//详细还是看笔记本上相关内容


#include<stdio.h>
int main()
{
	int a = 10;
	int b = 2;
	int c = 4;
	int d = (a = b + c, b = c - 2, c = c + b);
	printf("%d\n", d);
	return 0;
	//结果为6
}


#include<stdio.h>
void test()
{
	static int n = 1;   //n为局部变量
	n++;
	printf("%d ", n);
}
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		test();
	}
	return 0;
}
//打印的结果是2-11，用static修饰变量，创建了就不销毁了。


#include<stdio.h>
//自定义类型
struct Stu
{
	char name[20];   //一个汉字是两个字符
	int age;
	float score;
};
int main()
{
	struct Stu s = { "张三",20,60.0f };
	struct Stu* ps = &s;  //结构体指针
	printf("%s %d %f", ps->name, ps->age, ps->score);
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
//数组也是有类型的，数组的类型就是把数组明名去掉剩下的那一部分


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
//和大小端字节序是有关系的


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
//补码可以将数值位和符号位同一处理，同时，还可以将加法和减法同一处理
//cpu只有加法计算器，所以说减法会被转换为加法从而计算


//判断机器的大小端问题
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
int CheckSystem()
{
	int a = 1;
	char* pa = (char*)& a;
	return  *pa;
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

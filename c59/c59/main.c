#define _CRT_SECURE_NO_WARNINGS 1



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
	int n = 0;
	(void)scanf("%d", &n);
	if (n % 2 == 1)
		printf("奇数");
	else
		printf("偶数");
	return 0;
}


#include<stdio.h>
int main()
{
	int n = 0;
	int i = 1;
	int sum = 1;
	(void)scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum *= i;
	}
	printf("%d", sum);
	return 0;
}


#include<stdio.h>
int main()
{
	char arr1[] = "***********";
	char arr2[] = "hello world";
	int left = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int right = sz - 1;
	while (left <= right)
	{
		arr1[left] = arr2[left];
		arr1[right] = arr2[right];
		left++;
		right--;
	}
	printf("%s", arr1);
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
#include<string.h>
int main()
{
	printf("%d\n", 10);
	printf("%d\n", strlen("abc"));
	//printf("%d\n", strlen("c:\test\47\test.c");
	return 0;
	//其中，第三个printf语句的输出结果为13，主要的陷阱就在于\47
	//这其中的本质还是在考察对于转义字符的理解
	//\ddd也为转义字符，其中ddd表示1-3个八进制的数字，这三个东西统一的看成一个字符，所以说长度为1.
	//\xddd  ddd表示3个16进制数字
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
	int a = (1, 2, 3, 4, 5);
	printf("%d\n", a);
	return 0;
}


#include<stdio.h>
void test()
{
	int n = 1;
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
	//屏幕上会出现10个2
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
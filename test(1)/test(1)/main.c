#define _CRT_SECURE_NO_WARNINGS 1


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
	int count = 0;
	for (int i = 100; i <= 200; i++)
	{
		if (i % 2 == 1)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("%d", count);
	return 0;
}


#include<stdio.h>
int main()
{
	int day = 0;
	(void)scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday\n");
		break;
	case 6:
	case 7:
		printf("weekend\n");
		break;
	default:
		printf("输入错误，请重新输入!\n");
		break;
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int j = 0;
	int count = 0;
	for (int i = 100; i <= 200; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (j == i)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("%d", count);
	return 0;
}


#include<stdio.h>
#include<math.h>
int main()
{
	int j = 0;
	int count = 0;
	for (int i = 100; i <= 200; i++)
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
				break;
		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("%d", count);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 1;
	(void)scanf("%d %d", &a, &b);
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	printf("%d", b);
	return 0;
}


#include<stdio.h>
int main()
{
	int age = 0;
	(void)scanf("%d", &age);
	if (age < 18)
		printf("未成年\n");
	else
		printf("成年\n");
	return 0;
}


#include<stdio.h>
int main()
{
	int age = 10;
	if (age == 5)
		printf("age==5\n");
	return 0;
}
//屏幕上什么都不会打印，因为age！=5；


#include<stdio.h>
int main()
{
	int age = 10;
	if (age = 5)
		printf("age==5\n");
	return 0;
}
//频幕上会打印age==5，因为把5赋值给了age，所以if后面的括号里面的值是真的，所以回打印要求的信息


#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			break;
		printf("%d ", i);
		i++;
	}
	return 0;
}
//打印结果为1，2，3，4
//break永久的跳出循环，停止后期的所有循环，永久的终止循环


#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			continue;
		printf("%d ", i);
		i++;
	}
	return 0;
}
//打印结果是1，2，3，4，4，4，4，4...死循环


#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		i++;
		if (i == 5)
			continue;
		printf("%d ", i);
	}
	return 0;
}
//打印结果为2，3，4，5，7，8，9，10，11
//continue作用：continue用来终止本次的循环，当次continue之后的语句不再执行。


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	for (a = 1; a <= 9; a++)
	{
		for (b = 1; b <= a; b++)
		{
			printf("%d*%d=%2d ", a, b, a * b);
		}
		printf("\n");
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			break;
		printf("%d ", i);
	}
	return 0;
}
//打印结果为1，2，3，4



#include<stdio.h>
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++)
	{
		printf("hehe\n");
		arr[i] = 0;
	}
	return 0;
}
//代码的打印结果是hehe的死循环


#include<stdio.h>
int main()
{
	int x, y;
	for (x = 0, y = 0; x < 2 && y < 5; ++x, ++y)
	{
		printf("hehe\n");
	}
	return 0;
}
//打印结果为2个hehe
//&&操作符只要一边为假，另一边就不用看了。


#include<stdio.h>
int main()
{
	int x = 0;
	int y = 0;
	for (x = 0, y = 0; x < 2, y < 5; ++x, ++y)
	{
		printf("hehe\n");
	}
	return 0;
}
//打印结果为5个hehe，利用了逗号表达式，x=2的情况被忽略了，只看y<5,所以打印5个hehe


#include<stdio.h>
int main()
{
	char a = 'w';
	char* pc = &a;   //这个时候，pc称为字符指针，pc的类型为char*
	char arr[10] = "abc";
	char* pa = arr;   //arr作为数组名，他代表的是数组首元素的地址，pa的类型为char*
	char* p = "abcdef";  //此时p只具有4个字节，但是abcdef不算\0有6个字节，显然放不下
	//那么此时，p中存的就是"abcdef"中首个字母a的地址，地址用指针接收，刚好为4个字节
	//上述常量表达式的结果就是首字符a的地址。
}


#include<stdio.h>
int main()
{
	char* p1 = "abcdef";
	char* p2 = "abcdef";
	if (p1 == p2)
		printf("p1==p2");
	else
		printf("p1!=p2");
	return 0;
	//打印结果为p1==p2
	//虽然把字符串abcdef地址存在了p1和p2当中，但是两个字符串是一样的
	//都是abcdef，所以首元素a的地址自然也是一样的了
	//abcdef为常量字符串，所以说他是不能被改变的，其实也只会出现一次abcdef
	//但是p1的地址和p2的地址是绝对不一样的。
}


#include<stdio.h>
int main()
{
	char arr1[] = "abcdef";
	//创建了一个数组，数组中存的是abcdef
	const char* p = "abcdef";
	//将字符串abcdef中首元素的地址，即a的地址，存在p中
	arr1[2] = 'w';
	//修改数组中的内容，是被允许的
	//*(p + 2) = 'w';        //p[2]
	//p所指向的是一个常量字符串，常量字符串中的值是不可以被修改的
	return 0;
	//这个程序运行起来是会崩溃的，崩溃的主要原因在于，*(p+2)='w'
	//这个语句是不正确的
	//字符指针不仅仅用来存放字符的地址，还可能存放一个字符串的起始地址
}


#include<stdio.h>
void Print1(int arr[], int sz)
{
	int i = 0;
	for (i = 1; i <= sz; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
}
void Print2(int(*p)[10], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", (*p)[i]);
		//首先找到数组，用(*p)找到数组，然后去访问第i个元素
		//如果不带括号的话，那么p就会先和[]进行结合
		//其实(*p)就等于是数组名然后[i]，就相当于是arr[i];
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Print1(arr, sz);
	Print2(&arr, sz);
	return 0;
}


#include<stdio.h>
void Print1(int arr[3][5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
void Print2(int(*p)[5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			//printf("%d ", (*(p+i))[j]);
			printf("%d ", *(*(p + i) + j));
			//*(p+i)相当于找到了第i行首元素的地址
			//也可以写成p[i][j]
			//其实p就相当于arr
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { 1,2,3,4,5,3,4,5,6,7,4,5,6,7,8 };
	Print1(arr, 3, 5);
	Print2(arr, 3, 5);
	//arr代表首元素的地址，对于二维数组来说，首元素的地址就是第一行的地址
	//所以列标是很重要的
	return 0;
}


#include<stdio.h>
void test(int arr[3][5])
{

}
//void test(int arr[][])
//{
//	//这种传参是不正确的，可以省略行，不可以省略列
//}
void test(int arr[][5])
{

}
//总结:二维数组传参，函数形式的设计只能省略第一维的[],不能省略第二维的
//因为对一个二维数组，可以不知道有多少行，但是必须知道一行有多少个元素
//这样才会方便运算，同样，一样的道理，如果用数组接收参数，那么就原模原样的接收就可以了
void test(int(*arr)[5])
{

}
int main()
{
	int arr[3][5];
	test(arr);
}
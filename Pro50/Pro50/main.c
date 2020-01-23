#define _CRT_SECURE_NO_WARNINGS 1



//找出两个整数中的较大数
#include<stdio.h>
int MAX(int x, int y)
{
	return x > y ? x : y;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	(void)scanf("%d %d", &a, &b);
	c = MAX(a, b);
	printf("%d\n", c);
	return 0;
}


//写Swap函数
#include<stdio.h>
void Swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
int main()
{
	int a = 0;
	int b = 0;
	(void)scanf("%d %d", &a, &b);
	Swap(&a, &b);
	printf("%d %d", a, b);
	return 0;
}


//写一个函数判断一个数是不是素数
#include<stdio.h>
int is_prime(n)
{
	int i = 0;
	for (i = 2; i <= n - 1; i++)
	{
		if (n % i == 0)
			break;
	}
	if (i == n)
		return 1;
}
int main()
{
	int n = 0;
	int ret = 0;
	(void)scanf("%d", &n);
	ret = is_prime(n);
	if (ret == 1)
		printf("是素数");
	else
		printf("不是素数");
	return 0;
}


//写函数判断是不是闰年
#include<stdio.h>
int is_leapyear(i)
{
	if (i % 4 == 0 && i % 10 != 0 || i % 400 == 0)
		return 1;
	else
		return 0;
}
int main()
{
	int i = 0;
	int ret = 0;
	(void)scanf("%d", &i);
	ret = is_leapyear(i);
	if (ret == 1)
		printf("是闰年");
	else
		printf("不是闰年");
	return 0;
}

//求字符串的长度
#include<stdio.h>
int my_strlen(const char* str)
{
	if (*str == '\0')
	{
		return 0;
	}
	else
		return 1 + my_strlen(str + 1);
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}


//利用递归求n的阶乘
#include<stdio.h>
int fac(int n)
{
	if (n == 1 || n == 0)
		return 1;
	else
		return n * fac(n - 1);
}
int main()
{
	int n = 0;
	int ret = 0;
	(void)scanf("%d", &n);
	ret = fac(n);
	printf("%d", ret);
	return 0;
}


//求斐波那契数
#include<stdio.h>
int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}
int main()
{
	int n = 0;
	int ret = 0;
	(void)scanf("%d", &n);
	ret = fib(n);
	printf("%d\n", ret);
	return 0;
}


//字符串拷贝
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[100] = { 0 };
	char arr2[] = "Hello World";
	strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


//非递归实现斐波那契数
#include<stdio.h>
int main()
{
	int n = 0;
	int a = 1;
	int b = 1;
	int c = 1;
	(void)scanf("%d", &n);
	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	printf("%d", c);
}


#include<stdio.h>
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
	return 0;
}
//打印的结果为4 3 2 1
//printf函数的返回值是字符的个数
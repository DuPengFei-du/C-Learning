#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = { 0 };
	char arr3[] = "Hello world";
	strcpy(arr1, arr3);
	printf("%s\n", arr1);
	return 0;
}


#include<stdio.h>
#include<math.h>
int main()
{
	int n = 0;
	int k = 0;
	double ret = 0;
	(void)scanf("%d %d", &n, &k);
	ret = pow(n, k);
	printf("%lf",ret);
	return 0;
}


//找出两个数中的较大数
#include<stdio.h>
int MAX(int x, int y)
{
	return x > y ? x : y;
}
int main()
{
	int a = 0;
	int b = 0;
	int ret = 0;
	(void)scanf("%d %d", &a, &b);
	ret = MAX(a, b);
	printf("%d", ret);
	return 0;
}


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


//写函数判断是不是素数
#include<stdio.h>
int is_prime(int i)
{
	int j = 0;
	for (j = 2; j < i; j++)
	{
		if (i % j == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	if (is_prime(n) == 1)
	{
		printf("是素数\n");
	}
	else
	{
		printf("不是素数\n");
	}
	return 0;
}


#include<stdio.h>
int is_prime(int n)
{
	int i = 0;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	if ((is_prime(n)) == 1)
		printf("素数");
	else
		printf("不是素数");
	return 0;
}


#include<stdio.h>
int is_leapyear(int n)
{
	if (n % 4 == 0 && n % 100 == 0 || n % 400 == 0)
		return 1;
	else
		return 0;
}
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	if ((is_leapyear(n)) == 1)
		printf("闰年");
	else
		printf("不是闰年");
	return 0;
}


//模拟实现strlen
//用递归
#include<stdio.h>
int my_strlen(const char* str)
{
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen(str + 1);
}
int main()
{
	char arr1[] = "abcdef";
	int len = my_strlen(arr1);
	printf("%d", len);
	return 0;
}


//用计数器
#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)
{
	assert(str != NULL);
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr1[] = "abcdef";
	int len = my_strlen(arr1);
	printf("%d", len);
	return 0;
}


//斐波那契数列
#include<stdio.h>
int fib(int n)
{
	if (n < 3)
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
	printf("%d", ret);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 1;
	int b = 1;
	int c = 1;
	int n = 0;
	(void)scanf("%d", &n);
	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	printf("%d", c);
	return 0;
}
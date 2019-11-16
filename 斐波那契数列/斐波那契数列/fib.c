//求斐波那契数列
#include<stdio.h>
long long fib(long long n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}
int main()
{
	long long n = 0;
	long long ret = 0;
	(void)scanf("%lld", &n);
	ret = fib(n);
	printf("%lld", ret);
	return 0;
}


//循环求斐波那契数列
#include<stdio.h>
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
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


//利用循环
//时间复杂度为0(n)
#include<stdio.h>
long long fib(long long n)
{
	long long a = 1;
	long long b = 1;
	long long  res = 1;
	for (long long  i = 3; i <= n; i++)
	{
		res = a + b;
		a = b;
		b = res;
	}
	return res;
}
int main()
{
	long long n = 0;
	long long ret = 0;
	(void)scanf("%lld",&n);
	ret = fib(n);
	printf("%lld", ret);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1



//斐波那契
#include<stdio.h>
long long fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	printf("%lld", fib(n));
}
//上述代码虽然书写非常的方便，但是重复运算太多，导致时间复杂度太高，时间复杂度为0(2^N),空间复杂度为0(N)


#include<stdio.h>
long long fib(long long a, long long b, int n)
{
	if (n < 3)
		return 1;
	else if (n == 3)
		return a + b;
	else
		return fib(b, a + b, n - 1);
}
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	printf("%lld", fib(1,1,n));
	return 0;
}
//上述代码的时间复杂度为0(N),空间复杂度取决于编译器是否优化，如果编译器优化的话，那么空间复杂度为0(1)
//如果编译器不优化，那么空间复杂度为0(N)


#include<stdio.h>
long long fib(int n)
{
	long long a = 1;
	long long b = 1;
	long long c = 1;
	for (int i = 3; i <= n; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	printf("%lld", fib(10));
	return 0;
}
//时间复杂度为0(N),空间复杂度为0(N)
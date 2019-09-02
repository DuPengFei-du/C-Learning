////斐波那契数列
// //1 1 2 3 5 8...
////求第n个斐波那契数是多少
#include<stdio.h>
int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 2) + fib(n - 1);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = 0;
	ret = fib(n);
	printf("%d", ret);
	return 0;
}
////这个代码的计算能力较为缓慢，以下做出改进
//
//
//
////利用非递归求斐波那契数列
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
	scanf("%d", &n);
	int ret = 0;
	ret = fib(n);
	printf("%d", ret);
	return 0;
}
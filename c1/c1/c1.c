////쳲���������
// //1 1 2 3 5 8...
////���n��쳲��������Ƕ���
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
////�������ļ���������Ϊ���������������Ľ�
//
//
//
////���÷ǵݹ���쳲���������
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
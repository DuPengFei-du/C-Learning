#include<stdio.h>
void test()
{
	printf("hehe\n");
	test();
}
int main()
{
	test();
	return 0;
}


/*
�����ѧ������һ��ʱ���ʵ����ѧ�������꣬��˵�ȵ��ĸ�ѧ�������꣬���ĸ�ѧ���ȵ�����
ѧ�������꣬������ѧ���ȵڶ���ѧ�������꣬�ڶ���ѧ���ȵ�һ��ѧ�������꣬��һ��ѧ����
������10�꣬�������������Ϊ�й��ڵݹ�ĺ���
*/
#include<stdio.h>
int main()
{
	int age(int n);
	printf("%d", age(5));
	return 0;
}
int age(int n)
{
	int c;
	if (n == 1)
		c = 10;
	else
		c = age(n - 1) + 2;
	return(c);
}


//�õݹ�ķ������n��
/*
˼·����n�������õ��Ʒ���������1��ʼ�����ң��ٳ�3...һֱ�˵�n
���Ƶ��ص��Ǵ�һ����֪����ʵ����1��=1������������һ�������Ƴ���һ����ʵ
��2��=1*2���ٴ�����µ���֪����ʵ�������������Ƴ�һ���µ���ʵ..
n!=n*(n-1)

��n�Ľ׳�Ҳ�����õݹ�ķ�������5��=4��*5
n*��n-1����
*/
#include<stdio.h>
int fac(int n)
{
	int ret = 0;
	if (n < 0)
	{
		printf("error!");
	}
	if (n == 0 || n == 1)
	{
		ret = 1;
	}
	if (n > 1)
		ret = fac(n - 1) * n;
	return(ret);
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = fac(n);
	printf("%d", ret);
	return 0;
}


//���n��쳲�������
#include<stdio.h>
int fib(int n)
{
	if (n == 0)
		return 0;
	if (n <= 2)
		return 1;
	if (n > 2)
		return fib(n - 2) + fib(n - 1);
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = fib(n);
	printf("%d", ret);
	return 0;
}



//f(n) = 2 * f(n - 1)
#include<stdio.h>
int jump(int n)
{
	int ret = 0;
	if (n <= 1)
		return 1;
	else
		return 2 * jump(n - 1);
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = jump(n);
	printf("%d", ret);
	return 0;
}
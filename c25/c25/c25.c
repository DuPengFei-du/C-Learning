//求两个数的最大公约数
#include<stdio.h>
int main()
{
	int a, b;
	int c;
	(void)scanf("%d %d", &a, &b);
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	printf("%d", b);
	return 0;
}


//求两个数的最小公倍数
#include<stdio.h>
int main()
{
	int a, b, c;
	int m, n, y;
	(void)scanf("%d %d", &a, &b);
	m = a;
	n = b;
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	y = (m * n) / b;
	printf("%d %d", b, y);
	return 0;
}


//求n的阶乘
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 1;
	int sum = 1;
	(void)scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum * i;
	}
	printf("%d", sum);
	return 0;
}


//嵌套求阶乘
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 1;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		while (i <= n)
		{
			ret = ret * i;
			i++;
		}
		sum += ret;
	}
	printf("%d", sum);
	return 0;
}


#include<stdio.h>
void test(int *arr)
{
	;
}
int main()
{
	int arr[10] = { 0 };
	test(arr);
}

#include<stdio.h>
void test2(int* arr[20])
{
	;
}
int main()
{
	int* arr2[20] = { 0 };
	test2(arr2);
}


//函数指针
#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int (*p)(int x, int y)= &Add;
	int ret=(*p)(2, 3);
	printf("%d", ret);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		printf("%d ",i);
		i++;
	}
	return 0;
}


//打印1-100之间的奇数
#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 0; i < 100; i++)
	{
		if (i % 2 == 1)
			printf("%d ", i);
	}
	return 0;
}


//打印100-200之间的素数
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	int j = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (j == i)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n");
	printf("%d\n", count);
	return 0;
}


//另一种求素数的方法
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i%j==0)
				break;
		}
		if (j >sqrt(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n");
	printf("%d",count);
	return 0;
}


//最大公约数和最小公倍数
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
	printf("%d\n", b);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int m, n, z;
	int c = 1;
	(void)scanf("%d %d", &a, &b);
	m = a;
	n = b;
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	z = (m * n) / b;
	printf("%d\n", b);
	printf("%d\n", z);
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int sum = 1;
	(void)scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum * i;
	}
	printf("%d", sum);
	return 0;
}


#include<stdio.h>
int fac(int n)
{
	int i = 0;
	int sum = 1;
	for (i = 1; i <= n; i++)
	{
		sum = sum * i;
	}
	return sum;
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


//二分查找
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是:%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}


//输出乘法口诀表
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
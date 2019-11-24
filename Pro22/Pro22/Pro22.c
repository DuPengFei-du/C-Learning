#define  _CRT_SECURE_NO_WARNINGS 1




//判断一个数字是不是素数
#include<stdio.h>
int is_prime(int n)
{
	int j = 0;
	for (j = 2; j < n - 1; j++)
	{
		if (n % j == 0)
			return 0;
	}
	if (j == n)
		return 1;
}
int main()
{
	int n = 0;
	int count = 0;
	(void)scanf("%d", &n);
	if (is_prime(n) == 1)
	{
		printf("是素数\n");
	}
	else
		printf("不是素数\n");
	return 0;
}


//求素数
#include<stdio.h>
int main()
{
	int j = 0;
	int count = 0;
	for (int i = 100; i <= 200; i++)
	{
		for (j = 2; j <= i - 1; j++)
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
	int i = 0;
	int count = 0;
	int j = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
				break;
		}
		if (j > sqrt(i))
		{
			printf("%d ", i);
			count++;
		}
	}
    printf("\n");
	printf("%d", count);
	return 0;
}


//输出奇数
#include<stdio.h>
int main()
{
	int count = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 2 == 1)
		{
			count++;
			printf("%d ",i);
		}
	}
	printf("\n");
	printf("%d", count);
	return 0;
}

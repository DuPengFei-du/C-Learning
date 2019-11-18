#define  _CRT_SECURE_NO_WARNINGS 1




//普通遍历的算法
#include<stdio.h>
int main()
{
	int j = 0;
	int count = 0;
	for (int i = 100; i <= 200; i++)
	{
		for (j = 2; j <=i - 1; j++)
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


//利用开平方的方法
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


/*输入M、N，1 < M < N < 1000000，
求区间[M, N]内的所有素数的个数。
素数定义：除了1以外，只能被1和自己整除的自然数称为素数
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = m; i <= n; i++)
	{
		for (j = 2; j <= sqrt(i) + 1; j++)
		{
			if (i % j == 0)
				break;
		}
		if (j == i || j > sqrt(i) + 1)
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}
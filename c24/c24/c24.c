//100-200之间的素数
#include<stdio.h>
int main()
{
	int i, j;
	int count = 0;
	for (i = 100; i <= 200; i++)
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

//另一种方法
#include<stdio.h>
#include<math.h>
int main()
{
	int i, j;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j <=sqrt(i); j++)
		{
			if (i % j == 0)
				break;
		}
		if (j > sqrt(i))
			printf("%d ",i);
	}
	return 0;
}


//打印乘法口诀表
#include<stdio.h>
int main()
{
	int a, b;
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


//1000-2000之间的闰年
#include<stdio.h>
int main()
{
	int i;
	int count = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("%d", count);
	return 0;
}


//交换两个数的值
#include<stdio.h>
int main()
{
	int a, b, temp;
	(void)scanf("%d %d", &a, &b);
	temp = a;
	a = b;
	b = temp;
	printf("%d %d", a, b);
	return 0;
}

#include<stdio.h>
int main()
{
	int a, b;
	(void)scanf("%d %d", &a, &b);
	a = a ^ b; 
	b = a ^ b;
	a = a ^ b;
	printf("%d %d", a, b);
	return 0;
}

#include<stdio.h>
int main()
{
	int a, b;
	(void)scanf("%d %d", &a, &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d %d", a, b);
	return 0;
}


//输出1-100之间的奇数
#include<stdio.h>
int main()
{
	int i;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 1)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("%d", count);
	return 0;
}

//另一种方法
#include<stdio.h>
int main()
{
	int i;
	for (i = 1; i <= 100; i += 2)
	{
		printf("%d ", i);
	}
	return 0;
}


//找出10个数中的最大值
#include<stdio.h>
int main()
{
	int i = 0;
	int arr[10] = { 11,222,33,444,555,67,56,43,32,22 };
	int MAX = arr[0];
	for (i = 0; i < 10; i++)
	{
		if (arr[i] > MAX)
			MAX = arr[i];
	}
	printf("%d", MAX);
	return 0;
}
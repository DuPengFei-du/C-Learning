//把冒泡排序封装成一个函数
#include<stdio.h>
void BubbleSort(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < sz ; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[10] = { 12,32,54,37,63,89,65,48,99,35 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	return 0;
}



//对冒泡排序的改进
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void BubbleSort(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void test1()
{
	int i = 0;
	int arr[10] = { 21,34,5,67,43,28,73,59,79,80 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	Print(arr, sz);
}
int cmp_int(const void* elem1, const void* elem2)
{
	return *(int*)elem1 - *(int*)elem2;
}
void test2()
{
	int arr[10] = { 21,34,5,67,43,28,73,59,79,80 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz,sizeof(arr[0]),cmp_int);
	Print(arr, sz);
}
struct Stu
{
	char name[20];
	int age;
};
int cmp_struct_by_name(const void* elem1, const void* elem2)
{
	return strcmp(((struct Stu*)elem1)->name, ((struct Stu*)elem2)->name);
}
void test3()
{
	struct Stu arr[]= { {"zhangsan",20},{"lisi",15},{"wangxu",35} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_struct_by_name);
}
int main()
{
	//test1();
	//printf("\n");
	//test2();
	test3();
	return 0;
}


//斐波那契数列,递归
#include<stdio.h>
int fib(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
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

//利用非递归写斐波那契数列
#include<stdio.h>
int main()
{
	int n = 0;
	int a = 1;
	int b = 1;
	int c = 1;
	(void)scanf("%d", &n);
	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

#include<stdio.h>
int main()
{
	int n = 0;
	int a = 1;
	int b = 1;
	int c = 1;
	(void)scanf("%d", &n);
	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	printf("%d", c);
	return 0;
}


//有一个3*4的矩阵，要求编写程序求出其中最大的那个元素的值，以及其所在的行号和列号
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int row;
	int col;
	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,20,11,6} };
	int max = arr[0][0];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
				row = i;
				col = j;
			}
		}
	}
	printf("%d %d %d", max,row,col);
	return 0;
}


//求一个3x3矩阵对角线元素的和
#include<stdio.h>
int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int sum1 = 0;
	int sum2 = 0;
	int sum = 0;
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			sum1 = arr[0][0] + arr[1][1] + arr[2][2];
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			sum2 = arr[0][2] + arr[1][1] + arr[2][0];
		}
	}
	sum = sum1 + sum2;
	printf("%d", sum);
	return 0;
}


//用递归求n的阶乘
int fac(int n)
{
	if (n < 1)
	{
		return 1;
	}
	else
	{
		return n * fac(n - 1);
	}
}
#include<stdio.h>
int main()
{
	int n = 0;
	int ret = 0;
	(void)scanf("%d", &n);
	ret = fac(n);
	printf("%d", ret);
	return 0;
}
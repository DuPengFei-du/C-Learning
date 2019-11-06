//100-999内的水仙花数
#include<stdio.h>
#include<math.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int i = 0;
	for (i = 100; i < 1000; i++)
	{
		a = i / 100;
		b = (i % 100) / 10;
		c = i % 10;
		if (i == pow(a, 3) + pow(b, 3) + pow(c, 3))
		{
			printf("%d\n", i);
		}
	}
	return 0;
}


#include<stdio.h>
#include<math.h>
int main()
{
	int m, n;
	int i = 0;
	int j = 0;
	(void)scanf("%d %d", &m, &n);
	int count = 0;
	for (i = m; i <= n; i++)
	{
		for (j = 2; j <= i; j++)
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
	printf("%d", count);
	return 0;
}


//复杂的水仙花数
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int m, n, flag = 0;
	int b, s, g;
	while (cin >> m >> n)
	{
		for (int i = m; i <= n; i++)
		{
			b = i / 100;
			s = (i % 100) / 10;
			g = i % 10;
			if (i == (pow(b, 3) + pow(s, 3) + pow(g, 3)))
			{
				if (flag == 0)
				{
					cout << i;
					flag = 1;
				}
				else
				{
					cout << " " << i;
				}
			}
		}
		if (flag == 0)
		{
			cout << "no";
		}
	}
	return 0;
}


//打印数组中元素的地址
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		printf("&arr[%d]=%p\n", i,&arr[i]);
	}
	return 0;
}


//二维数组在内存中的地址
#include<stdio.h>
int main()
{
	int arr[3][4] = { 0 };
	int i = 0;
	int j = 0;
	for(i = 0; i < 3; i++)
	{
		for (j=0;j<4;j++)
		{
			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
		}
	}
	return 0;
}


// 冒泡排序
#include<stdio.h>
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int i = 0;
	int j = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz -i - 1; j++)
		{
			if(arr[j]>arr[j+1])
				{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				}
		}
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


//封装成函数
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
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	return 0;
}
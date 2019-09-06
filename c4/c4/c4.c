#include<stdio.h>
int main()
{
	int a[2][4] = { {1,2,3,4},{5,6,7,8} };
	int i = 0;
	int j = 0;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}


//冒泡排序
//一套冒泡排序搞定一个数子
//如果有10个元素，那么就要进行9套冒泡排序
//先是要写多少套，然后一套内部有多少个
//每一套完成之后都会少一个元素，之后的对数也会少1
#include<stdio.h>
int main()
{
	int arr[] = { 1,3,5,7,9,2,4,6,8,10 };
	int i = 0;
	int j = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz - 1; i++)//10个元素需要进行9套冒泡排序
	{
		for (j = 0; j < sz - 1 - i; j++)//10个元素有九套，一套的内部也进行9组比较
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
	return 0;
}


//把冒泡排序封装成函数
#include<stdio.h>
void  BubbleSort(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
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
int main()
{
	int arr[] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	BubbleSort(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
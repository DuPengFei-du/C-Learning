

//√∞≈›≈≈–Ú
#include<stdio.h>
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int i = 0;
	int j = 0;
	int sz = sizeof(arr) / sizeof(arr[10]);
	for (int i = 0; i < sz-1; i++)
	{
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}





//√∞≈›≈≈–Ú∑‚◊∞≥…∫Ø ˝
#include<stdio.h>
void BubbleSort(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	for (int i = 0; i < sz; i++)
	{
		for (int j = 0; j < sz - i - 1; j++)
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
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}






//√∞≈›≈≈–Úµƒ”≈ªØ
#include<stdio.h>
void BubbleSort(int arr[], int sz) {
	int i = 0;
	int j = 0;
	int flag = 0;
	for (i = 0; i < sz - 1; ++i)
	{
		flag = 0;
		for (j = 0; j < sz - 1 - i; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				flag = 1;
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
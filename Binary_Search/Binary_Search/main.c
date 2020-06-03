#define _CRT_SECURE_NO_WARNINGS 1 


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int key = 6;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < key)
			left = mid + 1;
		else if (arr[mid] > key)
			right = mid - 1;
		else if(arr[mid] == key)
		{
			printf("找到了，下标为:%d", mid);
			break;
		}
	}
	return 0;
}


#include<stdio.h>
void Binary_Search(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	int key = 5;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < key)
			left = mid + 1;
		else if (arr[mid] > key)
			right = mid - 1;
		else if(arr[mid] == key)
		{
			printf("找到了，下标为:%d", mid);
			break;
		}
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Binary_Search(arr, sz);
	return 0;
}


#include<stdio.h>
int Binary_Search(int left, int right, int arr[], int key)
{
	int mid = (left + right) / 2;
	if (left <= right)
	{
		if (key > arr[mid])
		{
			Binary_Search(mid + 1, right, arr, key);
		}
		else if (key < arr[mid])
		{
			Binary_Search(left, mid - 1, arr, key);
		}
		else if (key == arr[mid])
		{
			return mid;
		}
	}
		return -1;
}
int main()
{
	int arr[] = { 1,2,3,6,7,9,10 };
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	int ret = 0;
	int key = 6;
	ret = Binary_Search(left, right, arr,key);
	printf("%d", ret);
}

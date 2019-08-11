#include <stdio.h>

int binartSearch(int arr[], int len, int key) //arr[] 相当于 *arr(就是指针) 
{
	int left = 0;
	int right = len;

	//右边的下标，sizeof(arr) / sizeof(arr[0])目的是求得数组元素的个数，数组元素的个数 - 1
	//	就为最后一个元素的下标；
	//中间元素的下标（但存在溢出的问题，如果right特别大的话）
	//还有另外一种求平均值的方法
	while (left <= right)
	{
		int mid = left + (right - left) / 2;//这种算法一定不会溢出
		if (arr[mid] < key)
		{
			left = mid + 1;//跳过mid，少一次判断
		}
		else if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	if (left > right)
	{
		return -1;
	}
}

int main()
{
	//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int index = 0;
	int key = 0;
	int arr[10] = { 0 };
	//初始化建议用遍历的方法，这样长度和起点就能随意改变 
	for (i = 0; i < 10; i++)
	{
		arr[i] = i + 1;
	}

	int len = sizeof(arr) / sizeof(int);//字符数组的长度 
						  //要找的数 
	(void)scanf("%d", &key);
	index = binartSearch(arr, len, key);
	printf("%d元素在arr数组中的下标是%d", key, index);

	return 0;
}
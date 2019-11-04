#include<stdio.h>
int BinarySearch(int arr[], int sz,int key)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标为%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int key = 7;
	BinarySearch(arr, sz,key);
	return 0;
}


//二分查找
#include<stdio.h>
int BinarySearch(int arr[], int sz, int key)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int key = 7;
	int ret=BinarySearch(arr, sz, key);
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标为%d",ret);
	}
	return 0;
}


//演示多个字符从两端移动，向中间汇聚
#include<stdio.h>
int main()
{
	char arr1[] = "###########";
	char arr2[] = "hello world";
	int left = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int right = sz - 1;
	while (left < right)
	{
		arr1[left] = arr2[left];
		arr1[right] = arr2[right];
		left++;
		right--;
	}
	printf("%s", arr1);
	return 0;
}


//模拟实现strcpy
#include<stdio.h>
char* my_strcpy(char* dest, char* source)
{
	while (*source != '\0')
	{
		*dest = *source;
		dest++;
		source++;
	}
	*dest = *source;//把\0拷贝过去
}
int main()
{
	char arr1[] = "hello";
	char arr2[] = "world";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


//交换两个数字的值
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	(void)scanf("%d %d", &a, &b);
	int temp = a;
	a = b;
	b = temp;
	printf("%d %d", a, b);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	(void)scanf("%d %d", &a, &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d %d", a, b);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	(void)scanf("%d %d", &a, &b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d", a, b);
	return 0;
}


//模拟实现strlen
#include<stdio.h>
int my_strlen(char* str)
{
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen(str + 1);
}
int main()
{
	char arr1[] = "abcdef";
	int len = my_strlen(arr1);
	printf("%d", len);
	return 0;
}

//使用临时变量
#include<stdio.h>
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr1[] = "abcdef";
	int len = my_strlen(arr1);
	printf("%d", len);
	return 0;
}
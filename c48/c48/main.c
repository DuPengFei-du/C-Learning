#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	(void)scanf("%d %d", &a, &b);
	c = Add(a, b);
	printf("%d", c);
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 33,66,26,9,3,9,0,4,2,11 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


//判断是否为奇数
#include<stdio.h>
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	if (n % 2 == 1)
		printf("为奇数");
	else
		printf("为偶数");
	return 0;
}


#include<stdio.h>
int main()
{
	int count = 0;
	for (int i = 0; i <= 100; i++)
	{
		if (i % 2 == 1)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n");
	printf("%d ", count);
	return 0;
}


//求阶乘
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 1;
	int sum = 1;
	(void)scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum *= i;
	}
	printf("%d", sum);
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	int key = 5;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] == key)
		{
			printf("找到了，下标为:%d", mid);
			break;
		}
		else if (arr[mid] > key)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int n = 0;
	int i = 1;
	int sum = 0;
	int ret = 1;
	(void)scanf("%d", &n);
	for (n = 1; n <=10; n++)
	{
		ret = 1;
		for (i = 1; i <= n; i++)
		{
			ret *= i;
		}
		sum += ret;
	}
	printf("%d", sum);
	return 0;
}
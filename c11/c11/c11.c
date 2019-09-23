//编写程序数一下 1到 100 的所有整数中出现多少次数字9。 
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			count++;
			printf("%d ", i);
		}
		if (i / 10 == 9)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("%d", count);
	return 0;
}


//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值
#include<stdio.h>
int main()
{
	int i = 1;
	int j = -1;
	float sum = 0.0;
	float z = 1.0;
	for (i = 1; i <= 100; i++)
	{
		j = (-1) * j;
		z = j * (1.0 / i);
		sum = sum + z;
	}
	printf("%f", sum);
	return 0;
}


//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
#include<stdio.h>
void Swap(int arr1[], int arr2[], int len)
{
	int i = 0;
	int temp;
	for (i = 0; i < len; i++)
	{
		int temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}
int main()
{
	int i = 0;
	int arr1[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int arr2[10] = { 2,5,6,8,10,1,3,5,7,9 };
	int len = sizeof(arr1) / sizeof(arr1[0]);
	Swap(arr1, arr2, len);
	for (i = 0; i < len; i++)
	{
		printf("%d", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < len; i++)
	{
		printf("%d", arr2[i]);
	}
	return 0;
}

//交换
#include<stdio.h>
void Swap(int arr1[], int arr2[], int len)
{
	int i = 0;
	int temp;
	for (i = 0; i < len; i++)
	{
		int temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}
int main()
{
	int i = 0;
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 10,9,8,7,6,5,4,3,2,1 };
	int len = sizeof(arr1) / sizeof(arr1[0]);
	Swap(arr1, arr2, len);
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}


//二分查找
#include<stdio.h>
int main()
{
	int arr[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int key = 17;
	int left = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	int right = len - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}


/*
编写代码模拟三次密码输入的场景。
最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
可以重新输入，最多输入三次。三次均错，则提示退出程序。
最多能输入三次密码，密码正确，提示“登录成功”，密码错误，可以重新输入，最多输入三次。三次均错，则提示退出程序。
*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char arr[10] = { 0 };
	int i = 0;
	char arr1[] = "123456";
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:>\n");
		scanf("%s", arr);
		if (strcmp(arr, "123456") == 0)
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
	{
		printf("三次密码错误，退出程序\n");
	}
	system("pause");
	return 0;
}


//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定， 
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	scanf("%d", &k);
	for (i = 1; i <= k; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}
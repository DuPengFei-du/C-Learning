#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
#include<math.h>
int main()
{
	int n = 0;
	int k = 0;
	double ret = 0;
	(void)scanf("%d %d", &n, &k);
	ret = pow(n, k);
	printf("%lf", ret);
	return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "###########";
	char arr2[] = "hello world";
	strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}


#include<stdio.h>
int Max(int x, int y)
{
	return x > y ? x : y;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	(void)scanf("%d %d", &a, &b);
	c = Max(a, b);
	printf("%d", c);
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


//写一个函数判断是不是素数
#include<stdio.h>
int is_prime(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	if ((is_prime(n) == 1))
		printf("素数\n");
	else
		printf("不是素数\n");
}


//打印无符号数的每一位
#include<stdio.h>
void Print(int n)
{
	if (n > 9)
		Print(n / 10);
	printf("%d ", n % 10);
}
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	Print(n);
	return 0;
}


//求字符串长度
#include<stdio.h>
int my_strlen(const char* str)
{
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen(str + 1);
}
int main()
{
	char arr1[] = "hello world";
	int len = my_strlen(arr1);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
int my_strlen(const char* str)
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
	char arr1[] = "hello world";
	int len = my_strlen(arr1);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
int main()
{
	char arr1[] = "hello world";
	memset(arr1, 'x', 5);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
int main()
{
	int len = strlen("abcdef");
	printf("%d\n", len);
	printf("%d\n", strlen("abcdef"));
	return 0;
}
//把一个函数的返回值作为另一个函数的参数


#include<stdio.h>
#include<stdlib.h>
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


//模拟实现冒泡排序
#include<stdio.h>
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char temp = *buf1;
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2++;
	}
}
void my_bubblesort(int arr[], int sz, int width, int (*cmp)(const void* e1, const void* e2))
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (cmp((char*)arr + j * width, (char*)arr + (j + 1) * width) > 0)
			{
				//进行交换
				Swap((char*)arr + j * width, (char*)arr + (j + 1) * width, width);
			}
		}
	}
}
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int width = sizeof(arr[0]);
	my_bubblesort(arr, sz, width, cmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", strlen(arr));   //未知数，因为我并没有看到\0，所以不知道\0到底在哪
	//所以值是随机值 X
	printf("%d\n", strlen(arr + 0));  //arr此时作为首元素的地址，首元素地址+0还是首元素的地址
	//所以还是随机值X
	printf("%d\n", strlen(*arr));    //传进去的是字符a，小写a的ASCII码值为97
	//所以为错误代码
	printf("%d\n", strlen(arr[1]));  //传的是B，所以还是错误代码
	printf("%d\n", strlen(&arr));    //X
	printf("%d\n", strlen(&arr + 1));  //Y-X=6
	printf("%d\n", strlen(&arr[0] + 1));  //X+1
}
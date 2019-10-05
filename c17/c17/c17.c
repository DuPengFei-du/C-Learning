#include<stdio.h>
int main()
{
	int i = 0;
	int arr[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

#include<stdio.h>
void test1()
{
	printf("hh\n");
}
void test()
{
	test1();
}
int main()
{
	test();
	return 0;
}

//求n的阶乘
#include<stdio.h>
int main()
{
	int i = 1;
	int n = 0;
	int sum = 1;
	scanf("%d", &n);
	for (i = 2; i <= n; i++)
	{
		sum = sum * i;
	}
	printf("%d", sum);
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 1;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		while (i <= n)
		{
			ret = ret * i;
			i++;
		}
	}
	sum = sum + ret;
	printf("%d", sum);
	return 0;
}

#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	(void)scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret = 1;
		for (j = 1; j <= i; j++)
		{
			ret = ret * j;
		}
	}
	sum = sum + ret;
	printf("%d", sum);
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i < 12; i++)
	{
		printf("hehe\n");
		arr[i] = 0;
	}
	return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello bit";
	strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


//模拟实现strcpy
//字符串的拷贝
#include<stdio.h>
void my_strcpy(char* dest, char* source)//用指针接收
{
	while (*source != '\0')
	{
		*dest = *source;
		dest++;
		source++;
	}
	*dest = *source;
}
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello bit";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}
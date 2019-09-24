//冒泡排序
//升序排序
#include<stdio.h>
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int i = 0;
	int j = 0;
	int len = sizeof(arr) / sizeof(arr[0]);//数组元素的个数
	for (i = 0; i < len - i; i++)
	{
		for (j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//把冒泡排序封装成函数
#include<stdio.h>
void BubbleSort(int arr[], int len)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - i - 1; j++)
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
	int i = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, len);
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定， 
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表
#include<stdio.h>
int main()
{
	int input = 0;
	int i = 0;
	int j = 0;
	scanf("%d", &input);
	for (i = 1; i <= input; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}


/*
编写一个程序，可以一直接收键盘字符，
如果是小写字符就输出对应的大写字符，
如果接收的是大写字符，就输出对应的小写字符，
如果是数字不输出。
*/
#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'a' && ch <= 'z')
		{
			putchar(ch - 32);
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			putchar(ch + 32);
		}
		else if (ch >= '0' && ch <= '9')
		{
			continue;
		}
		else
		{
			putchar(ch);
		}
	}
	return 0;
}


/*
创建一个数组
实现函数init（）初始化数组
实现empty（）清空数组
实现reverse（）函数完成数组元素的逆置
要求：自己设计函数的参数，返回值
*/
#include<stdio.h>
void Init(int arr[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		arr[i] = 10;
	}
}
void Empty(int arr[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		arr[i] = 0;
	}
}
int main()
{
	int i = 0;
	int arr[10] = { 0 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Init(arr, len);//初始化数组
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	Empty(arr, len);
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//数组元素的逆置
#include<stdio.h>
void Reverse(int arr[], int len)
{
	int left = 0;
	int right = len - 1;
	while (left < right)
	{
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < len; i++)
	{
		arr[i] = i;
	}
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	Reverse(arr, len);
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


//用递归求第n个斐波那契数
#include<stdio.h>
int fib(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}
int main()
{
	int i = 0;
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = fib(n);
	printf("%d", ret);
	return 0;
}

//用非递归求第n个斐波那契数
#include<stdio.h>
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = fib(n);
	printf("%d", ret);
	return 0;
}
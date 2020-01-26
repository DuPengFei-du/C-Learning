/*
编写一个程序，可以一直接收键盘字符
如果是小写字符就输出对应大写字符
如果是大写字符，就输出对应的小写字符
如果是数字，那么就不输出
*/
#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar())!= EOF)
	{
		if (ch >= 'a' && ch <= 'z')
			putchar(ch - 32);
		else if (ch >= 'A' && ch <= 'Z')
			putchar(ch + 32);
		else if (ch >= '0' && ch <= '9')
			continue;
		else
			putchar(ch);
	}
	return 0;
}


//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
#include<stdio.h>
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}


#include<stdio.h>
//初始化
void Init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 10;
	}
}
//打印
void Print(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void Empty(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}
void Reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int temp = arr[left];
		arr[left]= arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}
int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Init(arr, sz);
	Print(arr, sz);
	Empty(arr, sz);
	Print(arr, sz);
	Reverse(arr, sz);
	return 0;
}


//编写一个函数实现n^k，使用递归实现
#include<stdio.h>
double Pow(int n, int k)
{
	if (k == 0)
		return 1;
	else if (k > 0)
		return n * Pow(n, k - 1);
	else     //----k<0的情况
		return 1.0 / Pow(n, -k);
}
int main()
{
	int n = 0;
	int k = 0;
	double ret = 0.0;
	(void)scanf("%d %d", &n,&k);
	ret=Pow(n, k);
	printf("%lf", ret);
	return 0;
}


//写一个递归函数DigitSum(n),输入一个非负整数，返回组成他的数字之和
//例如，调用DigitSum(1729),则应该返回1+7+2+9 他的和为19
#include<stdio.h>
int DigitSum(n)
{
	if (n > 9)
		return DigitSum(n / 10) + DigitSum(n % 10);
	else
		return n;
}
int main()
{
	int n = 0;
	int ret = 0;
	(void)scanf("%d", &n);
	ret = DigitSum(n);
	printf("%d", ret);
	//TDD----测试驱动开发
	return 0;
}

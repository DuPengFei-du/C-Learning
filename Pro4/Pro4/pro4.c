//输入1，7，9，5，8，6，2，用冒泡法进行排序，按从小到大的顺序输出。
#include<stdio.h>
int main()
{
	int arr[] = { 1,7,9,5,8,6,2 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//数组的元素个数
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 4;
	int b = 5;
	int c = a + b;
	printf("%d", c);
	return 0;
}


//输入5个数，求和并输出。要求编写求和的函数。
#include<stdio.h>
int Add(int x, int y, int z, int m, int n)
{
	int q = x + y + z + m + n;
	return q;
}
int main()
{
	int a, b, c, d, e, l;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	l = Add(a, b, c, d, e);
	printf("%d", l);
	return 0;
}


//编程计算1!+ 2!+ 3!+ ... + 10!的值。
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 1;
	int s = 1;
	int sum = 0;
	scanf("%d", &n);
	for (n = 1; n <= 10; n++)
	{
		while (i <= n)
		{
			s = s * i;
			i++;
		}
		sum = sum + s;
	}
	printf("%d", sum);
	return 0;
}


//求两个整数的最大公约数
#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d", &a, &b);
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	printf("%d", b);
	return 0;
}


//输入一串字符，逆序输出。要求使用数组实现
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char a[999];
	char b[999];
	int n = 0;
	//c中才有的gets函数gets(a);
	n = strlen(a);//求字符串a的长度，长度包含\0;
	for (i = 0; i < n; i++)
	{
		b[n - i - 1] = a[i];
	}
	for (i = 0; i < n; i++)
	{
		printf("%c", b[i]);
	}
	return 0;
}

//输入一串字符，将其中的大写字母变成对应的小写字母并输出。
#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	char b[20];
	//gets(a);
	strcpy(b, a);
	strlwr(b);
	printf("%s", b);
	return 0;
}


//求1-1/2+1/3-1/4+...+1/99-1/100的值。
#include<stdio.h>
int main()
{
	int j = -1;//作为改变正负号的变量
	int i = 1;
	double sum = 0.0;
	double z = 1.0;
	for (i = 1; i <= 100; i++)
	{
		j = j * (-1);
		z = j * (1.0 / i);
		sum = sum + z;
	}
	printf("%lf", sum);
}
//数组指针（是一个指针），指向数组的指针
int arr[5];
int(*p)[5] = &arr;
//指针数组（是数组，数组中的每个元素是指针)
int* arr;//每个元素为整形
float* arr;//每个元素为浮点型
//函数指针（指向函数的指针）
int my_strlen(const char* str)
{
	;
}
int (*p)(const char *)=my_strlen;
//p为函数指针

//函数指针数组（就是一种指针数组，每个元素是函数指针）
int(*parr[5])(const char*);
//指向函数指针数组的指针（指向数组的指针--数组指针）
int(*(*parr[5]))(const char*);


//谁写的函数谁去调用，这样子不叫回调函数
#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 0;
	int b = 0;
	int ret = 0;
	(void)scanf("%d %d", &a, &b);
	ret = Add(a, b);
	printf("%d", ret);
	return 0;
}


#include<stdio.h>
void menu()
{
	printf("*******************\n");
	printf("*****  1.Sum  *****\n");
	printf("*****  2.Sub  *****\n");
	printf("*****  3.Mul  *****\n");
	printf("*****  4.Div  *****\n");
	printf("*******************\n");
}
int Sum(int a, int b)
{
	return a + b;
}
int Sub(int a, int b)
{
	return a - b;
}
int Mul(int a, int b)
{
	return a * b;
}
int Div(int a, int b)
{
	return a / b;
}
void Calc(int(*p)(int, int))
{
	int a = 0;
	int b = 0;
	int ret = 0;
	printf("请输入相应的数字\n");
	(void)scanf("%d %d", &a, &b);
	ret = p(a, b);
	printf("%d\n", ret);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		(void)scanf("%d", &input);
		switch (input)
		{
		case 1:
			Calc(Sum);
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}


//冒泡排序
#include<stdio.h>
int main()
{
	int arr[10] = { 12,32,11,34,56,45,78,98,33,67 };
	int i = 0;
	int j = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz-1; i++)
	{
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
	for (i = 0; i < sz - 1; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


//冒泡排序
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,10,9 };
	int i = 0;
	int j = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] < arr[j + 1])
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


//求1 - 1 / 2 + 1 / 3 - 1 / 4 + … + 1 / 99 - 1 / 100的值。
#include<stdio.h>
int main()
{
	int j = -1;
	int i = 1;
	double z = 0.0;
	double sum = 0.0;
	for (i = 1; i <= 100; i++)
	{
		j = j * (-1);
		z = j * (1.0 / i);
		sum += z;
	}
	printf("%lf", sum);
	return 0;
}


//输入三个数a,b,c，要求按从小到大的顺序输出三个数
#include<stdio.h>
int main()
{
	int a, b, c;
	(void)scanf("%d %d %d", &a, &b, &c);
	if (a > b && b > c)
	{
		printf("%d %d %d", c, b, a);
	}
	if (a > c && c > b)
	{
		printf("%d %d %d", b, c, a);
	}
	if (b > a && a > c)
	{
		printf("%d %d %d", c, a, b);
	}
	if (b > c && c > a)
	{
		printf("%d %d %d", a, c, b);
	}
	if (c > a && a > b)
	{
		printf("%d %d %d", b, a, c);
	}
	if (c > b && b > a)
	{
		printf("%d %d %d", a, b, c);
	}
	return 0;
}


/*
从键盘输入一个小于1000的正数，要求输出他平方根
如果平方根不是整数，那么就输出其整数部分
要求在输入数据后先进行检查是否为小于1000的正数，若不是，则要求重新输入
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	if (n > 1000)
	{
		printf("输入错误，请重新输入\n");
		(void)scanf("%d", &n);
	}
	else
	{
		printf("%d", (int)sqrt(n));
	}
	return 0;
}


//给一个不多于五位的正整数，要求出他是几位数
#include<stdio.h>
int main()
{
	int n = 0;
	printf("请输入一个（0-9999）的数字：>\n");
	(void)scanf("%d", &n);
	int ret = 0;
	if (n > 9)
	{
		ret = 2;
	}
	if (n > 99)
	{
		ret = 3;
	}
	if (n > 999)
	{
		ret = 4;
	}
	if(n<9)
	{
		ret = 1;
	}
	printf("%d", ret);
	return 0;
}


//对10各数组元素依次赋值为0，1，2，3，4，5，6，7，8，9, 要求按逆序输出
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i=0;i<10;i++)
	{
		arr[i] = i;
	}
	for (i = 9; i >= 0; i--)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
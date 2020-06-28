#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
int main()
{
	int n = 0;
	int i = 1;
	int sum = 1;
	(void)scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		sum *= i;
	}
	printf("%d", sum);
	return 0;
}


#include<stdio.h>
int main()
{
	int n = 0;
	int i = 1;
	int ret = 1;
	int sum = 0;
	(void)scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		ret *= i;
		sum += ret;
	}
	printf("%d", sum);
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	int key = 3;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < key)
			left = mid + 1;
		else if (arr[mid] > key)
			right = mid - 1;
		else if (arr[mid] == key)
		{
			printf("找到了，下标为:%d", mid);
			break;
		}
	}
	return -1;
}


#include<stdio.h>
int main()
{
	char arr1[] = "***********";
	char arr2[] = "hello world";
	int left = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int right = sz - 1;
	while (left <= right)
	{
		arr1[left] = arr2[left];
		arr1[right] = arr2[right];
		left++;
		right--;
	}
	printf("%s", arr1);
	return 0;
}


//猜数字游戏的实现
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("***** 欢迎来到猜数字游戏！*****\n");
	printf("*****        1. play      *****\n");
	printf("*****        0. exit      *****\n");
	printf("***** 欢迎来到猜数字游戏！*****\n");
}
void game()
{
	int guess = 0;
	int ret = 0;
	ret = rand() % 100 + 1;
	while (1)
	{
		printf("请输入所猜测的数字!\n");
		(void)scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了!\n");
		}
		else if (guess < ret)
		{
			printf("猜小了!\n");
		}
		else
		{
			printf("猜对了!\n");
			break;
		}
	}
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>\n");
		(void)scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出猜数字游戏!\n");
			break;
		default:
			printf("选择错误，请重新选择!\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}


#include<stdio.h>
int main()
{
	int age = 0;
	(void)scanf("%d", &age);
	if (age < 18)
		printf("未成年\n");
	else
		printf("成年\n");
	return 0;
}


#include<stdio.h>
int main()
{
	int age = 10;
	if (age = 5)
		printf("age==5\n");
	return 0;
}
//频幕上会打印age==5，因为把5赋值给了age，所以if后面的括号里面的值是真的，所以回打印要求的信息


#include<stdio.h>
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;
	case 2:n++;
	case 3:
		switch (n)
		{//switch允许嵌套使用
		case 1:	n++;
		case 2:m++; n++;	break;
		}
	case 4:m++; break;
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n);
	system("pause");
	return 0;
}
//结果是m=5，n=3；


#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		printf("%d ", i);
		i++;
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			break;
		printf("%d ", i);
		i++;
	}
	return 0;
}
//打印结果为1，2，3，4
//break永久的跳出循环，停止后期的所有循环，永久的终止循环


#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			continue;
		printf("%d ", i);
		i++;
	}
	return 0;
}
//打印结果是1，2，3，4，4，4，4，4...死循环


//EOF为end of file
#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;
}
//用ctrl+z来停下来。


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	for (a = 1; a <= 9; a++)
	{
		for (b = 1; b <= a; b++)
		{
			printf("%d*%d=%2d ", a, b, a * b);
		}
		printf("\n");
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n");
	printf("%d", count);
	return 0;
}


//求十个整数中的最大值
#include<stdio.h>
int main()
{
	int arr[10] = { 12,34,675,32,75,24,86,23,88,16 };
	int max = arr[0];
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 1; i < sz; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d", max);
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int find = 0;//这里的数字可以随便给
	for (i = 0; i < sz; i++)
	{
		if (arr[i] == find)
			return i;
	}
	return -1;
}


//冒泡排序
#include<stdio.h>
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (int j = 1; j <sz - i - 1; j++)
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


//冒泡排序的优化
#include<stdio.h>
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;
		for (int j = 1; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;
			}
		}
		if (flag == 1)
			break;
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


//二分查找
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	int key = 5;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > key)
			right = mid - 1;
		else if (arr[mid] < key)
			left = mid + 1;
		else
		{
			printf("找到了，下标为:%d", mid);
			break;
		}
	}
}


//斐波那契数列
#include<stdio.h>
long long fib(int n)
{
	long long a = 1;
	long long b = 1;
	long long c = 1;
	for (int i = 3; i <= n; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	printf("%lld", fib(n));
	return 0;
}


//斐波那契数列
#include<stdio.h>
long long fib(long long a, long long b,int n)
{
	if (n < 3)
		return 1;
	else if (n == 3)
		return a + b;
	else
		return fib(b, a + b, n - 1);
}
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	printf("%lld", fib(1,1,n));
	return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello world";
	strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* source)
{
	char* ret = dest;
	assert(dest);
	assert(source);
	while (*dest++ = *source++)
	{
		;
	}
	return ret;

}
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello world";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
int MAX(int x, int y)
{
	return x > y ? x : y;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	(void)scanf("%d %d", &a, &b);
	c = MAX(a, b);
	printf("%d", c);
}


//写一个函数判断一个数是不是素数
#include<stdio.h>
int Is_Prime(int n)
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
	int ret = 1;
	(void)scanf("%d", &n);
	ret = Is_Prime(n);
	if (ret == 1)
		printf("素数\n");
	else
		printf("不是素数\n");
	return 0;
}


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


#include<stdio.h>
#include<assert.h>
int my_strlen(char* str)
{
	assert(str);
	if (*str  == '\0')
		return 0;
	else
		return 1 + my_strlen(str + 1);
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
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
int is_leapyear(int i)
{
	if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		return 1;
	else
		return 0;
}
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	if (is_leapyear(n) == 1)
	{
		printf("是闰年\n");
	}
	else
	{
		printf("不是闰年\n");
	}
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
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
	return 0;
}
//打印的结果为4 3 2 1
//printf函数的返回值是字符的个数


#include<stdio.h>
void test(int arr[3][5])
{

}
//void test(int arr[][])
//{
//	这种传参是不正确的，可以省略行，不可以省略列
//}
void test(int arr[][5])
{

}
//总结:二维数组传参，函数形式的设计只能省略第一维的[],不能省略第二维的
//因为对一个二维数组，可以不知道有多少行，但是必须知道一行有多少个元素
//这样才会方便运算，同样，一样的道理，如果用数组接收参数，那么就原模原样的接收就可以了
void test(int(*arr)[5])
{

}
int main()
{
	int arr[3][5];
	test(arr);
}


#include<stdio.h>
void Print(int* p, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	Print(p, sz);
	return 0;
}


#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	printf("%p\n", &Add);   //证实了函数也是有地址的
	int (*p)(int x, int y) = &Add;
	int ret = (*p)(2, 3);   //函数的调用
	//也可以写车： int ret=p(2,3);
	//哪个*写不写都行，写几个都行
	//(*p)是先找到这个函数，然后传参进行调用
	//p是函数指针
	return 0;
}


//实现计算器
#include<stdio.h>
void menu()
{
	printf("**********************\n");
	printf("*** 欢迎来到计算器 ***\n");
	printf("***  1.Add   2.Sub ***\n");
	printf("***  3.Mul   4.Div ***\n");
	printf("**********************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void test()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
	do
	{
		menu();
		printf("请选择:>\n");
		(void)scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入两个操作数:>\n");
			(void)scanf("%d %d", &x, &y);
			ret=Add(x, y);
			printf("%d\n", ret);
			break;
		case 2:
			printf("请输入两个操作数:>\n");
			(void)scanf("%d %d", &x, &y);
			ret = Sub(x, y);
			printf("%d\n", ret);
			break;
		case 3:
			printf("请输入两个操作数:>\n");
			(void)scanf("%d %d", &x, &y);
			ret = Mul(x, y);
			printf("%d\n", ret);
			break;
		case 4:
			printf("请输入两个操作数:>\n");
			(void)scanf("%d %d", &x, &y);
			ret = Div(x, y);
			printf("%d\n", ret);
			break;
		case 0:
			printf("退出计算器\n");
			break;
		default:
			printf("选择错误，请重新选择!\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}


//实现计算器
#include<stdio.h>
void menu()
{
	printf("**********************\n");
	printf("*** 欢迎来到计算器 ***\n");
	printf("***  1.Add   2.Sub ***\n");
	printf("***  3.Mul   4.Div ***\n");
	printf("**********************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void test()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
	int (*p[5])(int, int) = { 0,Add,Sub,Mul,Div };
	do
	{
		menu();
		printf("请选择:>\n");
		(void)scanf("%d", &input);
		printf("请输入两个操作数:>\n");
		(void)scanf("%d %d", &x, &y);
		ret = p[input](x, y);
		printf("%d\n", ret);
	} while (input);
}
int main()
{
	test();
	return 0;
}
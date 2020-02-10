#define _CRT_SECURE_NO_WARNINGS 1



//复习
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	(void)scanf("%d %d", &a, &b);
	c = a + b;
	printf("%d\n", c);
	return 0;
}


#include<stdio.h>
int main()
{
	printf("%c\n", '\'');
	printf("%s\n", "\"");
	return 0;
}


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
	printf("%d\n", ret);
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int num = 0;
	(void)scanf("%d", &num);
	printf("%d", num);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	int c = a & b;
	printf("%d", c);
	return 0;
	//结果为1，按位与的按位是按二进制，相同的为1，不同的为0
}


#include<stdio.h>
#define ADD(X,Y) X+Y
int main()
{
	printf("%d\n", 10 * ADD(2, 3));
	return 0;
}
//宏的替换是直接替换的，不经运算，直接替换。


//计算n的阶乘
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 1;
	int sum = 1;
	(void)scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum * i;
	}
	printf("%d", sum);
	return 0;
}


//求阶乘的和
#include<stdio.h>
int main()
{
	int i = 1;
	int sum = 0;
	int ret = 1;
	int n = 0;
	(void)scanf("%d", &n);
	for (n = 1; n <= 10; n++)
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


//二分查找
#include<stdio.h>
int main()
{
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int key = 8;
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right)-left / 2;
		if (arr[mid] > key)
			right = mid - 1;
		else if (arr[mid] < key)
			left = mid + 1;
		else
			return mid;
	}
	if (left > right)
		return 0;
}


//猜数字游戏
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("*********************\n");
	printf(" 欢迎来到猜数字游戏! \n");
	printf("***    1.play     ***\n");
	printf("***    0.exit     ***\n");
	printf("*********************\n");
}
void game()
{
	int ret = 0;
	int guess;
	ret = rand() % 100 + 1;
	while (1) 
	{
		(void)scanf("%d", &guess);
		if (guess > ret)
			printf("猜大了!\n");
		else if (guess < ret)
			printf("猜小了!\n");
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
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		(void)scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏!\n");
			break;
		default:
			printf("选择错误，请重新选择!\n");
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
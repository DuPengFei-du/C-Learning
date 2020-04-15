#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	(void)scanf("%d %d", &a, &b);
	c = a + b;
	printf("%d", c);
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
	int c = 0;
	(void)scanf("%d %d", &a, &b);
	c =Add(a,b);
	printf("%d", c);
	return 0;
}


#include<stdio.h>
int main()
{
	printf("%c\n", '\'');
	printf("%s\n","\"");
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; ++i)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//计算n的阶乘
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 1;
	int sum = 1;
	(void)scanf("%d",& n);
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
	char arr1[] = "################";
	char arr2[] = "hello world";
	int left = 0;
	int sz = sizeof(arr2) / sizeof(arr2[0]);
	int right = sz - 1;
	while (left <= right)
	{
		arr1[left] = arr2[left];
		arr1[right] = arr2[right];
		left ++ ;
		right--;
	}
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 1;
	int sum = 0;
	int ret = 1;
	int n = 0;
	(void)scanf("%d", &n);
	while (i <= n)
	{
		ret *= i;
		i++;
		sum += ret;
	}
	printf("%d", sum);
	return 0;
}


//猜数字游戏的实现
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("****************************\n");
	printf("***  欢迎来到猜数字游戏  ***\n");
	printf("***        1.play        ***\n");
	printf("***        0.exit        ***\n");
	printf("****************************\n");
}
void game()
{
	int guess = 0;
	int ret = 0;
	ret = rand() % 100 + 1;
	while (1)
	{
		printf("请输入所猜测的数字:>\n");
		(void)scanf("%d\n", &guess);
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
		printf("请选择:>\n");
		(void)scanf("%d\n", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出猜数字游戏！\n");
			break;
		default:
			printf("选择错误，请重新选择:>\n");
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
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;
	while (1)
	{
		printf("请输入数字:>");
		(void)scanf("%d", &guess);
		if (guess > ret)
			printf("猜大了\n");
		else if (guess < ret)
			printf("猜小了\n");
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
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
			printf("退出游戏！\n");
			break;
		default:
			printf("输入错误，请重新输入!\n");
			break;
		}
	} while (input);
	return 0;
}
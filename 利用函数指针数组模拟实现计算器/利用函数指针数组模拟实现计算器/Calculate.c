//模拟实现计算器
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
int main()
{
	int input = 0;
	int ret = 0;
	do
	{
		int a, b;
		menu();
		printf("请选择:>");
		(void)scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入相应的数字\n");
			(void)scanf("%d %d", &a, &b);
			ret = Sum(a, b);
			break;
		case 2:
			printf("请输入相应的数字\n");
			(void)scanf("%d %d", &a, &b);
			ret = Sub(a, b);
			break;
		case 3:
			printf("请输入相应的数字\n");
			(void)scanf("%d %d", &a, &b);
			ret = Mul(a, b);
			break;
		case 4:
			printf("请输入相应的数字\n");
			(void)scanf("%d %d", &a, &b);
			ret =Div(a, b);
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
		printf("%d\n", ret);
	} while (input);
	return 0;
}


//函数指针数组实现计算器
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
int main()
{
	int a, b;
	int input = 0;
	int ret = 0;
	int (*pArr[5])(int x, int y) = { 0,Sum,Sub,Mul,Div };//转移表
	do
	{
		menu();
		printf("请选择:>");
		(void)scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("输入相应的数字\n");
			(void)scanf("%d %d", &a, &b);
			ret = (*pArr[input])(a, b);
		}
		printf("%d\n", ret);
	} while (input);
}
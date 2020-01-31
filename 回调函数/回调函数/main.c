#define _CRT_SECURE_NO_WARNINGS 1


//回调函数
#include<stdio.h>
//1号程序员写的代码
int Add(int x, int y)
{
	return x + y;
}
//2号程序员写的代码
int test(int (*pf)(int,int))
{
	//如果2号程序员想在他的内部调用Add函数的话，我可以在主函数中将Add函数的地址传递给2号程序员写的代码
	//那么2号程序员写的代码，就要对Add函数的地址进行接收，利用函数指针(指向函数的指针)
	//pf为指针变量
	pf(2, 4);  //调用这个指针所指向的函数，此时被调用的函数就称为回调函数
}
int main()
{
	//1号程序员进行调用
	//自己写的代码，自己直接调用，这种不被称为回调函数
	int ret = Add(2, 3);
	int res = test(Add);
	printf("%d", res);
	return 0;
}


//利用回调函数实现计算器
#include<stdio.h>
void menu()
{
	printf("************************\n");
	printf("****欢迎来到计算器！****\n");
	printf("****1.Add      2.Sub****\n");
	printf("****3.Mul      4.Div****\n");
	printf("************************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}int Mul(int x, int y)
{
	return x * y;
}int Div(int x, int y)
{
	return x / y;
}
void Cal(int(*p)(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("请输入操作数:>");
	(void)scanf("%d %d", &x, &y);
	ret = p(x, y);
	printf("%d\n", ret);
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
			Cal(Add);
			break;
		case 2:
			Cal(Sub);
			break;
		case 3:
			Cal(Mul);
			break;
		case 4:
			Cal(Div);
			break;
		case 0:
			printf("退出程序！\n");
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
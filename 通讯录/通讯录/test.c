#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"contact.h"
void menu()
{
	printf("************************************\n");
	printf("****     1.ADD       2.DEL      ****\n");
	printf("****     3.SEARCH    4.MODIFY   ****\n");
	printf("****     5.SHOW      6.SORT     ****\n");
	printf("****     0.EXIT                 ****\n");
	printf("************************************\n");
}
void test()
{
	int input = 0;
	Contact con;//通讯录
	InitContact(&con);//初始化通讯录(sz和data均为0）
	do
	{
		menu();
		printf("请选择>:");
		(void)scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			break;
		case MODIFY:
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			break;
		case EXIT:
			printf("退出通讯录：\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
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
	Contact con;//ͨѶ¼
	InitContact(&con);//��ʼ��ͨѶ¼(sz��data��Ϊ0��
	do
	{
		menu();
		printf("��ѡ��>:");
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
			printf("�˳�ͨѶ¼��\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
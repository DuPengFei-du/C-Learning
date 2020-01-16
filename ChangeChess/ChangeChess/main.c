#define _CRT_SECURE_NO_WARNINGS 1
/*author: �R��*/
#include "game.h"


void menu()
{
	printf("*****************\n");
	printf("**** 1.Play  ****\n");
	printf("**** 0.Exit ****\n");
	printf("*****************\n");
	printf("�������Ӧ���ֵ�ѡ��:>\n");
}

void game()
{
	char board[ROW][COL];
	InitBoard(board, ROW, COL);
	printf("��Ϸ������ʼ:>\n");
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		char winner = 0;
		int index[2] = { 0 };
		int* p;

		p = (int*)malloc(sizeof(int) * 2);

		printf("�����:>\n");
		p = PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		index[0] = *p;
		index[1] = *(p + 1);
		winner = IsWin(board, ROW, COL);
		if (winner == '*')
		{
			printf("��һ�ʤ����Ϸ����\n");
			break;
		}
		if (winner == 'D')  //dogfall
		{
			printf("ƽ�֣���Ϸ����\n");
			break;
		}

		printf("������:>\n");
		ComputerNearMove(board, ROW, COL, index);
		DisplayBoard(board, ROW, COL);
		winner = IsWin(board, ROW, COL);
		if (winner == '#')
		{
			printf("���Ի�ʤ����Ϸ����\n");
			break;
		}
		if (winner == 'D')  //dogfall
		{
			printf("ƽ�֣���Ϸ����\n");
			break;
		}
	}
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	char board[ROW][COL] = { 0 };
	do
	{
		menu();
		(void)scanf("%d", &input);
		switch (input)
		{
		case 0:
			break;
		case 1:
			game();
			break;
		default:
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}
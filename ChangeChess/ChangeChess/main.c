#define _CRT_SECURE_NO_WARNINGS 1
/*author: 逺哥*/
#include "game.h"


void menu()
{
	printf("*****************\n");
	printf("**** 1.Play  ****\n");
	printf("**** 0.Exit ****\n");
	printf("*****************\n");
	printf("请输入对应数字的选择:>\n");
}

void game()
{
	char board[ROW][COL];
	InitBoard(board, ROW, COL);
	printf("游戏即将开始:>\n");
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		char winner = 0;
		int index[2] = { 0 };
		int* p;

		p = (int*)malloc(sizeof(int) * 2);

		printf("玩家走:>\n");
		p = PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		index[0] = *p;
		index[1] = *(p + 1);
		winner = IsWin(board, ROW, COL);
		if (winner == '*')
		{
			printf("玩家获胜，游戏结束\n");
			break;
		}
		if (winner == 'D')  //dogfall
		{
			printf("平局，游戏结束\n");
			break;
		}

		printf("电脑走:>\n");
		ComputerNearMove(board, ROW, COL, index);
		DisplayBoard(board, ROW, COL);
		winner = IsWin(board, ROW, COL);
		if (winner == '#')
		{
			printf("电脑获胜，游戏结束\n");
			break;
		}
		if (winner == 'D')  //dogfall
		{
			printf("平局，游戏结束\n");
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
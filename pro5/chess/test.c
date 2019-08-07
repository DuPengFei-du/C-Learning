#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("************************\n");
	printf("*****欢迎来到三子棋*****\n");
	printf("*****    1.play    *****\n");
	printf("*****    0.exit    *****\n");
	printf("************************\n");
}
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	Initboard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//正式开始游戏
	//先是玩家移动
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
			break;
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret =='#')
	{
		printf("电脑赢\n");
	}
	else if (ret == 'Q')
	{
		printf("平局了\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
		default:
			printf("输入错误，请重新输入：\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
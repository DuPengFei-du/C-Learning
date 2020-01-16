#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("******************************\n");
	printf("*****    欢迎来到扫雷    *****\n");
	printf("*****       1.play       *****\n");
	printf("*****       0.exit       *****\n");
	printf("******************************\n");
}

void game()
{
	//首先要对棋盘进行初始化的操作
	//扫雷游戏需要两个棋盘，一个是布置雷所需要的棋盘，一个是显示出来的棋盘
	//所以要对两个棋盘都进行初始化的操作
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//初始化完成了之后，就要开始打印棋盘了
	//DisPlayBoard(mine, ROW, COL);
	DisPlayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	FindMine(mine, show, ROW, COL);
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
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}
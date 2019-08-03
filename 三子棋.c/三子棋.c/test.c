#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
void menu()
{
	printf("########################\n");
	printf("########1.play########\n");
	printf("########0.exit########\n");
	printf("########################\n");
}
void game()
{
	char ret = 0;//接收游戏返回的状态
	//让其每个元素都是空格
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);//初始化
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//玩游戏
	while (1)
	{
		//玩家走
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//打印完之后判断输赢
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
			break;
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//打印完之后判断输赢
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else if (ret == 'Q')
	{
		printf("平局了\n");
	}
}
void test()//测试游戏的函数，逻辑是循环，循环玩
{
	int input = 0;
	srand((unsigned int)time(NULL));//生成随机值
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
			break;
		default:
			printf("选择错误！\n");
			break;
		}
	} while (input);
}
int main()
{
	//测试三子棋这个游戏
	test();
	return 0;
}
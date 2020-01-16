#include"game.h"

void menu()
{
	printf("******************************\n");
	printf("*****   欢迎来到三子棋   *****\n");
	printf("*****       1.play       *****\n");
	printf("*****       0.exit      *****\n");
	printf("******************************\n");
}
void game()
{
	char ret = 0;
	//要想玩游戏，首先需要有一个棋盘，所以我利用创建一个二维数组的形式来创建一个棋盘
	char board[ROW][COL];
	//其次需要对棋盘进行初始化，将棋盘初始化成全空的状态
	InitBoard(board, ROW, COL);
	//对棋盘进行完了初始化之后，就要对棋盘进行打印的操作
	DisPlayBoard(board, ROW, COL);
	//开始正式的游戏环节
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisPlayBoard(board, ROW, COL);
		//玩家移动之后打印棋盘，打印完棋盘之后就要去判断输赢了
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
			break;
		ComputerMove(board, ROW, COL);
		DisPlayBoard(board, ROW, COL);
		//电脑走和玩家走是一样的道理
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("玩家赢!\n");
	else if (ret == '#')
		printf("电脑赢!\n");
	else if (ret == 'Q')
		printf("平局\n");
}

//测试游戏
void Test()
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
	Test();  // 测试三子棋游戏的函数
	return 0;
}
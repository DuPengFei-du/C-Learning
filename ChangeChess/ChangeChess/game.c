#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
static void RowPrint(int tmp_row)
{
	while (tmp_row)
	{
		if (tmp_row == ROW)
			printf("        ");
		printf("-----");
		if (tmp_row > 1)
			printf("|");
		tmp_row--;
	}
}
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int tmp_row = row;
	int tmp_col = col;
	int i = 0;
	int j = 0;
	printf("     ");
	for (i = 1; i <= tmp_col; i++)
		printf("   %3d", i);
	printf("\n");
	for (i = 0; i < row; i++)
	{
		RowPrint(tmp_row);
		printf("\n");
		tmp_row = row;

		for (j = 0; j < tmp_col; j++)
		{
			if (i < i + 1 && j < 1)
				printf("  %3d   ", i + 1);
			printf("  %c  ", board[i][j]);
			if (j < tmp_col - 1)
				printf("|");
		}
		printf("\n");

		if (i == row - 1)
		{
			RowPrint(tmp_row);
			printf("\n");
		}
	}
}
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	//判断横行是不是赢了
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col - 2; j++)
		{
			if (board[i][j] == board[i][j + 1] && board[i][j + 1] == board[i][j + 2] && board[i][j] != ' ')
				return board[i][j];
		}
	}
	//判断竖行是不是赢了
	for (j = 0; j < col; j++)
	{
		for (i = 0; i < row - 2; i++)
		{
			if (board[i][j] == board[i + 1][j] && board[i + 1][j] == board[i + 2][j] && board[i][j] != ' ')
				return board[i][j];
		}
	}
	//判断主对角线是不是赢了
	for (i = 0; i < row - 2; i++)
	{
		for (j = 0; j < col - 2; j++)
		{
			if (board[i][j] == board[i + 1][j + 1] && board[i + 1][j + 1] == board[i + 2][j + 2] && board[i][j] != ' ')
				return board[i][j];
		}
	}
	//判断副角线是不是赢了
	for (i = 0; i < row - 2; i++)
	{
		for (j = 2; j < col; j++)
		{
			if (board[i][j] == board[i - 1][j + 1] && board[i - 1][j + 1] == board[i + 2][j - 2] && board[i][j] != ' ')
				return board[i][j];
		}
	}
	//最后遍历一遍看是否平局
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] != ' ')
				count++;
		}
	}
	if (count == 0)
		return 'D';  //dogfall
}

int* PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;//坐标
	int* p = NULL;
	p = (int*)malloc(sizeof(int) * 2);
	int flag = 0;
	do
	{
		if (flag < 0)
			printf("请玩家重新输入坐标:>\n");
		printf("请玩家输入坐标:>\n");
		(void)scanf("%d%d", &x, &y);

		if (x >= 1 && x <= ROW && y >= 1 && y <= COL && board[x - 1][y - 1] == ' ')
			flag++;
		else
			flag--;

		*p = x;
		*(p + 1) = y;
	} while (flag < 0);

	board[x - 1][y - 1] = '*';
	return p;
}
static void ComputerRandomMove(char board[ROW][COL], int row, int col)
{
	int RX = 0;
	int RY = 0;
	do
	{
		RX = rand() % ROW;   //random index x
		RY = rand() % COL;   //random index y
	} while (board[RX][RY] != ' ');
	board[RX][RY] = '#';
}
static int PlayerAlmostWin(char board[ROW][COL], int row, int col)
{
	int flag = 0;
	int i = 0;
	int j = 0;
	//判断横是不是快赢了，如果是玩家快赢了就堵，如果是电脑自己快赢了就接着连一块下
	for (i = 0; i < row; i++)
	{
		for (j = 1; j <= col - 2; j++)
		{
			if (board[i][j] != ' ' && board[i][j] == board[i][j - 1])
			{
				board[i][j + 1] = '#';
				flag++; goto stop;
			}
			else if (board[i][j] != ' ' && board[i][j] == board[i][j + 1])
			{
				board[i][j - 1] = '#';
				flag++; goto stop;
			}
		}
	}
	//判断竖是不是快赢了，如果是玩家快赢了就堵，如果是电脑自己快赢了就接着连一块下
	for (i = 1; i < row - 2; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] != ' ' && board[i][j] == board[i - 1][j])
			{
				board[i + 1][j] = '#';
				flag++; goto stop;
			}
			else if (board[i][j] != ' ' && board[i][j] == board[i + 1][j])
			{
				board[i - 1][j] = '#';
				flag++; goto stop;
			}
		}
	}
	//判断主对角线是不是快赢了,如果是玩家快赢了就堵，如果是电脑自己快赢了就接着连一块下
	for (i = 1; i <= row - 2; i++)
	{
		for (j = 1; j <= col - 2; j++)
		{
			if (board[i][j] != ' ' && board[i][j] == board[i - 1][j - 1])
			{
				board[i + 1][j + 1] = '#';
				flag++; goto stop;
			}
			else if (board[i][j] != ' ' && board[i][j] == board[i + 1][j + 1])
			{
				board[i - 1][j - 1] = '#';
				flag++; goto stop;
			}
		}
	}
stop:
	return flag;
}
void ComputerNearMove(char board[ROW][COL], int row, int col, int index[])
{
	int condition = PlayerAlmostWin(board, row, col);
	if (condition == 1) goto stop;

	int x = index[0] - 1;
	int y = index[1] - 1;
	int flag = rand() % 8 + 1;
	int judge = 1;
	if (x >= 1 && x <= col - 2 && y >= 1 && y <= row - 2)
	{
		switch (flag)
		{
		case 1:
			if (board[x - 1][y - 1] == ' ')
				board[x - 1][y - 1] = '#';
			judge--;
			break;
		case 2:
			if (board[x - 1][y] == ' ')
				board[x - 1][y] = '#';
			judge--;
			break;
		case 3:
			if (board[x - 1][y + 1] == ' ')
				board[x - 1][y + 1] = '#';
			judge--;
			break;
		case 4:
			if (board[x][y - 1] == ' ')
				board[x][y - 1] = '#';
			judge--;
			break;
		case 5:
			if (board[x][y + 1] == ' ')
				board[x][y + 1] = '#';
			judge--;
			break;
		case 6:
			if (board[x + 1][y - 1] == ' ')
				board[x + 1][y - 1] = '#';
			judge--;
			break;
		case 7:
			if (board[x + 1][y] == ' ')
				board[x + 1][y] = '#';
			judge--;
			break;
		case 8:
			if (board[x + 1][y + 1] == ' ')
				board[x + 1][y + 1] = '#';
			judge--;
			break;
		default:
			break;
		}
	}
	if (judge == 1)
		ComputerRandomMove(board, row, col);
stop:
	judge = 1;
}

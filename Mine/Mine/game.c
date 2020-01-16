#define  _CRT_SECURE_NO_WARNINGS 1

#include"game.h"


void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisPlayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 0; i < row; i++)
	{	
		printf("%d ", i);
		for (j = 1; j < col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = EASY_COUNT;       //布置的雷的个数
	while (count != 0)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--; //布置雷，没成功一次，剩下需要布置的雷的个数就会减小1 
		}
	}
}

static int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}

 void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	{
		int x = 0;
		int y = 0;
		int win = 0;
		while (win < row * col - EASY_COUNT)
		{
			printf("请输入要排查的坐标:>");
			(void)scanf("%d%d", &x, &y);
			if (x >= 1 && x <= row && y >= 1 && y <= col)
			{
				if (mine[x][y] == '1')
				{
					printf("很遗憾，你被炸死了\n");
				    DisPlayBoard(mine, ROW, COL);
					break;
				}
				else
				{
					int count = GetMineCount(mine, x, y);
					show[x][y] = count + '0';
					DisPlayBoard(show, ROW, COL);
					win++;
				}
			}
			else
			{
				printf("输入坐标非法，请重新输入!\n");
			}
		}
		if (win == row * col - EASY_COUNT)
		{
			printf("恭喜你，排雷成功\n");
			DisPlayBoard(mine, ROW, COL);
		}
	}
}
#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("************************\n");
	printf("*****��ӭ����������*****\n");
	printf("*****    1.play    *****\n");
	printf("*****    0.exit    *****\n");
	printf("************************\n");
}
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//��ʼ������
	Initboard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//��ʽ��ʼ��Ϸ
	//��������ƶ�
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
		printf("���Ӯ\n");
	}
	else if (ret =='#')
	{
		printf("����Ӯ\n");
	}
	else if (ret == 'Q')
	{
		printf("ƽ����\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
		default:
			printf("����������������룺\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
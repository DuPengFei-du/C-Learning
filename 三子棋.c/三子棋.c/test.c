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
	char ret = 0;//������Ϸ���ص�״̬
	//����ÿ��Ԫ�ض��ǿո�
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);//��ʼ��
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//����Ϸ
	while (1)
	{
		//�����
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//��ӡ��֮���ж���Ӯ
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
			break;
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//��ӡ��֮���ж���Ӯ
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else if (ret == 'Q')
	{
		printf("ƽ����\n");
	}
}
void test()//������Ϸ�ĺ������߼���ѭ����ѭ����
{
	int input = 0;
	srand((unsigned int)time(NULL));//�������ֵ
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
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
}
int main()
{
	//���������������Ϸ
	test();
	return 0;
}
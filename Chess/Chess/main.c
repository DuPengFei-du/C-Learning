#include"game.h"

void menu()
{
	printf("******************************\n");
	printf("*****   ��ӭ����������   *****\n");
	printf("*****       1.play       *****\n");
	printf("*****       0.exit      *****\n");
	printf("******************************\n");
}
void game()
{
	char ret = 0;
	//Ҫ������Ϸ��������Ҫ��һ�����̣����������ô���һ����ά�������ʽ������һ������
	char board[ROW][COL];
	//�����Ҫ�����̽��г�ʼ���������̳�ʼ����ȫ�յ�״̬
	InitBoard(board, ROW, COL);
	//�����̽������˳�ʼ��֮�󣬾�Ҫ�����̽��д�ӡ�Ĳ���
	DisPlayBoard(board, ROW, COL);
	//��ʼ��ʽ����Ϸ����
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisPlayBoard(board, ROW, COL);
		//����ƶ�֮���ӡ���̣���ӡ������֮���Ҫȥ�ж���Ӯ��
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
			break;
		ComputerMove(board, ROW, COL);
		DisPlayBoard(board, ROW, COL);
		//�����ߺ��������һ���ĵ���
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("���Ӯ!\n");
	else if (ret == '#')
		printf("����Ӯ!\n");
	else if (ret == 'Q')
		printf("ƽ��\n");
}

//������Ϸ
void Test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		(void)scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
		}
	} while (input);
}

int main()
{
	Test();  // ������������Ϸ�ĺ���
	return 0;
}
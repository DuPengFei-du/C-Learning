#include<stdio.h>
#include<time.h>//��ȡϵͳʱ�䣬ͨ����������������õ���ǰ��ʱ��
#include<stdlib.h>
void menu()
{
	printf("*****************************\n");
	printf("***    1.play       0.exit***\n");
	printf("*****************************\n");
	//д��һ���˵�
}
void game()
{
	/*
	1)���������
	RAND_MAX-32767
	��rand��������,��������Ϊ���� int ret=rand();
	*/
	int guess = 0;
	int ret = 0;
	ret = rand() % 100 + 1;
	//2.������
	while (1)
	{
		printf("�������\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//time�ķ���ֵʱtime_t;(��ʵ�����Σ�
	//����������ķ�ʽ��ʱ�����
	//ʱ�������ת��Ϊ����ȥ����
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//����Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��!\n");
		}
	} while (input);
	return 0;
}
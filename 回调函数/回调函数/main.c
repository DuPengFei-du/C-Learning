#define _CRT_SECURE_NO_WARNINGS 1


//�ص�����
#include<stdio.h>
//1�ų���Աд�Ĵ���
int Add(int x, int y)
{
	return x + y;
}
//2�ų���Աд�Ĵ���
int test(int (*pf)(int,int))
{
	//���2�ų���Ա���������ڲ�����Add�����Ļ����ҿ������������н�Add�����ĵ�ַ���ݸ�2�ų���Աд�Ĵ���
	//��ô2�ų���Աд�Ĵ��룬��Ҫ��Add�����ĵ�ַ���н��գ����ú���ָ��(ָ������ָ��)
	//pfΪָ�����
	pf(2, 4);  //�������ָ����ָ��ĺ�������ʱ�����õĺ����ͳ�Ϊ�ص�����
}
int main()
{
	//1�ų���Ա���е���
	//�Լ�д�Ĵ��룬�Լ�ֱ�ӵ��ã����ֲ�����Ϊ�ص�����
	int ret = Add(2, 3);
	int res = test(Add);
	printf("%d", res);
	return 0;
}


//���ûص�����ʵ�ּ�����
#include<stdio.h>
void menu()
{
	printf("************************\n");
	printf("****��ӭ������������****\n");
	printf("****1.Add      2.Sub****\n");
	printf("****3.Mul      4.Div****\n");
	printf("************************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}int Mul(int x, int y)
{
	return x * y;
}int Div(int x, int y)
{
	return x / y;
}
void Cal(int(*p)(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("�����������:>");
	(void)scanf("%d %d", &x, &y);
	ret = p(x, y);
	printf("%d\n", ret);
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>\n");
		(void)scanf("%d", &input);
		switch (input)
		{
		case 1:
			Cal(Add);
			break;
		case 2:
			Cal(Sub);
			break;
		case 3:
			Cal(Mul);
			break;
		case 4:
			Cal(Div);
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
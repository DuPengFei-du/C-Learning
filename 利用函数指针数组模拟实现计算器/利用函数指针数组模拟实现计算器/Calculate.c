//ģ��ʵ�ּ�����
#include<stdio.h>
void menu()
{
	printf("*******************\n");
	printf("*****  1.Sum  *****\n");
	printf("*****  2.Sub  *****\n");
	printf("*****  3.Mul  *****\n");
	printf("*****  4.Div  *****\n");
	printf("*******************\n");
}
int Sum(int a, int b)
{
	return a + b;
}
int Sub(int a, int b)
{
	return a - b;
}
int Mul(int a, int b)
{
	return a * b;
}
int Div(int a, int b)
{
	return a / b;
}
int main()
{
	int input = 0;
	int ret = 0;
	do
	{
		int a, b;
		menu();
		printf("��ѡ��:>");
		(void)scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��������Ӧ������\n");
			(void)scanf("%d %d", &a, &b);
			ret = Sum(a, b);
			break;
		case 2:
			printf("��������Ӧ������\n");
			(void)scanf("%d %d", &a, &b);
			ret = Sub(a, b);
			break;
		case 3:
			printf("��������Ӧ������\n");
			(void)scanf("%d %d", &a, &b);
			ret = Mul(a, b);
			break;
		case 4:
			printf("��������Ӧ������\n");
			(void)scanf("%d %d", &a, &b);
			ret =Div(a, b);
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
		printf("%d\n", ret);
	} while (input);
	return 0;
}


//����ָ������ʵ�ּ�����
#include<stdio.h>
void menu()
{
	printf("*******************\n");
	printf("*****  1.Sum  *****\n");
	printf("*****  2.Sub  *****\n");
	printf("*****  3.Mul  *****\n");
	printf("*****  4.Div  *****\n");
	printf("*******************\n");
}
int Sum(int a, int b)
{
	return a + b;
}
int Sub(int a, int b)
{
	return a - b;
}
int Mul(int a, int b)
{
	return a * b;
}
int Div(int a, int b)
{
	return a / b;
}
int main()
{
	int a, b;
	int input = 0;
	int ret = 0;
	int (*pArr[5])(int x, int y) = { 0,Sum,Sub,Mul,Div };//ת�Ʊ�
	do
	{
		menu();
		printf("��ѡ��:>");
		(void)scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("������Ӧ������\n");
			(void)scanf("%d %d", &a, &b);
			ret = (*pArr[input])(a, b);
		}
		printf("%d\n", ret);
	} while (input);
}
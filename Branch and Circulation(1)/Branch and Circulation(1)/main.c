#define _CRT_SECURE_NO_WARNINGS 1


//��֧����ѭ�����
#include<stdio.h>
int main()
{
	int age = 0;
	(void)scanf("%d", &age);
	if (age < 18)
		printf("δ����\n");
	return 0;
}


#include<stdio.h>
int main()
{
	int age = 0;
	(void)scanf("%d", &age);
	if (age < 18)
		printf("δ����\n");
	else
		printf("����\n");
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
		if (b == 2)
			printf("hehe\n");
		else
			printf("haha\n");
	return 0;
}


#include<stdio.h>
int main()
{
	int age = 10;
	if (age == 5)
		printf("age==5\n");
	return 0;
}


#include<stdio.h>
int main()
{
	int age = 10;
	if (age = 5)
		printf("age==5\n");
	return 0;
}


�ж�һ�����Ƿ�Ϊ����
#include<stdio.h>
int main()
{
	int i = 0;
	(void)scanf("%d", &i);
	if (i % 2 == 0)
		printf("iΪż��\n");
	if (i % 2 == 1)
		printf("iΪ����\n");
	return 0;
}


���1 - 100֮�������
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 1)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n");
	printf("%d", count);
	return 0;
}


#include<stdio.h>
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch(day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday\n");
		break;
	case 6:
	case 7:
		printf("weekend\n");
		break;
	default:
		printf("ѡ�����\n");
		break;
	}
}


switch���
#include<stdio.h>
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	switch (n)
	{
	case 1:
		printf("�ɹ�\n");
		break;
	case 2:
		printf("ʧ��\n");
		break;
	default:
		printf("error\n");
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;
	case 2:n++;
	case 3:
		switch (n)
		{//switch����Ƕ��ʹ��
		case 1:	n++;
		case 2:m++;n++;	break;
		}
	case 4:m++;break;
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n);
	system("pause");
	return 0;
}


#include<stdio.h>
int main()
{
	while (1)
		printf("hehe\n");
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		printf("%d ",i);
		i++;
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			break;
		printf("%d ", i);
		i++;
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			continue;
		printf("%d ", i);
		i++;
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		i++;
		if (i == 5)
			continue;
		printf("%d ", i);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int ch = getchar();
	putchar(ch);
	return 0;
}


#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;
}
//�ж��Ƿ�Ϊ����
#include<stdio.h>
int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		{
			count++;
			printf("%d ", year);
		}
	}
	printf("count is %d", count);
	return 0;
}

//��װ�ɺ���
#include<stdio.h>
int  Is_Leapyear(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		return 1;
	}
	else
		return 0;
}
int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (Is_Leapyear(year) == 1)
		{
			count++;
			printf("%d ", year);
		}
	}
	printf("count is %d", count);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 3;
	int b = 4;
	int c = 5;
	printf("%d", a || b + c && b - c);
	return 0;
}


//����������a,b,c,�ɼ������룬��������������ֵ
#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int max = c;
	if (a > c)
	{
		max = a;
	}
	if (b > c)
	{
		max = b;
	}
	printf("%d", max);
	return 0;
}


/*
�Ӽ�������һ��С��1000��������Ҫ�������ƽ����
���ƽ����������������ô���������������
Ҫ�����������ݺ��Ƚ��м���Ƿ�ΪС��1000�������������ǣ���Ҫ����������
*/
#include<stdio.h>
#include<math.h>
#define A 1000
int main()
{
	int i = 0;
	int k = 0;//ƽ������ֵ
	scanf("%d", &i);
	if (i > A)
	{
		printf("�����������������\n");
		scanf("%d", &i);
	}
	k = sqrt(i);
	printf("%d��ƽ���ֵ���������Ϊ��%d", i, k);
	return 0;
}


//��һ����������λ����������Ҫ��
//������Ǽ�λ��
#include<stdio.h>
int main()
{
	int num = 0;
	int place = 0;
	printf("������һ�����֣�0~99999)\n");
	scanf("%d", &num);
	if (num > 9999)
	{
		place = 5;
	}
	else if (num > 999)
	{
		place = 4;
	}
	else if (num > 99)
	{
		place = 3;
	}
	else if (num > 9)
	{
		place = 2;
	}
	else
		place = 1;
	printf("%d", place);
	return 0;
}

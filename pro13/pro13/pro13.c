#include<stdio.h>
int main()
{
	int array[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int i = 0;
	for (i = 9; i >= 0; i--)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	return 0;
}


//��������������쳲�������������
#include<stdio.h>
int main()
{
	int i;
	int f[20] = { 1,1 };//��ǰ�������Ԫ�ظ���ֵΪ1��
	for (i = 2; i < 20; i++)
		f[i] = f[i - 1] + f[i - 2];
	for (i = 0; i < 20; i++)
	{
		if (i % 5 == 0)
			printf("\n");
		printf("%12d", f[i]);
	}
	printf("\n");
	return 0;
}


//�ж�һ�����Ƿ�Ϊ����
#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	if (a % 2 == 1)
	{
		printf("aΪ����\n");
	}
	else
	{
		printf("aΪż��\n");
	}
	return 0;
}


//���1-100֮�������
#include<stdio.h>
int main()
{
	int i = 1;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 1)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}


//��һ����ά������к��л��ཻ������ŵ���һ����ά���鵱��
#include<stdio.h>
int main()
{
	int a[4][2];
	int b[2][4];
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("a[%d][%d]= ", i, j);
			scanf("%d ", &a[i][j]);
		}
	}
	printf("�����ά����\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			b[j][i] = a[i][j];
		}
	}
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}


//��һ��3*4�ľ���Ҫ���д����������������Ǹ�Ԫ�ص�ֵ���Լ������ڵ��кź��к�
#include<stdio.h>
int main()
{
	int a[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	int i, j, max;
	int row, col;
	max = a[0][0];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
				row = i;
				col = j;
			}
		}
	}
	printf("%d %d %d", max, i, j);
	return 0;
}


//���ַ��������һ������
#include<stdio.h>
int main()
{
	char a[][5] = { {' ',' ','*'},{' ','*',' ','*'},{'*',' ',' ',' ','*'},{' ','*',' ',' ','*'},{' ',' ','*'} };
	int i = 0, j = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
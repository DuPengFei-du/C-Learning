#include<stdio.h>
int main()
{
	int a;
	int* p = &a;
	int a;
	int* p;
	p = &a;
}


//��������ĵ�ַ
#include<stdio.h>
int main()
{
	int a = 10;
	int* p;
	p = &a;
	printf("%p\n", p);//����ľ���a�ĵ�ַ
}


//����ָ�뽫�������ֽ���
#include<stdio.h>
void Swap(int* x, int* y)
{
	int t = *x;
	*x = *y;
	*y = t;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	Swap(&a, &b);
	printf("%d %d", a, b);
	return 0;
}


//&*��*&������
int a;
p = &a;
/*
&��*����������ȼ���ͬ������������ķ����ϣ����*p�Ƚ���*���㣬p�൱�ڱ���a
�ڽ���&���㣬&*p���൱��ȡ����a�ĵ�ַ��&a�Ƚ���&���㣬&a����ȡ����a�ĵ�ַ
Ȼ��ִ��*���㣬*&a���൱��ȡ����a���ڵĵ�ַ��ֵ��ʵ�ʾ��Ǳ���a
*/

#include<stdio.h>
int main()
{
	int i;
	int* p;
	printf("please input the number:\n");
	scanf("%d", &i);
	p = &i;//������i�ĵ�ַ����ָ�����
	printf("the result1 is %p:\n", p);//���p�ĵ�ַ
	p++;
	printf("the result2 is %p:\n", p);
	return 0;
}


//����������Զ�ά�������ʽ��ʾ
#include<stdio.h>
int main()
{
	int a[4][2];
	int i = 0;
	int j = 0;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("��ά�������ʽΪ\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}


//��������е�Ԫ��
#include<stdio.h>
int main()
{
	int a[3][5];
	int i = 0;
	int j = 0;
	int(*p)[5];
	p = &a[0];
	printf("please input:\n");
	for (i = 0; i < 3; i++)
		for (j = 0; j < 5; j++)
			scanf("%d", &a[i][j]);
	p = &a[2];
	printf("the third line is:\n");
	for (j = 0; j < 5; j++)
		printf("%5d", *((*p) + j));
	printf("\n");
	return 0;
}


#include<stdio.h>
int main()
{
	printf("This is a C program\n");
	return 0;
}


//���������ĺ�
#include<stdio.h>
int main()
{
	int a = 123;
	int b = 456;
	int c = a + b;
	printf("%d", c);
	return 0;
}


//���������еĽϴ���
#include<stdio.h>
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d", &a, &b);
	c = Max(a, b);
	printf("%d", c);
	return 0;
}


#include<stdio.h>
int main()
{
	printf("********************\n");
	printf("Very Good\n");
	printf("********************\n");
	return 0;
}


//����������е����ֵ
#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int max = c;
	if (a > c)
		max = a;
	else if (b > c)
		max = b;
	printf("%d", max);
	return 0;
}


//��n�Ľ׳�
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 1;
	int s = 1;
	scanf("%d", &n);//�������n�Ľ׳�
	for (i = 1; i <= n; i++)
	{
		s = s * i;
	}
	printf("%d", s);
	return 0;
}


//����1x3x5x7x9x11
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 1;
	int s = 1;
	scanf("%d", &n);//�������n�Ľ׳�
	for (i = 1; i <= n; i += 2)
	{
		s = s * i;
	}
	printf("%d", s);
	return 0;
}


//�ж�����
#include<stdio.h>
int main()
{
	int count = 0;
	int i = 2000;
	for (i = 2000; i <= 2500; i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("%d", count);
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	double sum = 0.0;
	double z = 1.0;
	int j = -1;//�������ķ���
	for (i = 1; i <= 100; i++)//�ȶ����ĸ
	{
		j = (-1) * j;
		z = j * (1.0 / i);
		sum = sum + z;
	}
	printf("%lf", sum);
	return 0;
}


//�ж�һ�����ǲ�������
//1-100֮�������
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 2;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j < 200; j++)
		{
			if (i % j == 0)//����������������
				break;
		}
		if (j == i)
			count++;
		printf("%d ", i);
	}
	printf("\n");
	printf("%d", count);
	return 0;
}
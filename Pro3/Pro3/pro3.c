//8.5
//���ν�10�������룬����������������ֵ
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,89,11,23 };
	int i = 0;
	int max = arr[0];
	for (i = 0; i < 10; i++)
	{
		if (arr[i] > max)
		max = arr[i];
	}
	printf("%d", max);
	return 0;
}


//��������a,b,cҪ���մ�С���������
#include<stdio.h>
int main()
{
	int a, b, c;
	int max = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b && b > c)
	{
		printf("%d %d %d", a, b, c);
	}
	else if (a > c && c > b)
	{
		printf("%d %d %d", a, c, b);
	}
	else if (b > a && a > c)
	{
		printf("%d %d %d", b, a, c);
	}
	else if (b > c && c > a)
	{
		printf("%d %d %d", b, c, a);
	}
	else if (c > a && a > b)
	{
		printf("%d %d %d", c, a, b);
	}
	else if (c > b && b > a)
	{
		printf("%d %d %d", c, b, a);
	}
	return 0;
}


#include<stdio.h>
void Swap(int* px, int* py)
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}
int main(void)
{
	int  a = 1;
	int  b = 2;
	int  c = 3;
	if (a < c)
	{
		Swap(&a, &c);
	}
	if (b < c)
	{
		Swap(&b, &c);
	}
	if (a < b)
	{
		Swap(&a, &b);
	}
	printf("%d %d %d", a, b, c);
	return 0;
}

//��1+100�ĺ�
#include<stdio.h>
int main()
{
	int i = 0;
	int sum = 0;
	for (i = 0; i <= 100; i++)
	{
		sum = sum + i;
	}
	printf("%d", sum);
	return 0;
}


//�ж�һ����n�ܷ�ͬʱ��3��5������
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	if (n % 3 == 0 && n % 5 == 0)
	{
		printf("n����ͬʱ��3��5����\n");
	}
	else
	{
		printf("������\n");
	}
	return 0;
}


//��100-200֮����������
#include<stdio.h>
int main()
{
	int i = 100;
	int j = 2;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j < 200; j++)
		{
			if (i % j == 0)
				break;
		}
		if (i == j)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("count is %d", count);
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	printf("%d", i++);
	return 0;
}
#include<stdio.h>
int main()
{
	int i = 0;
	printf("%d", ++i);
	return 0;
}


#include<stdio.h>
int main()
{
	char c1, c2;
	c1 = 'A';
	c2 = c1 + 32;
	printf("%c\n", c2);
	printf("%d", c2);
	return 0;
}


//���������ε����߳����������ε����
//���ú��׹�ʽ�������ε����
#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, p, s;
	a = 3.67;
	b = 5.43;
	c = 6.21;
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("%lf", s);
	return 0;
}
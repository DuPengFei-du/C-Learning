#include<stdio.h>
int main()
{
	int a, b, num;
	scanf("%d %d", &a, &b);
	num = a + b;
	printf("%d", num);
	return 0;
}

#include<stdio.h>
int Add(int x, int y)
{
	int num;
	num = x + y;
	return num;
}
int main()
{
	int a, b;
	int num = 0;
	scanf("%d %d", &a, &b);
	num = Add(a, b);
	printf("%d", num);
	return 0;
}

#include<stdio.h>
#define SUM 100000
int main()
{
	float total = 0, amount, average;
	int i = 0;
	for (i = 0; i < 1000; i++)
	{
		printf("please enter amount\n");
		scanf("%f", &amount);
		total = total + amount;
		if (total > SUM)
			break;
	}
	average = total / i;
	printf("%f", average);
	return 0;
}


//Ҫ�����100 - 200֮�䲻�ܱ�����������
#include<stdio.h>
int main()
{
	int i = 100;
	for (i = 100; i <= 200; i++)
	{
		if (i % 3 == 0)
		{
			continue;
		}
		printf("%d ", i);
	}
	printf("\n");
	return 0;
}


//����һ������3�������ж����Ƿ�Ϊ����
#include<stdio.h>
int main()
{
	int n, i;
	scanf("%d", &n);
	for (i = 2; i <= n - 1; i++)
	{
		if (n % i == 0)//������������������
			break;
	}
	if (n == i)
		printf("%d", n);
	printf("\n");
	return 0;
}

//�������������Լ������С������
//���Լ��
#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d", &a, &b);
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	printf("%d", b);
	return 0;
}

//��С������ 
//�������ĳ˻�ȥ�������Լ���͵ó�����С������
#include<stdio.h>
int main()
{
	int a, b, x, y;
	int m = 0;
	int n = 0;
	scanf("%d %d", &a, &b);
	m = a;
	n = b;
	while (x = m % n)
	{
		m = n;
		n = x;
	}
	y = (a * b) / n;
	printf("%d %d", n, y);
	return 0;
}



//��1�Ľ׳�һֱ�ӵ�20�Ľ׳�
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 1;
	int sum = 1;
	int ret = 0;
	scanf("%d", &n);
	for (n = 1; n <= 20; n++)
	{
		while (i <= n)
		{
			sum = sum * i;
			i++;
		}
		ret = sum + ret;
	}
	printf("%d", ret);
	return 0;
}

#include<stdio.h>
int global = 2019;
int main()
{
	int global = 2022;//��������ͻ��ʱ�򣬾ֲ���������
	printf("%d", global);
	return 0;
}

#include<stdio.h>
int main()
{
	printf("c:\code\test.c\n");
	return 0;
}
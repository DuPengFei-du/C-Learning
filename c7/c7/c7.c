//��ѡ�񷨶�������10��������С��������
#include<stdio.h>
int main()
{
	int i, j, min, temp, a[10];
	for (i = 1; i <= 10; i++)
	{
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);//����10����
	}
	printf("\n");
	printf("the orginal numbers ��\n");
	for (i = 1; i <= 10; i++)
		printf("%5d", a[i]);
	printf("\n");
	for (i = 1; i <= 9; i++)
	{
		min = i;
		for (j = i + 1; j <= 10; j++)
			if (a[min] > a[j])
				min = j;
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
	printf("the sorted numbers :\n");
	for (i = 1; i <= 10; i++)
		printf("%5d", a[i]);
	printf("\n");
	return 0;
}


//��һ��һά���飬�ڷ�����10��ѧ���ĳɼ�
//дһ�����������������������������ʱ�������ƽ���֣���߷ֺ���ͷ�
#include<stdio.h>
float MAX, MIN;
float average(float arr[], int n)
{
	int i = 0;
	float aver, sum = arr[0];
	MAX = MIN = arr[0];
	for (i = 1; i < n; i++)
	{
		if (arr[i] > MAX)
		{
			MAX = arr[i];
		}
		else if (arr[i] < MIN)
		{
			MIN = arr[i];
		}
		sum = sum + arr[i];
	}
	aver = sum / n;
	return(aver);
}
int main()
{
	float average(float arr[], int n);
	float arr[10], ave;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("a[%d]= ", i);
		scanf("%f", &arr[i]);
	}
	for (i = 0; i < 10; i++)
	{
		printf("%f ", arr[i]);
	}
	ave = average(arr, 10);
	printf("\n");
	printf("max=%6.2f\n,min=%6.2f\n,average=%6.2f\n", MAX, MIN, ave);
	return 0;
}


//����1-5�Ľ׳�ֵ
#include<stdio.h>
int fac(int i)
{
	static int sum = 1;//���ͷ�
	sum = sum * i;
	return(sum);
}
int main()
{
	int i = 1;
	int ret = 1;
	for (i = 1; i <= 5; i++)
	{
		ret = fac(i);
		printf("%d!=%d\n", i, ret);
	}
	return 0;
}


//���ú��������������е����ֵ
#include<stdio.h>
int max(int m, int y, int n)
{
	int max = m;
	if (n > m)
		max = n;
	if (y > m)
		max = y;
	return(max);
}
int main()
{
	int a, b, c;
	int ret = 0;
	scanf("%d %d %d", &a, &b, &c);
	ret = max(a, b, c);
	printf("%d", ret);
	return 0;
}


//д�����������ֱ������������������Լ������С��������
//�������������������������������������������ɼ������롣
#include<stdio.h>
int max(int x, int y)
{
	int z;
	while (z = x % y)
	{
		x = y;
		y = z;
	}
	return y;
}
int main()
{
	int a, b;
	int ret1 = 0;
	//int ret2 = 0;
	scanf("%d %d", &a, &b);
	ret1 = max(a, b);
	//ret2 = min(a, b);
	printf("%d ", ret1);
	return 0;
}


//��ӡ100-200֮�������
#include<stdio.h>
int main()
{
	int i;
	int j;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j <= i - 1; j++)
		{
			if (i % j == 0)
				break;
		}
		if (j == i)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}



//дһ����������ӡ����
#include<stdio.h>
int is_prime(int n)
{
	int j = 0;
	for (j = 2; j < n; j++)
	{
		if (n % j == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int count = 0;
	int i = 100;
	for (i = 100; i < 200; i++)
	{
		if (is_prime(i) == 1)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("%d", count);
	return 0;
}
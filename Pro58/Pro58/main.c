#define _CRT_SECURE_NO_WARNINGS 1



//��ϰ
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	(void)scanf("%d %d", &a, &b);
	c = a + b;
	printf("%d\n", c);
	return 0;
}


#include<stdio.h>
int main()
{
	printf("%c\n", '\'');
	printf("%s\n", "\"");
	return 0;
}


#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 0;
	int b = 0;
	int ret = 0;
	(void)scanf("%d %d", &a, &b);
	ret = Add(a, b);
	printf("%d\n", ret);
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int num = 0;
	(void)scanf("%d", &num);
	printf("%d", num);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	int c = a & b;
	printf("%d", c);
	return 0;
	//���Ϊ1����λ��İ�λ�ǰ������ƣ���ͬ��Ϊ1����ͬ��Ϊ0
}


#include<stdio.h>
#define ADD(X,Y) X+Y
int main()
{
	printf("%d\n", 10 * ADD(2, 3));
	return 0;
}
//����滻��ֱ���滻�ģ��������㣬ֱ���滻��


//����n�Ľ׳�
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 1;
	int sum = 1;
	(void)scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum * i;
	}
	printf("%d", sum);
	return 0;
}


//��׳˵ĺ�
#include<stdio.h>
int main()
{
	int i = 1;
	int sum = 0;
	int ret = 1;
	int n = 0;
	(void)scanf("%d", &n);
	for (n = 1; n <= 10; n++)
	{
		ret = 1;
		for (i = 1; i <= n; i++)
		{
			ret *= i;
		}
		sum += ret;
	}
	printf("%d", sum);
	return 0;
}


//���ֲ���
#include<stdio.h>
int main()
{
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int key = 8;
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right)-left / 2;
		if (arr[mid] > key)
			right = mid - 1;
		else if (arr[mid] < key)
			left = mid + 1;
		else
			return mid;
	}
	if (left > right)
		return 0;
}


//��������Ϸ
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("*********************\n");
	printf(" ��ӭ������������Ϸ! \n");
	printf("***    1.play     ***\n");
	printf("***    0.exit     ***\n");
	printf("*********************\n");
}
void game()
{
	int ret = 0;
	int guess;
	ret = rand() % 100 + 1;
	while (1) 
	{
		(void)scanf("%d", &guess);
		if (guess > ret)
			printf("�´���!\n");
		else if (guess < ret)
			printf("��С��!\n");
		else
		{
			printf("�¶���!\n");
			break;
		}
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		(void)scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ!\n");
			break;
		default:
			printf("ѡ�����������ѡ��!\n");
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
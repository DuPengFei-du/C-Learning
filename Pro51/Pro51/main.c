#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	(void)scanf("%d %d", &a, &b);
	c = a + b;
	printf("%d", c);
	return 0;
}


//����Ļ�ϴ�ӡ�����ź�˫����
#include<stdio.h>
int main()
{
	printf("%c\n", '\'');
	printf("%s\n", "\"");
	return 0;
}


//дһ���ӷ�����
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
	ret=Add(a, b);
	printf("%d", ret);
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
void test()
{
	int i = 1;
	i++;
	printf("%d ", i);
}
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		test();
	}
	return 0;
}


#include<stdio.h>
void test()
{
	static i = 0;
	i++;
	printf("%d ", i);
}
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		test();
	}
	return 0;
}


//�ж�һ�����Ƿ�Ϊ����
#include<stdio.h>
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	if (n % 2 == 1)
		printf("����");
	if (n % 2 == 0)
		printf("ż��");
	return 0;
}


//�������
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
	(void)scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday");
		break;
	case 6:
	case 7:
		printf("weekend");
		break;
	default:
		printf("�����������������\n");
		return 0;
	}
}


#include<stdio.h>
int main()
{
	for (int i = 1; i <= 10; i++)
	{
		printf("%d ", i);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		printf("%d ", i);
		i++;
	}
	return 0;
}


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


#include<stdio.h>
int main()
{
	int i = 1;
	int n = 0;
	int ret = 1;
	int sum = 0;
	(void)scanf("%d", &n);
	for (n = 0; n <= 10; n++)
	{
		ret = 1;
		for(i=1;i<=n;i++)
		{
			ret = ret * i;
		}
		sum += ret;
	}
	printf("%d", sum);
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > key)
			right = mid - 1;
		else if (arr[mid] < key)
			left = mid + 1;
		else
		{
			printf("�ҵ��ˣ��±�Ϊ:%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}


#include<stdio.h>
void BinarySearch(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	int key = 6;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > key)
			right = mid - 1;
		else if (arr[mid] < key)
			left = mid + 1;
		else
		{
			printf("%d", mid);
			break;
		}
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BinarySearch(arr, sz);
	return 0;
}


//���м���
#include<stdio.h>
int main()
{
	char arr1[] = "###########";
	char arr2[] = "Hello World";
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		arr1[left] = arr2[left];
		arr1[right] = arr2[right];
		left++;
		right--;
		printf("%s\n", arr1);
	}
	return 0;
}


//��������Ϸ��ʵ��
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void menu()
{
	printf("###################\n");
	printf(" ��ӭ������������Ϸ\n");
	printf("       1.play      \n");
	printf("       0.exit      \n");
	printf("###################\n");
}
void game()
{
	int guess = 0;
	int ret = 0;
	ret = rand() % 100 + 1;
	while (1)
	{
		printf("����������\n");
		(void)scanf("%d", &guess);
		if (guess > ret)
			printf("�´���\n");
		else if (guess < ret)
			printf("��С��\n");
		else
		{
			printf("�¶���\n");
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
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	}while(input);
}
int main()
{
	test();
	return 0;
}
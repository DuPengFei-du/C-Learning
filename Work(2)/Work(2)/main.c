#define _CRT_SECURE_NO_WARNINGS 1


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
	int n = 0;
	int i = 1;
	int ret = 1;
	int sum = 0;
	(void)scanf("%d", &n);
	for (n = 1; n <= 10; n++)
	{
		//ret = 1;
		//i = 1;
		while (i <= n)
		{
			ret = ret * i;
			i++;
		}
		sum = sum + ret;
	}
	printf("%d", sum);
	return 0;
}


//���ֲ���
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int key = 7;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ���,�±�Ϊ:%d", mid);
			break;
		}
	}
	if (left > right)
		printf("�Ҳ���\n");
	return 0;
}


//�����ֲ��ҷ�װ��һ������
#include<stdio.h>
int BinarySearch(int arr[], int sz)
{
	int key = 7;
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else
			return mid;
	}
	return -1;
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = BinarySearch(arr, sz);
	if (ret == -1)
	{
		printf("�Ҳ���\n");
	}
	else
		printf("�ҵ��ˣ��±�Ϊ:%d", ret);
	return 0;
}


#include<stdio.h>
#include<windows.h>
int main()
{
	char arr1[] = "###########";
	char arr2[] = "Hello World";
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int left = 0;
	int right = sz - 2;
	while (left <= right)
	{
		arr1[left] = arr2[left];
		arr1[right] = arr2[right];
		printf("%s\n", arr1);
		Sleep(1000);
		left++;
		right--;
	}
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������:>");
		scanf("%s", password);
		if (0 == strcmp(password, "123456"))
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("����������������룡\n");
		}
	}
	if (i == 3)
		printf("��������������˳�����\n");
	return 0;
}


//��������Ϸ
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("***** ��ӭ������������Ϸ��*****\n");
	printf("*****        1. play      *****\n");
	printf("*****        0. exit      *****\n");
	printf("***** ��ӭ������������Ϸ��*****\n");
}
void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;
	while (1)
	{
		printf("����������:>");
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
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>\n");
		(void)scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("�����������������!\n");
			break;
		}
	} while (input);
	return 0;
}
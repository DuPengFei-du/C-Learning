//��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9�� 
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			count++;
			printf("%d ", i);
		}
		if (i / 10 == 9)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("%d", count);
	return 0;
}


//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ
#include<stdio.h>
int main()
{
	int i = 1;
	int j = -1;
	float sum = 0.0;
	float z = 1.0;
	for (i = 1; i <= 100; i++)
	{
		j = (-1) * j;
		z = j * (1.0 / i);
		sum = sum + z;
	}
	printf("%f", sum);
	return 0;
}


//������A�е����ݺ�����B�е����ݽ��н�����������һ����
#include<stdio.h>
void Swap(int arr1[], int arr2[], int len)
{
	int i = 0;
	int temp;
	for (i = 0; i < len; i++)
	{
		int temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}
int main()
{
	int i = 0;
	int arr1[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int arr2[10] = { 2,5,6,8,10,1,3,5,7,9 };
	int len = sizeof(arr1) / sizeof(arr1[0]);
	Swap(arr1, arr2, len);
	for (i = 0; i < len; i++)
	{
		printf("%d", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < len; i++)
	{
		printf("%d", arr2[i]);
	}
	return 0;
}

//����
#include<stdio.h>
void Swap(int arr1[], int arr2[], int len)
{
	int i = 0;
	int temp;
	for (i = 0; i < len; i++)
	{
		int temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}
int main()
{
	int i = 0;
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 10,9,8,7,6,5,4,3,2,1 };
	int len = sizeof(arr1) / sizeof(arr1[0]);
	Swap(arr1, arr2, len);
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}


//���ֲ���
#include<stdio.h>
int main()
{
	int arr[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int key = 17;
	int left = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	int right = len - 1;
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
			printf("�ҵ��ˣ��±���%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}


/*
��д����ģ��������������ĳ�����
����������������룬������ȷ����ʾ����¼�ɹ���, �������
�����������룬����������Ρ����ξ�������ʾ�˳�����
����������������룬������ȷ����ʾ����¼�ɹ�����������󣬿����������룬����������Ρ����ξ�������ʾ�˳�����
*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char arr[10] = { 0 };
	int i = 0;
	char arr1[] = "123456";
	for (i = 0; i < 3; i++)
	{
		printf("����������:>\n");
		scanf("%s", arr);
		if (strcmp(arr, "123456") == 0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
	{
		printf("������������˳�����\n");
	}
	system("pause");
	return 0;
}


//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ���� 
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	scanf("%d", &k);
	for (i = 1; i <= k; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1


//һά����Ĵ���
#include<stdio.h>
int main()
{
	int arr1[10];
	char arr2[5];
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5 };
	return 0;
}


#include<stdio.h>
int main()
{
	char arr1[] = { 'a','b','c' };
	char arr2[] = "abc";
	printf("%s", arr1);
	printf("%s", arr2);
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("&arr[%d]=%p\n", i,&arr[i]);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;  //�õ�����Ԫ�صĵ�ַ
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%p===%p\n", &arr[i], p + i);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
	return 0;
}


//��ά����
#include<stdio.h>
int main()
{
	int arr1[3][4]; //������һ���������е�����
	char arr2[4][5];
	double arr3[3][5];
}


#include<stdio.h>
int main()
{
	int arr[3][4] = { 1,2,3,4,5,6 };//����û�г�ʼ����Ԫ��ȫ����0�Դ�
	int arr2[3][4] = { {1,2},{3,4},{5,6} };//��һ��Ϊ1 2 0 0 �ڶ���Ϊ3 4 0 0
}


//��ά����Ĵ�ӡ
#include<stdio.h>
int main()
{
	int arr[3][4] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}


//��ά�������ڴ��еĴ洢
#include<stdio.h>
int main()
{
	int arr[3][4] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
		}
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int i = 0;
	int j = 0;
	int* p = &arr[0][0];
	for (i = 0; i < 12; i++)
	{
		printf("%d ", *(p + i));
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
int main()
{
	int arr1[10];
	char arr2[5];
	return 0;
}
//[]�б����ǳ������߳������ʽ����Ȼ�ͻᱨ��


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5 };
	return 0;
}
//û�б���ֵ��Ԫ����Ĭ��ΪΪ0
//ͨ�����Ӵ�������


#include<stdio.h>
int main()
{
	char arr1[] = { 'a','b','c' };
	char arr2[] = "abc";
	printf("%s", arr1);
	printf("%s", arr2);
	return 0;
}
//������������ǲ�һ����
//arr1�ǲ����Կ�������ģ���Ϊ��û��\0��\0���ַ����Ľ�����־
//���û��\0�ǲ����Կ����ַ�����
//arr2�ǿ��Կ����ַ����ģ�c���滹��һ�����ص�\0


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
		printf("&arr[%d]=%p\n", i, &arr[i]);
	}
	return 0;
}
//ÿ��Ԫ�ص�ַ֮����ֵ��4
//����Ϊʲô��4����Ϊ����һ�����ε����飬ÿ��Ԫ��ռ��4���ֽڡ�


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
//��������˵����p+iΪ�±�Ϊi��Ԫ�صĵ�ַ
//*(p + i)Ϊ�±�Ϊi��Ԫ�ص�ֵ


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


#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%d", sizeof(arr));
	return 0;
}
//�������Ľ����40


#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%p\n", &arr);
	printf("%p\n", &arr + 1);
	return 0;
}
//������֮��ĵ�ֵַ�Ĳ�ֵΪ40���պ�Ϊ����Ĵ�С
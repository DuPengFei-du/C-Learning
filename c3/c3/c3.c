#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


//��ӡ����Ԫ�صĵ�ַ
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("a[%d]=%p\n", i, &arr[i]);
	}
	return 0;
}

//��ӡ��ά����
#include<stdio.h>
int main()
{
	int arr[2][4] = { {1,2,3,4},{5,6,7,8} };
	int i = 0;
	int j = 0;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}



//��ά�����к��е���ĿҲ�ǿ����������
#include<stdio.h>
int main()
{
	int arr[2][4] = { {1,2,3,4},{5,6,7,8} };
	int i = 0;
	int j = 0;
	for (i = 0; i < (int)sizeof(arr) / (int)sizeof(arr[0]); i++);
	{
		for (j = 0; j < (int)sizeof(arr[0]) / (int)sizeof(arr[0][0]); j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}


//��ӡ��ά����ĵ�ַ
#include<stdio.h>
int main()
{
	int a[2][4] = { {1,2,3,4},{5,6,7,8} };
	int i = 0;
	int j = 0;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("a[%d][%d]=%p\n", i, j, &a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
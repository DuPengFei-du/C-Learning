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
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}


//ð������
//һ��ð������㶨һ������
//�����10��Ԫ�أ���ô��Ҫ����9��ð������
//����Ҫд�����ף�Ȼ��һ���ڲ��ж��ٸ�
//ÿһ�����֮�󶼻���һ��Ԫ�أ�֮��Ķ���Ҳ����1
#include<stdio.h>
int main()
{
	int arr[] = { 1,3,5,7,9,2,4,6,8,10 };
	int i = 0;
	int j = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz - 1; i++)//10��Ԫ����Ҫ����9��ð������
	{
		for (j = 0; j < sz - 1 - i; j++)//10��Ԫ���о��ף�һ�׵��ڲ�Ҳ����9��Ƚ�
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


//��ð�������װ�ɺ���
#include<stdio.h>
void  BubbleSort(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int arr[] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	BubbleSort(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
//�������������Լ��
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	(void)scanf("%d %d", &a, &b);
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	printf("%d", b);
	return 0;
}


//������������С������
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int m, n, c, y;
	(void)scanf("%d %d", &a, &b);
	m = a; 
	n = b;
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	y = (m * n) / b;
	printf("%d %d", b, y);
	return 0;
}


//���1-100֮�������
#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i+=2)
	{
		printf("%d ", i);
	}
	return 0;
}

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


//100-200֮�������
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int count = 0;
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
			count++;
		}
	}
	printf("\n");
	printf("%d", count);
}


//100-200֮�������
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
				break;
		}
		if (j > sqrt(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n");
	printf("%d", count);
	return 0;
}


//��n�Ľ׳�
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
	int n = 0;
	int sum = 0;
	int ret = 1;
	(void)scanf("%d", &n);
	for (n = 1; n <= 10; n++)
	{
		while(i <= n)
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
	int key = 9;
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
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


//��װ�ɺ���
#include<stdio.h>
void Binary_Search(int arr[], int key, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
			printf("�ҵ��ˣ��±���%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 9;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	Binary_Search(arr, key, sz);
	return 0;
}
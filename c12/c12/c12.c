//ð������
//��������
#include<stdio.h>
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int i = 0;
	int j = 0;
	int len = sizeof(arr) / sizeof(arr[0]);//����Ԫ�صĸ���
	for (i = 0; i < len - i; i++)
	{
		for (j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//��ð�������װ�ɺ���
#include<stdio.h>
void BubbleSort(int arr[], int len)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - i - 1; j++)
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
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int i = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, len);
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ���� 
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
#include<stdio.h>
int main()
{
	int input = 0;
	int i = 0;
	int j = 0;
	scanf("%d", &input);
	for (i = 1; i <= input; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}


/*
��дһ�����򣬿���һֱ���ռ����ַ���
�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
��������ֲ������
*/
#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'a' && ch <= 'z')
		{
			putchar(ch - 32);
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			putchar(ch + 32);
		}
		else if (ch >= '0' && ch <= '9')
		{
			continue;
		}
		else
		{
			putchar(ch);
		}
	}
	return 0;
}


/*
����һ������
ʵ�ֺ���init������ʼ������
ʵ��empty�����������
ʵ��reverse���������������Ԫ�ص�����
Ҫ���Լ���ƺ����Ĳ���������ֵ
*/
#include<stdio.h>
void Init(int arr[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		arr[i] = 10;
	}
}
void Empty(int arr[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		arr[i] = 0;
	}
}
int main()
{
	int i = 0;
	int arr[10] = { 0 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Init(arr, len);//��ʼ������
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	Empty(arr, len);
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//����Ԫ�ص�����
#include<stdio.h>
void Reverse(int arr[], int len)
{
	int left = 0;
	int right = len - 1;
	while (left < right)
	{
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < len; i++)
	{
		arr[i] = i;
	}
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	Reverse(arr, len);
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


//�õݹ����n��쳲�������
#include<stdio.h>
int fib(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}
int main()
{
	int i = 0;
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = fib(n);
	printf("%d", ret);
	return 0;
}

//�÷ǵݹ����n��쳲�������
#include<stdio.h>
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = fib(n);
	printf("%d", ret);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[100] = { 0 };
	char arr2[] = "hello world";
	strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
int main()
{
	char arr1[] = "hello world";
	memset(arr1, 'x', 5);
	printf("%s", arr1);
	return 0;
}


//дһ�������ҳ��������е������
#include<stdio.h>
int MAX(int x, int y)
{
	return x > y ? x : y;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	(void)scanf("%d %d", &a, &b);
	c = MAX(a, b);
	printf("%d", c);
	return 0;
}


#include<stdio.h>
void Swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
int main()
{
	int a = 0;
	int b = 0;
	(void)scanf("%d %d", &a, &b);
	Swap(&a, &b);
	printf("%d %d", a, b);
	return 0;
}


//дһ�������ж�һ�����ǲ�������
#include<stdio.h>
int is_prime(int i)
{
	int j = 0;
	for (j = 2; j < i; j++)
	{
		if (i % j == 0)
			return 0;
	}
		return 1;
}
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	if (is_prime(n) == 1)
	{
		printf("������\n");
	}
	else
	{
		printf("��������\n");
	}
	return 0;
}


#include<stdio.h>
int is_leapyear(int i)
{
	if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		return 1;
	else
		return 0;
}
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	if (is_leapyear(n) == 1)
	{
		printf("������\n");
	}
	else
	{
		printf("��������\n");
	}
	return 0;
}


#include<stdio.h>
void BinarySearch(int arr[], int sz)
{
	int key = 7;
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < key)
			left = mid + 1;
		else if (arr[mid] > key)
			right = mid - 1;
		else
		{
			printf("�ҵ���,�±���:%d", mid);
			break;
		}
	}
	if (left > right)
		printf("�Ҳ���\n");
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	BinarySearch(arr, sz);
	return 0;
}


//������Ƕ�׵��ú���ʽ����
#include<stdio.h>
void new_line()
{
	printf("hehe\n");
}
void three_line()
{
	for (int i = 0; i < 3; i++)
	{
		new_line();
	}
}
int main()
{
	three_line();
	return 0;
}


//��ʽ����
#include<stdio.h>
int main()
{
	int len = strlen("abcdef");
	printf("%d\n", len);
	printf("%d\n", strlen("abcdef"));
	return 0;
}


#include<stdio.h>
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int Add(int x, int y);  //��Ϊ����������
	int c = Add(a, b);
	printf("%d", c);
	return 0;
}
//��������
int Add(int x, int y)
{
	return x + y;
}


//�ݹ�
#include<stdio.h>
int main()
{
	printf("hehe\n");
	main();
}


//����һ������ֵ(�޷���),����˳���ӡ����ÿһλ������
//����1234 ��ӡ: 1 2 3 4
#include<stdio.h>
void print(int n)
{
	if (n > 9)
		print(n / 10);
	printf("%d ", n % 10);
}
int main()
{
	unsigned int n = 0;
	(void)scanf("%u", &n);
	print(n);
	return 0;
}


#include<stdio.h>
int my_strlen(const char* str)
{
	int count = 0;
	while(*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	int len = my_strlen("abc");
	printf("%d", len);
	return 0;
}


//��д����������ʹ����ʱ���������ַ����ĳ���
#include<stdio.h>
int my_strlen(const char* str)
{
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen(str + 1);
}
int main()
{
	int len = my_strlen("abcdef");
	printf("%d\n", len);
	return 0;
}


//��n�Ľ׳�
int fac(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * fac(n - 1);
}
#include<stdio.h>
int main()
{
	int n = 0;
	int c = 0;
	(void)scanf("%d", &n);
	c = fac(n);
	printf("%d\n", c);
	return 0;
}


//���n��쳲�����
#include<stdio.h>
int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}
int main()
{
	int n = 0;
	int c = 0;
	(void)scanf("%d", &n);
	c=fib(n);
	printf("%d\n", c);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 1;
	int b = 1;
	int c = 1;
	int n = 0;
	(void)scanf("%d", &n);
	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	printf("%d", c);
	return 0;
}
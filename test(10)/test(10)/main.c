#define _CRT_SECURE_NO_WARNINGS 1



//�⺯���µ�strstr
#include<stdio.h>
#include<assert.h>
#include<string.h>
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "defet";
	char* ret = strstr(arr1, arr2);
	if (ret == NULL)
		printf("������\n");
	else
		printf("%s\n", ret);
	return 0;
}


//�⺯���µ�strstr
#include<stdio.h>
#include<assert.h>
#include<string.h>
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "bcde";
	char* ret = strstr(arr1, arr2);
	if (ret == NULL)
		printf("������\n");
	else
		printf("%s\n", ret);
	return 0;
}


//ģ��ʵ��strstr
#include<stdio.h>
#include<assert.h>
char* my_strstr(const char* str1, const char* str2)
{
	const char* s1 = str1;
	const char* s2 = str2;
	const char* start = str1;
	assert(str1);
	assert(str2);
	while (*str2 == '\0')
		return (char*)str1;
	while (*start != '\0')
	{
		s2 = str2;
		s1 = start;
		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return (char*)start;
		start++;
	}
	return NULL;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "bcde";
	char* ret = my_strstr(arr1, arr2);
	if (ret == NULL)
		printf("������\n");
	else
		printf("%s\n", ret);
	return 0;
}


#include <stdio.h>
#include <string.h>
int main()
{
	const char str[] = "http://www.runoob.com";
	const char ch = '.';
	char* ret;
	ret = strchr(str, ch);
	printf("|%c| ֮����ַ����� - |%s|\n", ch, ret);
	return(0);
}


//ģ��ʵ��strchr
#include<stdio.h>
#include<assert.h>
char* my_strchr(const char* str, const char ch)
{
	assert(str);
	const char* dest = str;
	while (dest != '\0' && *dest != ch)
	{
		dest++;
	}
	if (*dest == ch)
		return (char*)dest;
	return NULL;
}
int main()
{
	char* ret = my_strchr("hello", 'l');
	if (ret == NULL)
		printf("������");
	else
		printf("%s\n", ret);
	return 0;
}


#include<stdio.h>
int main()
{
	int n = 0;
	int i = 1;
	int sum = 1;
	(void)scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum *= i;
	}
	printf("%d", sum);
	return 0;
}


#include<stdio.h>
int main()
{
	int n = 0;
	int i = 1;
	int ret = 1;
	int sum = 0;
	(void)scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret *= i;
		sum += ret;
	}
	printf("%d", sum);
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int key = 5;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > key)
			right = mid - 1;
		else if (arr[mid] < key)
			left = mid + 1;
		else if (arr[mid] == key)
		{
			printf("�ҵ��ˣ��±�Ϊ:%d", mid);
			break;
		}
	}
	return -1;
}


#include<stdio.h>
int main()
{
	char arr1[] = "**********";
	char arr2[] = "hello wold";
	int left = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int right = sz - 1;
	while (left <= right)
	{
		arr1[left] = arr2[left];
		arr1[right] = arr2[right];
		left++;
		right--;
	}
	printf("%s", arr1);
	return 0;
}


//ģ���½����
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������:\n");
		(void)scanf("%s", password);
		if (0 == strcmp(password, "nishizhu"))
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�����������������!\n");
		}
	}
	if (i == 3)
		printf("�޷���¼\n");
	return 0;
}


//��������Ϸ
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void menu()
{
	printf("***** ��ӭ������������Ϸ��*****\n");
	printf("*****        1. play      *****\n");
	printf("*****        0. exit      *****\n");
	printf("***** ��ӭ������������Ϸ��*****\n");
}
void game()
{
	int guess = 0;
	int ret = 0;
	ret = rand() % 100 + 1;
	printf("���������²������:>\n");
	while (1)
	{
		(void)scanf("%d", &guess);
		if (guess > ret)
			printf("�´���!\n");
		else if (guess < ret)
			printf("��С��!\n");
		else
		{
			printf("�¶���!\n");
			break;
		}
	}
}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
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
			printf("�˳���������Ϸ��\n");
			break;
		default:
			printf("ѡ�����������ѡ��!\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}


#include<stdio.h>
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;
	case 2:n++;
	case 3:
		switch (n)
		{//switch����Ƕ��ʹ��
		case 1:	n++;
		case 2:m++; n++;	break;
		}
	case 4:m++; break;
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n);
	system("pause");
	return 0;
}
//�����m=5��n=3��


#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			break;
		printf("%d ", i);
		i++;
	}
	return 0;
}
//��ӡ���Ϊ1��2��3��4
//break���õ�����ѭ����ֹͣ���ڵ�����ѭ�������õ���ֹѭ��


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
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			break;
		printf("%d ", i);
	}
	return 0;
}
//��ӡ���Ϊ1��2��3��4



#include<stdio.h>
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++)
	{
		printf("hehe\n");
		arr[i] = 0;
	}
	return 0;
}
//����Ĵ�ӡ�����hehe����ѭ��


#include<stdio.h>
int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)
		k++;
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
#include<stdlib.h>
int main()
{
	char input[] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);
	if (0 == strcmp(input, "������"))
	{
		system("shutdown -a");
	}
	else
	{
		printf("�����������������!\n");
		goto again;
	}
	return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
	int arr1[10] = { 0 };
	int arr2[3] = { 1,2,3 };
	memcpy(arr1, arr2, 12);
	//���һ������ΪҪ�������ֽ���
	return 0;
}



#include<stdio.h>
#include<assert.h>
void* my_memcpy(void* destination, const void* source, size_t num)
{
	size_t i = 0;
	assert(destination != NULL);
	assert(source != NULL);
	char* dest = (char*)destination;
	char* sour = (char*)source;
	for (i = 0; i < num; i++)
	{
		dest[i] = sour[i];
	}
	return destination;
}
int main()
{
	int arr1[10] = { 0 };
	int arr2[] = { 1,2,3 };
	my_memcpy(arr1, arr2, 12);
	return 0;
}

//�ڶ��ַ���
#include<stdio.h>
#include<assert.h>
void* my_memcpy(void* dest, const void* source, size_t num)
{
	//ÿ�ο���һ���ֽ���Ϊ����
	assert(dest != NULL);
	assert(source != NULL);
	size_t i = 0;
	char* ret = (char*)dest;
	char* s1 = (char*)dest;
	const char* s2 = (char*)source;
	for (i = 0; i < num; i++)
	{
		*(char*)dest = *(char*)source;
		s1++;
		s2++;
	}
	return ret;
}
int main()
{
	int arr1[10] = { 0 };
	int arr2[] = { 1,2,3 };
	my_memcpy(arr1, arr2, 12);
	return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello world";
	strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<math.h>
int main()
{
	int n = 0;
	int k = 0;
	double ret = 0;
	(void)scanf("%d %d", &n, &k);
	ret = pow(n, k);
	printf("%lf", ret);
	return 0;
}


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
int main()
{
	int a = 0;
	int b = 0;
	(void)scanf("%d %d", &a, &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d %d", a, b);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	(void)scanf("%d %d", &a, &b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d", a, b);
	return 0;
}


#include<stdio.h>
int is_prime(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	int ret = is_prime(n);
	if (ret == 1)
		printf("����\n");
	else
		printf("��������\n");
	return 0;
}


#include<stdio.h>
void Print(int n)
{
	if (n > 9)
		Print(n / 10);
	printf("%d ", n % 10);
}
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	Print(n);
	return 0;
}


#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)
{
	assert(str);
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen(str + 1);
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
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
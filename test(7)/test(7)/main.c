#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "bcd";
	char *ret = strstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("������\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}


#include<stdio.h>
#include<string.h>
#include<assert.h>
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1);
	assert(str2);
	const char* s1 = str1;
	const char* s2 = str2;
	const char* start = str1;
	if (*str2 == '\0')
		return (char*)str1;
	while (*start!='\0')
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
	char arr2[] = "bcd";
	char *ret = my_strstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("������\n");
	}
	else
	{
		printf("%s\n", ret);
	}
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
	int key = 4;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > key)
			right = mid - 1;
		else if (arr[mid] < key)
			left = mid + 1;
		else if (arr[mid] == key)
		{
			printf("�ҵ��ˣ��±�α:%d", mid);
			break;
		}
	}
	return -1;
}


#include<stdio.h>
int main()
{
	char arr1[] = "***********";
	char arr2[] = "hello world";
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


#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		printf("����������:\n");
		(void)scanf("%s", password);
		if (0 == strcmp(password, "123456"))
		{
			printf("��½�ɹ�\n");
		}
		else
		{
			printf("������������µ�¼��\n");
		}
	}
	if (i == 3)
		printf("�޷���¼!\n");
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
		printf("���������²�����֣�\n");
		(void)scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´��ˣ�\n");
		}
		else if (guess < ret)
		{
			printf("��С�ˣ�\n");
		}
		else if (guess == ret)
		{
			printf("�¶��ˣ�\n");
			break;
		}
	}
}
void test()
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
			printf("ѡ�����������ѡ��:>\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}


//�⺯���µ�strstr
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "def";
	char *ret = strstr(arr1, arr2);
	if (ret == NULL)
		printf("������\n");
	else
		printf("%s", ret);
	return 0;
}


//ģ��ʵ��strstr
#include<stdio.h>
#include<assert.h>
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1);
	assert(str2);
	const char* s1 = str1;
	const char* s2 = str2;
	const char* start = str1;
	if (*str2 == '\0')
		return (char*)str1;
	while (*start != '\0')//��start����'\0'��ʱ���û�б�Ҫ�ټ��������ˣ���һ���ǲ��Ҳ�������
	{
		s2 = str2;
		s1 = start;
		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char*)start;
		}
		start++;
	}
	return NULL;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "def";
	char *ret = my_strstr(arr1, arr2);
	if (ret == NULL)
		printf("������\n");
	else
		printf("%s", ret);
	return 0;
}


#include<stdio.h>
#include<assert.h>
char* my_strchr(const char* str1, const char str2)
{
	assert(str1);
	while (*str1 != '\0' && *str1 != str2)
	{
		str1++;
	}
	if (*str1 == (char)str2)
		return (char*)str1;
	return NULL;
}
int main()
{
	char* ret = my_strchr("hello world", 'o');
	printf("%s", ret);
	return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
	char arr[20] = { 0 };
	char arr1[] = "hello world";
	strcpy(arr, arr1);
	printf("%s", arr);
	return 0;
}


#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* source)
{
	assert(dest);
	assert(source);
	char* ret = dest;
	while (*dest++ = *source++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr[20] = { 0 };
	char arr1[] = "hello world";
	my_strcpy(arr, arr1);
	printf("%s", arr);
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


//�ж�һ�������ǲ�������
#include<stdio.h>
int is_Prime(int n)
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
	int ret = is_Prime(n);
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
#include<assert.h>
int my_strlen(const char* str)
{
	int count = 0;
	assert(str);
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
#include<assert.h>
int my_strlen(char* str)
{
	assert(str);
	char* ret = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - ret;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


//�⺯���µ�strstr
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "def";
	char* ret = strstr(arr1, arr2);
	if (ret == NULL)
		printf("������\n");
	else
		printf("%s\n", ret);
	return 0;
}


#include<stdio.h>
#include<assert.h>
char* my_strstr(const char* str1, const char* str2)
{
	const char* s1 = str1;
	const char* s2 = str2;
	const char* start = str1;
	assert(str1 != NULL);
	assert(str2 != NULL);
	if (*str2 == '\0')
	{
		return (char*)str1;   //�ҿ��ַ�����ֱ�ӷ���str1
	}
	while (*start != '\0')//��start����'\0'��ʱ���û�б�Ҫ�ټ��������ˣ���һ���ǲ��Ҳ�������
	{
		s2 = str2;
		s1 = start;
		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char*)start;
		}
		start++;
	}
	return NULL;
}
int main()
{
	char arr1[] = "abcdefabcdef";
	char arr2[] = "bcd";
	char* ret = my_strstr(arr1, arr2);
	if (*ret == NULL)
	{
		printf("������\n");
	}
	else
	{
		printf("%s\n", ret);
	}
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


#include<stdio.h>
#include<assert.h>
char* my_strchr(const char* str1, const char str2)
{
	assert(str1);
	while (*str1 != '\0' && *str1 != str2)
	{
		str1++;
	}
	if (*str1 == (char)str2)
		return (char*)str1;
	return NULL;
}
int main()
{
	char* ret = my_strchr("hello world", 'o');
	printf("%s", ret);
	return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
	const char* p = "@.";
	char* ret = NULL;
	char arr1[] = "xiaodu@learn.ing";
	char temp[50] = { 0 };
	strcpy(temp, arr1);
	for (ret = strtok(temp, p); ret != NULL; ret = strtok(NULL, p))
	{
		printf("%s", ret);
	}
	return 0;
}
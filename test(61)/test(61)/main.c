#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
int main()
{
	int a = 1;
	char* pa = (char*)& a;
	if (*pa == 1)
		printf("С��\n");
	else
		printf("���\n");
	return 0;
}


#include<stdio.h>
int CheckSystem()
{
	int a = 1;
	char* pa = (char*)& a;
	return *pa;
}
int main()
{
	int ret = CheckSystem();
	if (ret == 1)
		printf("С��\n");
	else
		printf("���\n");
	return 0;
}


#include<stdio.h>
int CheckSystem()
{
	union Un
	{
		int i;
		char c;
	}u;
	u.i = 1;
	return u.c;
}
int main()
{
	int ret = CheckSystem();
	if (ret == 1)
		printf("С��\n");
	else
		printf("���\n");
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
	assert(str);
	int count = 0;
	while (*str)
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
	int count = 0;
	while (*str)
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
	char arr2[] = "ABCDEF";
	my_strcpy(arr, arr2);
	printf("%s", arr);
	return 0;
}


#include<stdio.h>
#include<assert.h>
#include<string.h>
char* my_strncpy(char* dest, const char* source,size_t count)
{
	assert(dest);
	assert(source);
	char* ret = dest;
	int sz = 0;
	if (strlen(source) < count)
	{
		sz = count - strlen(source);
		count = strlen(source);
	}
	while (count--)
	{
		*dest++ = *source++;
	}
	while (sz--)
	{
		*dest = '\0';
	}
	return ret;
}
int main()
{
	char arr[20] = { 0 };
	char arr2[] = "ABCDEF";
	my_strncpy(arr, arr2,3);
	printf("%s", arr);
	return 0;
}


#include<stdio.h>
#include<assert.h>
char* my_strcat(char* dest, const char* source)
{
	assert(dest);
	assert(source);
	char* ret = dest;
	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *source++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr[20] = "abc";
	char arr2[] = "ABCDEF";
	my_strcat(arr, arr2);
	printf("%s", arr);
	return 0;
}


#include<stdio.h>
#include<assert.h>
char* my_strcat(char* dest, const char* source)
{
	assert(dest);
	assert(source);
	char* ret = dest;
	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *source++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr[20] = "abc";
	char arr2[] = "ABCDEF";
	my_strcat(arr, arr2);
	printf("%s", arr);
	return 0;
}


#include<stdio.h>
int main()
{
	char arr[20] = "abcdef";
	int len = strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "abcdef";
	strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


//ģ��ʵ��strcpy
//�ַ����Ŀ���
#include<stdio.h>
void my_strcpy(char* dest, char* source)//��ָ�����
{
	while (*source != '\0')
	{
		*dest = *source;
		dest++;
		source++;
	}
	*dest = *source;
}
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello word";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = "Hello";
	char arr2[] = " world";
	strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "bdefetfsf";
	char arr2[] = "abc";
	int ret = strcmp(arr1, arr2);
	printf("%d", ret);
	return 0;
}


#include<stdio.h>
#include<assert.h>
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	if (*str1 > * str2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
int main()
{
	char arr1[] = "bedfwseg";
	char arr2[] = "abc";
	int ret = my_strcmp(arr1, arr2);
	printf("%d", ret);
	return 0;
}


#include<stdio.h>
int main()
{
	char arr1[30] = "hello world";
	char arr2[] = "change world";
	strncat(arr1, arr2, 3);
	printf("%s", arr1);
	return 0;
}
//׷�ӵ�ʱ��Ҫ������һ��\0��ȥ
//���ϣ��׷�ӵ��ַ������������ַ�������ĸ����Ļ��������������׷��0.ֻ���������ַ�������ĳ��ȣ�Ȼ���һ��\0�����ʲô������û��
//�������Լ������Լ�


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[30] = "hello world";
	char arr2[] = "change world";
	int ret = strncmp(arr1, arr2, 3);
	printf("%d", ret);
	return 0;
}


char* strstr(const char* string, const char* strCharSet);
//�������ַ��������ص��ǵ�ַ����һ�γ��ֵ�λ��
//���û���ҵ��Ļ������ؿ�ָ�룬���ǲ���ֱ�ӷ��أ���Ϊ�����û���ҵ��Ļ������ؿ�ָ����ǷǷ����ڴ�����ˣ��ͻ�����ˡ�


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "fwgge";
	char* ret = strstr(arr1, arr2);
	printf("%s", ret);
	return 0;
}


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
	while (*start)
	{
		s2 = str2;
		s1 = start;
		if (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
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
	char arr2[] = "fwgge";
	char* ret = my_strstr(arr1, arr2);
	if (ret == NULL)
		printf("�Ҳ���\n");
	else
		printf("%s", ret);
	return 0;
}


#include <stdio.h>
#include <string.h>
int main()
{
	const char str[] = "http://www.runoob.com";
	const char ch = '.';
	const char* ret;
	ret = strchr(str, ch);
	printf("|%c| ֮����ַ����� - |%s|\n", ch, ret);
	return 0;
}
//����Ҳ������Ƿ��ؿ�ָ��


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


#include<stdio.h>
int main()
{
	int a = 1;
	char* pa = (char*)& a;
	if (*pa == 1)
		printf("С��\n");
	else
		printf("���\n");
	return 0;
}


#include<stdio.h>
int CheckSystem()
{
	int a = 1;
	char* pa = (char*)& a;
	return *pa;
}
int main()
{
	int ret = CheckSystem();
	if (ret == 1)
		printf("С��\n");
	else
		printf("���\n");
	return 0;
}


#include<stdio.h>
int CheckSystem()
{
	union Un
	{
		int i;
		char c;
	}u;
	u.i = 1;
	return u.c;
}
int main()
{
	int ret = CheckSystem();
	if (ret == 1)
		printf("С��\n");
	else
		printf("���\n");
	return 0;
}


#include<stdio.h>
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void Swap(char* left, char* right,int width)
{
	for (int i = 0; i < width; i++)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right++;
	}
}
void My_BubbleSort(int arr[], int sz, int width, int (*cmp_int)(const void* e1, const void* e2))
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (cmp_int((char*)arr + j * width, (char*)arr + (j + 1) * width )> 0)
			{
				Swap((char*)arr + j * width, (char*)arr + (j + 1) * width, width);
			}
		}
	}

}
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	My_BubbleSort(arr, sz, sizeof(arr[0]), cmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
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
		return 1 + my_strlen(str+1);
}
int main()
{
	char arr[] = "ABCDEFGHI";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)
{
	assert(str);
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "ABCDEFGHI";
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
	while (*str)
	{
		str++;
	}
	return str - ret;
}
int main()
{
	char arr[] = "ABCDEFGHI";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
#include<assert.h>
char *my_strcpy(char* dest,const char *source)
{
	assert(dest);
	assert(source);
	char* ret = dest;
	while (*dest++= *source++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr[] = "ABCDEFGHI";
	char arr1[20] = { 0 };
	my_strcpy(arr1, arr);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<assert.h>
#include<string.h>
char* my_strcpy(char* dest, const char* source,size_t count)
{
	assert(dest);
	assert(source);
	char* ret = dest;
	int sz = 0;
	if (strlen(source) < count)
	{
		sz = count - strlen(source);
		count = strlen(source);
	}
	while (count--)
	{
		*dest++ = *source++;
	}
	while (sz--)
	{
		*dest = '\0';
	}
	return ret;
}
int main()
{
	char arr[] = "ABCDEFGHI";
	char arr1[20] = { 0 };
	my_strcpy(arr1, arr,4);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
int main()
{
	char arr[20] = "abcdef";
	int len = strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abc";
	if (strlen(arr2) - strlen(arr1) > 0)
		printf("arr2>arr1");
	else
		printf("arr2<arr1");
	return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "abcdef";
	strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


//ģ��ʵ��strcpy
//�ַ����Ŀ���
#include<stdio.h>
void my_strcpy(char* dest, char* source)//��ָ�����
{
	while (*source != '\0')
	{
		*dest = *source;
		dest++;
		source++;
	}
	*dest = *source;
}
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello word";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
int main()
{
	char arr1[30] = "hello world";
	char arr2[] = "change world";
	strncat(arr1, arr2, 3);
	printf("%s", arr1);
	return 0;
}
//׷�ӵ�ʱ��Ҫ������һ��\0��ȥ
//���ϣ��׷�ӵ��ַ������������ַ�������ĸ����Ļ��������������׷��0.ֻ���������ַ�������ĳ��ȣ�Ȼ���һ��\0�����ʲô������û��


#include<stdio.h>
int main()
{
	char arr1[] = "abcdefabcdef";
	char arr2[] = "bcd";
	char* ret = strstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("�Ҳ���\n");   //����ֱ�ӷ��أ���Ҫ�Ƚ����ж�һ��
	}
	else
	{
		printf("%s\n", ret);

	}
	return 0;
}
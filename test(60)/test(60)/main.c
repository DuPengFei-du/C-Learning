#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
int main()
{
	int a = 1;
	char* pa = (char*)& a;
	if (*pa == 1)
		printf("小端\n");
	else
		printf("大端\n");
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
		printf("小端\n");
	else
		printf("大端\n");
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
		printf("小端\n");
	else
		printf("大端\n");
	return 0;
}


#include<stdio.h>
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void Swap(char* buf1, char* buf2, int width)
{
	for (int i = 0; i < width; i++)
	{
		char temp = *buf1;
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2++;
	}
}
void My_BubbleSort(int arr[], int sz, int width, int (*cmp_int)(const void* e1, const void* e2))
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (cmp_int((char*)arr + j * width, (char*)arr + (j + 1) * width) > 0)
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
	int count = 0;
	char* ret = str;
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
	while(*dest++=*source++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "abcdef";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
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
	while (sz -- )
	{
		*dest = '\0';
	}
	return ret;
}
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "abcdef";
	my_strncpy(arr1, arr2,14);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<assert.h>
#include<string.h>
char* my_strncat(char* dest, const char* source, int n)
{
	assert(dest);
	assert(source);
	char* ret = dest;
	while (*dest)
	{
		dest++;
	}
	while (n--)
	{
		*dest++ = *source++;
	}
	*dest = '\0';
	return ret;
}
int main()
{
	char arr1[20] = "ABC";
	char arr2[] = "abcdef";
	my_strncat(arr1, arr2, 4);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<assert.h>
#include<string.h>
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
	char arr1[20] = "ABC";
	char arr2[] = "abcdef";
	my_strcat(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


char* strstr(const char* string, const char* strCharSet);
//查找子字符串，返回的是地址，第一次出现的位置
//如果没有找到的话，返回空指针，但是不能直接返回，因为如果是没有找到的话，返回空指针就是非法的内存访问了，就会出错了。
//查找其第一次出现的位置


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "bcdef";
	char *ret=strstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("找不到\n");
	}
	else
	{
		printf("%s\n", ret);
	}
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
	while (start != '\0')
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
	char arr1[] = "abcdefdef";
	char arr2[] = "def";
	char* ret = my_strstr(arr1, arr2);
	if (ret == NULL)
		printf("找不到\n");
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
	const char* ret;
	ret = strchr(str, ch);
	printf("|%c| 之后的字符串是 - |%s|\n", ch, ret);
	return 0;
}
//如果找不到还是返回空指针


#include<stdio.h>
int main()
{
	int a = 1;
	char* pa = (char*)& a;
	if (*pa == 1)
		printf("小端\n");
	else
		printf("大端\n");
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
		printf("小端\n");
	else
		printf("大端\n");
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
		printf("小端\n");
	else
		printf("大端\n");
	return 0;
}


#include<stdio.h>
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void Swap(char* buf1, char* buf2, int width)
{
	for (int i = 0; i < width; i++)
	{
		char temp = *buf1;
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2++;
	}
}
void My_BubbleSort(int arr[], int sz, int width, int (*cmp_int)(const void* e1, const void* e2))
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (cmp_int((char*)arr + j * width, (char*)arr + (j + 1) * width) > 0)
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
		count++;
		str++;
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
	int count = 0;
	char* ret = str;
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
	char arr1[20] = { 0 };
	char arr2[] = "abcdef";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
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
		dest = '\0';
	}
	return ret;
}
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "abcdef";
	my_strncpy(arr1, arr2,3);
	printf("%s", arr1);
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
	char arr1[20] = "ABC";
	char arr2[] = "abcdef";
	my_strcat(arr1, arr2);
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
	char arr1[20] = { 0 };
	char arr2[] = "abcdef";
	strcpy(arr1, arr2);
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
int main()
{
	char arr1[30] = "hello world";
	char arr2[] = "change world";
	strncat(arr1, arr2, 3);
	printf("%s", arr1);
	return 0;
}
//追加的时候要主动放一个\0过去
//如果希望追加的字符个数大于我字符串本身的个数的话，不会再像后面追加0.只会链接我字符串本身的长度，然后放一个\0，别的什么操作都没有


char* strstr(const char* string, const char* strCharSet);
//查找子字符串，返回的是地址，第一次出现的位置
//如果没有找到的话，返回空指针，但是不能直接返回，因为如果是没有找到的话，返回空指针就是非法的内存访问了，就会出错了。


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "def";
	char* ret = strstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("找不到\n");
	}
	else
	{
		printf("%s", ret);
	}
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
	char arr2[] = "def";
	char* ret = my_strstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("找不到\n");
	}
	else
	{
		printf("%s", ret);
	}
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
	printf("|%c| 之后的字符串是 - |%s|\n", ch, ret);
	return 0;
}
//如果找不到还是返回空指针
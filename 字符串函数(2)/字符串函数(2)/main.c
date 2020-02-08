#define _CRT_SECURE_NO_WARNINGS 1


//长度受限制的字符串操作函数
//strncpy
//strncat
//strncmp
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = "hello world";
	char arr2[] = "first";
	strncpy(arr1, arr2, 5);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = "hello world";
	char arr2[] = "hi";
	strncpy(arr1, arr2, 5);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "world";
	strncat(arr1, arr2, 3);
	printf("%s", arr1);
	return 0;
	//结果为hello wor
}


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "world";
	strncat(arr1, arr2, 8);
	printf("%s", arr1);
	return 0;
}


//strncmp
#include<stdio.h>
#include<string.h>
int main()
{
	char* p1 = "abcd";
	char* p2 = "bdefvf";
	int ret = strncmp(p1, p2, 3);
	printf("%d", ret);
	return 0;
}


//strstr
//在一个字符串中找一个字符串
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abcdefabcdef";
	char arr2[] = "bcdef";
	char *ret = strstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("不存在！\n");
	}
	else
		printf("%s\n", ret);
	return 0;
}


//模拟实现
#include<stdio.h>
#include<assert.h>
char* my_strstr(const char* str1, const char* str2)
{
	const char* s1 = str1;
	const char* s2 = str2;
	const char* start = str1;
	assert(str1 != NULL);
	assert(str2 != NULL);
	//查找
	if(*str2 == '\0')
		return (char*)str1;

	while(*start)
	{
		s2 = str2;
		s1 = start;
		while(*s1 && *s2 && *s1==*s2)
		{
			s1++;
			s2++;
		}
		if(*s2 == '\0')
		{
			return (char*)start;
		}
		start++;
	}
	return NULL;
}
int main()
{
	char arr1[] = "abbbcdef";
	char arr2[] = "bbc";
	char* ret = my_strstr(arr1, arr2);
	if(ret == NULL)
	{
		printf("不存在\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}


//strtok
//切分字符串
//"192.168.0.1" -点分十进制
#include<stdio.h>
int main()
{
	char*p = "@.";
	char *ret = NULL;
	char arr1[] = "bit@bitedu.tech";
	char tmp[50] = {0};
	strcpy(tmp, arr1);
	for(ret=strtok(tmp, p); ret != NULL; ret=strtok(NULL, p))
	{
		printf("%s\n", ret);
	}
	return 0;
}


#include<stdio.h>
#include <errno.h>
int main()
{
	/*printf("%s\n", strerror(0));
	printf("%s\n", strerror(1));
	printf("%s\n", strerror(2));
	printf("%s\n", strerror(3));
	printf("%s\n", strerror(4));*/
	//操作文件
	FILE* pf = fopen("hehe.txt", "r");
	if(pf == NULL)
		printf("%s\n", strerror(errno));//C语言内置的错误码存放的变量
	return 0;
}


#include <ctype.h>
int main()
{
	//int ret = isspace('a');
	//int ret = islower('A');
	int ret = isupper('a');
	printf("%d\n", ret);
	return 0;
}

int main()
{
	printf("%c\n", toupper('a'));
	printf("%c\n", tolower('1'));
	return 0;
}
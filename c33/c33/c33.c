//strstr
#include<stdio.h>
int main()
{
	char arr1[] = "abcdefabcdef";
	char arr2[] = "bcd";
	char* ret = strstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("%s\n", ret);

	}
	return 0;
}



//ģ��ʵ��strstr
/*
��*start��='\0'��ʱ�򣬾Ͱ�start��ֵ��s1������ȥ����,��str2��ֵ��s2
��s2Ҳ����ʼλ�ÿ�ʼ��Ȼ��ѭ�����ж����� *s1 != '\0' && *s2 != '\0' && *s1 == *s2
Ȼ��s1��s2���мӼӣ��Ӽ�����֮������ȥ�жϣ�����һ�Σ�s1����s2
����'\0����ʱ�򣬻������ǲ���ȵ�ʱ�򣬾������������*str2=='\0'��ʱ�򣬾����ҵ��ˣ�Ȼ��������
����Ҳ����Ļ����ͷ��ؿ�ָ�롣
���Ҫ��һ�����ַ����Ļ��������������
�ڿ����棬����������������Ĵ�������ֱ�ӷ���str1
*/
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
		return (char *)str1;
	}
	while (*start!='\0')//��start����'\0'��ʱ���û�б�Ҫ�ټ��������ˣ���һ���ǲ��Ҳ�������
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
			return (char *)start;
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


//strchr
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


//strtok
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
		printf("%s\n", ret);
	}
	return 0;
}
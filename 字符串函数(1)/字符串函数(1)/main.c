#define _CRT_SECURE_NO_WARNINGS 1



//�ַ��������ַ�������
//strlen����
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
	//��ӡ�Ľ����arr2>arr1
	//size_t strlen( const char *string );
	//strlen�����ķ���ֵsize_t ���͵���
	//size_t ���޷������͵�����
	//3-6�Ľ��Ϊ-3����ô��-3�������޷���������ʱ����ô��������һ��
	//ֵ�ܴ������������һ��>0,��ô��ӡ�ľ���arr2>arr1
	//����ֵд��size_t�Ļ�����ʵ��Щʱ���Ǻ����׳���ģ�����д��size_tҲ����ԭ���
	//��Ϊ����ֵ�϶��������Ǹ�����д��size_t�Ǻ���������
	//���ǣ�ģ��ʵ�ֵ�ʱ��д��intҲ�ǿ��Եġ�д��int�Ǹ������׳����
	//������ʵ���ַ���ֵ���Ͷ��ǿ��Եġ�
}


//strlen������ģ��ʵ��
#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)
{
	assert(str != NULL);
	if (*str == 0)
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


//strcpy
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = { 'a','b','c','d','\0' };
	strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
	//����Ĵ�����һ�������׳���ĵ���ǣ����arr2������û��\0�Ļ�
	//��ô�������ͻ�ֱ�ӱ���������Ϊstrcpy�ڿ�����ʱ����Ҫ��ͬ\0һ�𿽱���ȥ��
	//û��\0��ͣ���������ͻ�Խ�������
	//���ң�Ŀ���ַ���Ҫ���㹻�Ŀռ�ȥ����ԭ�����ַ���
}


#include<stdio.h>
int main()
{
	char* p = "hello world";
	char arr2[] = { 'a','b','c','d','\0' };
	strcpy(p, arr2);
	printf("%s", p);
	return 0;
}


#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* source)  //����Ŀ���ַ�������ʼ��ַ
{
	char* ret = dest;
	assert(dest != NULL);
	assert(source != NULL);
	while (*dest++ = *source++)    //\0Ҳһ�𶼸��ƹ�ȥ�ˣ����üӼӣ���ʹ���ټӼ�
	{
		;
	}
	return ret;  //�������д return dest�Ļ����ǲ��еģ���Ϊdest�Ѿ��仯�ˣ�������Ҫ�ڿ�ͷ��¼����dest����ʼ��ַ��
}
int main()
{
	char arr1[20] = "################";
	char arr2[] = "Hello World";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[] = "**********";
	char arr2[] = "hello";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


//strcat
//Ŀ���ַ����б���Ҫ��\0
//�����Ĺ�����׷��һ���ַ���
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = "Hello";
	strcat(arr1, " world");
	printf("%s", arr1);
	return 0;
}


//strcat��ģ��ʵ��
#include<stdio.h>
#include<assert.h>
char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest != '\0')
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = "hello";
	char arr2[] = " world";
	my_strcat(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


//strcmp
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "bcd";
	char arr2[] = "abcedf";
	int ret = strcmp(arr1, arr2);
	printf("%d", ret);
	return 0;
}


//strcmp��ģ��ʵ��:
#include<stdio.h>
#include<assert.h>
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
			return 0;
	}
	if (*str1 > * str2)
		return 1;
	else
		return -1;

}
int main()
{
	char* str1 = "abcd";
	char* str2 = "bcdef";
	int ret = my_strcmp(str1, str2);
	printf("%d", ret);
	return 0;
}
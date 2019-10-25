#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abc";
	if (strlen(arr2) - strlen(arr1) > 0)
	{
		printf("arr2>arr1\n");
	}
	else
	{
		printf("arr2<arr1\n");
	}
	return 0;
}


//ģ��ʵ��strcpy
#include<stdio.h>
char* my_strcpy(char* dest, char* source)
{
	char* ret = dest;
	while (*source != '\0')
	{
		*dest = *source;
		dest++;
		source++;
	}
	*dest = *source;//�ٰ�\0������ȥ
	return ret;
}
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello world";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


//ģ��ʵ��strcpy
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest, char* source)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(source != NULL);
	while (*dest++ = *source++)
	{
		;
	}
	return ret;

}
int main()
{
	char arr1[20] = { "xxxxxxxxxxxxxx" };
	char arr2[] = "hello world";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


//�⺯���µ�strcat���ַ��������ӣ�����˵��׷���ַ�����
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = { "hello " };
	strcat(arr1, "world");
	printf("%s", arr1);
	return 0;
}


//ģ��ʵ��strcat
#include<stdio.h>
#include<assert.h>
char* my_strcat(char* dest, const char* source)
{
	//�ַ�������������Ҫ�ҵ�Ŀ���ַ�����\0,Ȼ����ȡ׷�ӣ�һ����Ϊ����
	char* ret = dest;
	assert(dest != NULL);
	assert(source != NULL);
	while (*dest != '\0')
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
	char arr1[20] = "hello ";
	my_strcat(arr1, "world");
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<assert.h>
char* my_strcat(char* dest, const char* source)
{
	//�ַ�������������Ҫ�ҵ�Ŀ���ַ�����\0,Ȼ����ȡ׷�ӣ�һ����Ϊ����
	char* ret = dest;
	assert(dest != NULL);
	assert(source != NULL);
	while (*dest != '\0')
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
	char arr1[20] = "hello ";
	my_strcat(arr1, arr1);
	printf("%s", arr1);
	return 0;
}
//�ַ����Լ������Լ��ǲ����еģ��Լ������Լ��Ļ��ͻḲ�ǵ�\0������
//������Ҳ�����ֹ�ı�־����һֱ�����������ѭ�����ճ������


//�⺯���µ�strcmp
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


//ģ��ʵ��strcmp
#include<stdio.h>
#include<assert.h>
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	while(*str1 == *str2)
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


//strncpy
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = "hello world";
	char arr2[] = "hi";
	strncpy(arr1, arr2, 2);
	printf("%s\n", arr1);
	return 0;
}

#include<stdio.h>
#include<assert.h>
char* my_strncpy(char* dest, const char* src,int n)
{
	char* ret = dest;
	assert(dest!=NULL);
	assert(src!=NULL);
	char* p = dest;
	while(n--)
	{
		*p++ = *src++;
	}
	return ret;
}
int main()
{
	char arr1[20] = "hello world";
	char arr2[] = "hi";
	my_strncpy(arr1, arr2, 2);
	printf("%s\n", arr1);
	return 0;
}


//�⺯���µ�strncat
#include<stdio.h>
int main()
{
	char arr1[30] = "hello world";
	char arr2[] = "change world";
	strncat(arr1, arr2, 3);
	printf("%s", arr1);
	return 0;
}


//ģ��ʵ��
#include<stdio.h>
#include<assert.h>
char* my_strncat(char* dest, const char* src,int n)
{
	char* ret = dest;
	assert(dest);
	assert(src);
	char* p = dest;
	while(*p != 0)
	{
		p++;
	}
	while(n--)
	{
		*p++ = *src++;
	}
	*p = 0;
	return ret;
}
int main()
{
	char arr1[30] = "hello world";
	char arr2[] = "change world";
	my_strncat(arr1, arr2, 3);
	printf("%s", arr1);
	return 0;
}


//strncmp
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[30] = "hello world";
	char arr2[] = "change world";
	int ret=strncmp(arr1, arr2, 3);
	printf("%d",ret );
	return 0;
}


//ģ��ʵ��strncmp
#include<stdio.h>
#include<assert.h>
int my_strncmp(const char* src1, const char* src2, int n)
{
	assert(src1);
	assert(src2);
	while((src1!= NULL) && (src2!= NULL) && (n!= 0))
	{
		if((*src1 - *src2) > 0)
			return 1;
		if((*src1 - *src2) < 0)
			return -1;
		src1++;
		src2++;
		n--;
	}
	if(*src1  == 0)
		return - 1;
	if(*src2 == 0)
		return 1;
	return 0;
}
int main()
{
	char arr1[30] = "hello world";
	char arr2[] = "change world";
	int ret = my_strncmp(arr1, arr2, 3);
	printf("%d", ret);
	return 0;
}
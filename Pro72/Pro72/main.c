#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
int main()
{
	int a = 10;  //���ڴ��п���һ���ռ�
	int* p = &a; //�������ǶԱ���aȡ�����ĵ�ַ������ʹ��&������
	//��a�ĵ�ַ���ڱ���p�У�p����һ��ָ�������
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;  //�ĸ��ֽ��ĸ��ֽ�ȥ�ı�
	for (int i = 0; i < 10; i++)
	{
		*(p + i) = 0;
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	char* p = arr;  //һ���ֽ�һ���ֽ�ȥ�ı�
	for (int i = 0; i < 10; i++)
	{
		*(p + i) = 0;
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	int* pa = &a;
	char* pc = &a;
	printf("%p\n", pa);
	printf("%p\n", pc);
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	return 0;
}


#include<stdio.h>
int main()
{
	double d[10] = { 0 };
	double* pd = d;
	printf("%p\n", pd);
	printf("%p\n", pd + 4);
	//��4ʵ�����Ǽ���32����Ϊ4*8=32
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%d\n", &arr[9] - &arr[0]);
	return 0;
}
//�����9����Ϊ����֮����9��Ԫ��


#include<stdio.h>
int my_strlen(char* str)
{
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen(str + 1);
}
int main()
{
	char arr[] = "Hello World";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}


#include<stdio.h>
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "Hello World";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}


//����ָ��-ָ��ķ���
//�ó�����ָ��֮���Ԫ�ظ���
#include<stdio.h>
int my_strlen(char* str)
{
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - start;
}
int main()
{
	char arr[] = "Hello World";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%p\n", &arr[0]);   //������Ԫ�صĵ�ַ
	printf("%p\n", arr);       //������Ԫ�صĵ�ַ
	printf("%p\n", &arr);      //����ĵ�ַ
	return 0;
}
//���������������ʾ��������
//&arr  //��������ʾ�����������飬ȡ����������ĵ�ַ
//sizeof(arr)  //��������ʾ�����������飬���������������Ĵ�С
//����֮�⣬����������������Ԫ�صĵ�ַ


//ָ�����������
//ָ�������п��Էźö���˵ĵ�ַ
#include<stdio.h>
int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	int e = 5;
	int* arr[5] = { &a,&b,&c,&d,&e };
	printf("%d", *arr[4]);  //��ӡ�Ľ��Ϊe��ֵ��Ϊ5
	return 0;
}


#include<stdio.h>
int main()
{
	char* arr1[5];   //sizeof(arr1)   ��СΪ20
	int* arr2[5];    //sizeof(arr2)   ��СΪ20
}


//ģ��ʵ��
//�ݹ�
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
	char arr1[] = "Hello world";
	int len = my_strlen(arr1);
	printf("%d", len);
	return 0;
}


//������
#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)
{
	assert(str);
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr1[] = "Hello world";
	int len = my_strlen(arr1);
	printf("%d", len);
	return 0;
}


//ָ��-ָ��
#include<stdio.h>
int my_strlen(char* str)
{
	char* cp = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - cp;
}
int main()
{
	char arr1[] = "Hello world";
	int len = my_strlen(arr1);
	printf("%d", len);
	return 0;
}


//ģ��ʵ��strcpy
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
	char arr1[] = "Hello";
	char arr2[] = "world";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}


//ģ��ʵ��strcat
#include<stdio.h>
#include<assert.h>
char* my_strcat(char* str1, char* str2)
{
	assert(str1);
	assert(str2);
	char* ret = str1;
	while (*str1 != '\0')
		str1++;
	while (*str1++ = *str2++)
	{
		;
	}
	return ret;
}
int main()
{
	//���ҵ�\0��Ȼ������ַ�������
	char arr1[20] = "hello";
	char arr2[] = " world";
	my_strcat(arr1, arr2);
	printf("%s", arr1);
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


//ģ��ʵ��
#include<stdio.h>
#include<assert.h>
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1);
	assert(str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}
	if (*str1 > * str2)
		return 1;
	else
		return -1;
}
int main()
{
	char arr1[] = "acsvsv";
	char arr2[] = "bafgssvsv";
	int ret = my_strcmp(arr1, arr2);
	printf("%d", ret);
	return 0;
}


#include<stdio.h>
int main()
{
	char arr1[] = "Hello world";
	char arr2[] = "change";
	strncpy(arr1, arr2, 2);
	printf("%s\n", arr1);
	return 0;
}


#include<stdio.h>
int main()
{
	char arr1[] = "Hello world";
	char arr2[] = "hi";
	strncpy(arr1, arr2, 5);
	printf("%s\n", arr1);
	return 0;
}


#include<stdio.h>
struct Stu
{
	//��Ա����
	//��Ա�б�
	char name[20];
	short age;
	char sex[5];
	float score;
}s1, s2, s3;  //ѧ��s1,s2,s3   //����������ѧ��������Ϊȫ�ֱ���
int main()
{
	struct Stu s;
	return 0;
}


#include<stdio.h>
typedef struct Stu
{
	char name[20];
	short age;
	char sex[5];
	float score;
}Stu;   //Stu==struct Stu  �˴���StuΪ�����������Ǳ�����
int main()
{
	return 0;
}


#include<stdio.h>
struct Point
{
	int x;
	int y;
	//ע��ṹ���в��ܰ����Լ���һ�ṹ�壬���ǿ��԰�����Ľṹ��
	//�����Լ�����ṹ�壬����ṹ���С��ʱ��Ͳ�������
};
struct Test
{
	int a;
	char arr[10];
	int* p;
	struct Point;
};
int main()
{
	return 0;
}


#include<stdio.h>
struct Point
{
	int x;
	int y;
};
struct T
{
	char arr[10];
	int age;
	struct Point p;
	int arr2[5];
};
int main()
{
	struct Point p = { 1,2 };
	struct T t = { "hehe",20,{2,4},{1,2,3,4} };
	printf("%s %d %d %d %d %d\n", t.arr, t.age, t.p.x, t.p.y, t.arr2[0], t.arr2[1]);
	return 0;
}


struct Stu
{
	char name[20];
	int age;
};
//���ֻ����Щ����Ļ�������û�����ڴ�������ռ�ġ�
struct Stu s = { "zhangsan",20 };
//��������Ĵ���s������Ǿ���䣬�������ڴ���������һ���Ŀռ䡣
//���ҵ�name�Ļ�������s.name�����ҵ�age�Ļ�������s.age


#include<stdio.h>
struct Stu
{
	char name[20];
	int age;
};
void Print(struct Stu* s)  //�ṹ��ָ��
{
	printf("%s %d", s->name, s->age);
}
int main()
{
	struct Stu s = { "����",20 };
	Print(&s);
	return 0;
}


#include<stdio.h>
struct Stu
{
	char name[20];
	int age;
};
void Print(struct Stu s)  //�ṹ��ָ��
{
	printf("%s %d", s.name, s.age);
}
int main()
{
	struct Stu s = { "����",20 };
	Print(s);
	return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "hello world";
	char arr2[] = "change world";
	int ret = strncmp(arr1, arr2, 3);
	printf("%d", ret);
	return 0;
}


#include<stdio.h>
#include<assert.h>
char* my_strncat(char* dest, const char* src, int n)
{
	char* ret = dest;
	assert(dest);
	assert(src);
	char* p = dest;
	while (*p != 0)
	{
		p++;
	}
	while (n--)
	{
		*p++ = *src++;
	}
	*p = 0;  //����׷��һ��\0���ַ��������ˡ�
	return ret;
}
int main()
{
	char arr1[30] = "hello world ";
	char arr2[] = "change world";
	my_strncat(arr1, arr2, 3);
	printf("%s", arr1);
	return 0;
}


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


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "hello world";
	char arr2[] = "change world";
	int ret = strncmp(arr1, arr2, 3);
	printf("%d", ret);
	return 0;
}


#include<stdio.h>
#include<assert.h>
char* my_strncat(char* dest, const char* src, int n)
{
	char* ret = dest;
	assert(dest);
	assert(src);
	char* p = dest;
	while (*p != 0)
	{
		p++;
	}
	while (n--)
	{
		*p++ = *src++;
	}
	*p = 0;  //����׷��һ��\0���ַ��������ˡ�
	return ret;
}
int main()
{
	char arr1[30] = "hello world ";
	char arr2[] = "change world";
	my_strncat(arr1, arr2, 3);
	printf("%s", arr1);
	return 0;
}


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


#include<stdio.h>
void my_strcpy(char* dest, char* source)
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
	char arr1[20] = "################";
	char arr2[] = "Hello World";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
void my_strcpy(char* dest, const char* source)
{
	while (*dest++ = *source++)    //\0Ҳһ�𶼸��ƹ�ȥ�ˣ����üӼӣ���ʹ���ټӼ�
	{
		;
	}
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
	my_strcpy(arr1, NULL);
	printf("%s", arr1);
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
	printf("%s\n",ret);
	return 0;
}
//����Ҳ������Ƿ��ؿ�ָ��


#include<stdio.h>
int main()
{
	printf("%s\n", strerror(0));
	printf("%s\n", strerror(1));
	printf("%s\n", strerror(2));
	return 0;
}
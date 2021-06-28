#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz - 1; i++)
	{
		int flag = 1;
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;
			}
		}
		if (flag == 1)
			break;
	}
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
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
	char arr[] = "hello world";
	int len = my_strlen(arr);
	printf("%d ", len);
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
	char arr[] = "hello world";
	int len = my_strlen(arr);
	printf("%d ", len);
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
	char arr[] = "hello world";
	int len = my_strlen(arr);
	printf("%d ", len);
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
	char arr2[] = "hello world";
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
		*dest = '\0';
	}
	return ret;
}
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello world";
	my_strncpy(arr1, arr2,20);
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
	while(*dest++=*source++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = "AB";
	char arr2[] = "hello world";
	my_strcat(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<assert.h>
char* my_strncat(char* dest, const char* source,int n)
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
	char arr1[20] = "AB";
	char arr2[] = "hello world";
	my_strncat(arr1, arr2,3);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<assert.h>
int my_strcmp(char* dest, const char* source)
{
	assert(dest);
	assert(source);
	if (*dest = *source)
	{
		if (*dest == '\0')
			return 0;
		dest++;
		source++;
	}
	return *dest - *source;
}
int main()
{
	char arr1[20] = "AB";
	char arr2[] = "hello world";
	int ret=my_strcmp(arr1, arr2);
	printf("%d", ret);
	return 0;
}


char* strstr(const char* string, const char* strCharSet);
//�������ַ��������ص��ǵ�ַ����һ�γ��ֵ�λ��
//���û���ҵ��Ļ������ؿ�ָ�룬���ǲ���ֱ�ӷ���
//��Ϊ�����û���ҵ��Ļ������ؿ�ָ����ǷǷ����ڴ�����ˣ��ͻ�����ˡ�


#include<stdio.h>
#include<string.h>
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
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", *(p+i));
	}
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
#define a 5
int main()
{
	float values[a];
	float* vp;
	for (vp = &values[0]; vp < &values[a];)
	{
		*vp++ = 0;
	}
	return 0;
}
//�����ǽ�ǰ���Ԫ�ص�ֵ�����0


#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%d\n", &arr[9] - &arr[0]);
	return 0;
}
//�����9����Ϊ����֮����9��Ԫ��


#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%d\n", &arr[0] - &arr[9]);
	return 0;
}
//���Ϊ-9����Ϊ��С��ַ-���ַ
//����ľ���ֵΪ����֮��Ԫ�صĸ���


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


#include<stdio.h>
int main()
{
	int a = 10;
	int* p = &a;
	int** pp = &p;
	int*** ppp = &pp;
	return 0;
}


//ָ������
//ָ������������
//ָ��������ŵ���ָ��
#include<stdio.h>
int main()
{
	int arr[10];  //�������� 
	char ch[5];   //�ַ�����
	int* arr2[6];
	char* arr[3];
	return 0;
}


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
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = { 2,3,4,5,6 };
	int arr3[5] = { 3,4,5,6,7 };
	int* arr[3] = { arr1,arr2,arr3 };  //��������ʾ��Ԫ�صĵ�ַ
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
			//printf("%d ",*(arr[i]+j);
		}
		printf("\n");
	}
	return 0;
}


#include<stdio.h>
int main()
{
	char* arr1[5];   //sizeof(arr1)   ��СΪ20
	int* arr2[5];    //sizeof(arr2)   ��СΪ20
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
	char arr[] = "ABC";
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
	char arr[] = "ABC";
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
	char arr[] = "ABC";
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
	char arr2[] = "hello world";
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
		*dest = '\0';
	}
	return ret;
}
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello world";
	my_strncpy(arr1, arr2,20);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<assert.h>
#include<string.h>
char* my_strncat(char* dest, const char* source,int n)
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
	char arr1[20] = "a";
	char arr2[] = "hello world";
	my_strncat(arr1, arr2,12);
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
	char arr1[20] = "a";
	char arr2[] = "hello world";
	my_strcat(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<assert.h>
#include<string.h>
int my_strcmp(const char* dest, const char* source)
{
	assert(dest);
	assert(source);
	while (*dest == *source)
	{
		if (*dest == '\0')
			return 0;
		dest++;
		source++;
	}
	return  *dest - *source;
}
int main()
{
	char arr1[20] = "a";
	char arr2[] = "hello world";
	int ret = my_strcmp(arr1, arr2);
	printf("%d", ret);
	return 0;
}
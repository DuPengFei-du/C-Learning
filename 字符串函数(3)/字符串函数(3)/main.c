#define _CRT_SECURE_NO_WARNINGS 1



//memcpy
//�ڴ濽��
#include<stdio.h>
#include<string.h>
int main()
{
	int arr1[10] = { 0 };
	int arr2[] = { 1,2,3 };
	strcpy(arr1, arr2);
	//1,2,3������ڴ��У������д�С�˵�����
	//1��2��3���ڴ��еĴ洢������ʾ��
	//01 00 00 00 02 00 00 00 03 00 00 00
	//strcpy����\0�ͻ�ͣ����������˵strcpy�����������ֻ������ 01 00
	//�����ֽڣ���������ȫ���������� 1��2��3ȫ��������ȥ
	return 0;
}


#include<stdio.h>
int main()
{
	int arr1[10] = { 0 };
	int arr2[] = { 1,2,3 };
	memcpy(arr1, arr2, 12);
	//memcpy��ʹ��ʱ�򣬲���Ҫ��ע���͵�����
    //��Ϊmemcpy�����Ĳ�������Ϊvoid*���͵Ĳ���
	//ʲô�����͵ı������ǿ��Խ��յ�
	return 0;
}


//ģ��ʵ��memcpy
#include<stdio.h>
#include<assert.h>
void* my_memcpy(void* dest, const void* source, size_t count)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(source != NULL);
	while (count--)
	{
		*(char*)dest = *(char*)source;
		((char*)dest)++;
		((char*)source)++;
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


//memmove
#include<stdio.h>
#include<string.h>
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	memmove(arr1 + 2, arr1, 16);
	return 0;
}


#include<stdio.h>
#include<assert.h>
void* my_memmove(void* dest, const void* src, size_t count)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	if (dest < src)
	{
		while (count--)
		{
			*(char*)dest = *(char*)src;
			((char*)src)++;
			((char*)dest)++;
		}
	}
	else
	{
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}
	return ret;
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr1 + 2, arr1, 16);
	return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
	int arr1[] = { 1,2,3,4 };
	int arr2[] = { 1,2,4,3 };
	int ret = memcmp(arr1, arr2, 12);
	printf("%d\n", ret);
}


//memset   --�����ڴ��
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "HELLO WORLD";
	memset(arr1, 'x', 11);
	printf("%s\n", arr1);
	return 0;
}
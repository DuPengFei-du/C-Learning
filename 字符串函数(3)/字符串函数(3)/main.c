#define _CRT_SECURE_NO_WARNINGS 1



//memcpy
//内存拷贝
#include<stdio.h>
#include<string.h>
int main()
{
	int arr1[10] = { 0 };
	int arr2[] = { 1,2,3 };
	strcpy(arr1, arr2);
	//1,2,3存放在内存中，存在有大小端的问题
	//1，2，3在内存中的存储如下所示：
	//01 00 00 00 02 00 00 00 03 00 00 00
	//strcpy遇到\0就会停下来，所以说strcpy在这个程序中只拷贝了 01 00
	//两个字节，他不能完全的做到，把 1，2，3全部拷贝过去
	return 0;
}


#include<stdio.h>
int main()
{
	int arr1[10] = { 0 };
	int arr2[] = { 1,2,3 };
	memcpy(arr1, arr2, 12);
	//memcpy在使用时候，不需要关注类型的问题
    //因为memcpy函数的参数类型为void*类型的参数
	//什么样类型的变量都是可以接收的
	return 0;
}


//模拟实现memcpy
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


//memset   --设置内存块
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "HELLO WORLD";
	memset(arr1, 'x', 11);
	printf("%s\n", arr1);
	return 0;
}
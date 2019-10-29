//memcpy
#include<stdio.h>
int main()
{
	int arr1[10] = { 0 };
	int arr2[] = { 1,2,3 };
	memcpy(arr1, arr2, 12);
	return  0;
}

//模拟实现memcpy
#include<stdio.h>
#include<assert.h>
void* my_memcpy(void* dest, const void* source, size_t num)
{
	//每次拷贝一个字节最为合适
	assert(dest != NULL);
	assert(source != NULL);
	size_t i = 0;
	char* ret = (char*)dest;
	char* s1 = (char*)dest;
	const char* s2 = (char*)source;
	for (i = 0; i < num; i++)
	{
		*(char*)dest = *(char*)source;
		((char*)s1)++;
		((char*)s2)++;
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


#include<stdio.h>
#include<assert.h>
void* my_memcpy(void* destination, const void* source, size_t num)
{
	size_t i = 0;
	assert(destination != NULL);
	assert(source != NULL );
	char* dest = (char*)destination;
	char* sour = (char*)source;
	for(i=0;i<num;i++)
    {
       dest[i] = sour[i];
     }
	return destination;
}
int main()
{
	int arr1[10] = { 0 };
	int arr2[] = { 1,2,3 };
	my_memcpy(arr1, arr2, 12);
	return 0;
}


//memove
//实现重叠拷贝
#include<stdio.h>
#include<string.h>
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
	memmove(arr1 + 2, arr1, 8);
	return 0;
}


//模拟实现memmove
#include<stdio.h>
#include<assert.h>
void* my_memmove(void* destination, const void* source, int count)
{
	int i = 0;
	assert(destination != NULL);
	assert(source != NULL);
	if (destination < source)
	{
		//从前往后拷贝
		char* dest = (char*)destination;
		char* sour = (char*)source;
		for (i = 0; i <count; i++)
		{
			dest[i] = sour[i];
		}
	}
	else
	{
		while (count--)
		{
			*((char*)destination + count) = *((char*)source + count);
		}
	}
	return destination;
}
int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr1 + 2, arr1, 16);
	return 0;
}


//memcmp
//在两个缓冲区里比较两个字符
#include<stdio.h>
int main()
{
	int arr1[] = { 1,2,3,4 };
	int arr2[] = { 1,2,4,5 };
	int ret = memcmp(arr1, arr2, 12);
	printf("%d", ret);
	return 0;
}


//memset
#include<stdio.h>
int main()
{
	char arr1[] = "hello world";
	memset(arr1, 'x', 11);
	printf("%s\n", arr1);
	return 0;
}
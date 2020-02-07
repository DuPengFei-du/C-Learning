#define _CRT_SECURE_NO_WARNINGS 1



//字符函数和字符串函数
//strlen函数
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
	//打印的结果是arr2>arr1
	//size_t strlen( const char *string );
	//strlen函数的返回值size_t 类型的数
	//size_t 是无符号类型的整数
	//3-6的结果为-3，那么当-3被看成无符号整数的时候，那么它将会是一个
	//值很大的正数，所以一定>0,那么打印的就是arr2>arr1
	//返回值写成size_t的话，其实有些时候是很容易出错的，但是写成size_t也是有原因的
	//因为返回值肯定不可能是负数，写成size_t是很容易理解的
	//但是，模拟实现的时候写成int也是可以的。写成int是更不容易出错的
	//所以其实两种返回值类型都是可以的。
}


//strlen函数的模拟实现
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
	//上面的代码有一个很容易出错的点就是，如果arr2数组中没有\0的话
	//那么这个程序就会直接崩溃掉，因为strcpy在拷贝的时候是要连同\0一起拷贝过去的
	//没有\0就停不下来，就会越界访问了
	//而且，目标字符串要用足够的空间去容纳原来的字符串
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
char* my_strcpy(char* dest, const char* source)  //返回目标字符串的起始地址
{
	char* ret = dest;
	assert(dest != NULL);
	assert(source != NULL);
	while (*dest++ = *source++)    //\0也一起都复制过去了，后置加加，先使用再加加
	{
		;
	}
	return ret;  //如果这里写 return dest的话，是不行的，因为dest已经变化了，所以需要在开头记录下来dest的起始地址。
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
//目标字符串中必须要有\0
//函数的功能是追加一个字符串
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = "Hello";
	strcat(arr1, " world");
	printf("%s", arr1);
	return 0;
}


//strcat的模拟实现
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


//strcmp的模拟实现:
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
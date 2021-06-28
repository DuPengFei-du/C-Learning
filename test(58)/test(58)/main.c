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
//查找子字符串，返回的是地址，第一次出现的位置
//如果没有找到的话，返回空指针，但是不能直接返回
//因为如果是没有找到的话，返回空指针就是非法的内存访问了，就会出错了。


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abcdefabcdef";
	char arr2[] = "bcd";
	char* ret = strstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("找不到\n");   //不能直接返回，需要先进行判断一下
	}
	else
	{
		printf("%s\n", ret);

	}
	return 0;
}


/*
当*start！='\0'的时候，就把start赋值给s1，让他去查找,把str2赋值给s2
让s2也从起始位置开始，然后循环的判断条件 *s1 != '\0' && *s2 != '\0' && *s1 == *s2
然后s1和s2进行加加，加加完了之后，再上去判断，当有一次，s1或者s2
等于'\0’的时候，或者他们不相等的时候，就跳出来，如果*str2=='\0'的时候，就是找到了，然后跳出来
如果找不到的话，就返回空指针。
如果要找一个空字符串的话（特殊情况）：
在库里面，对于这种特殊情况的处理，就是直接返回str1
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
		return (char*)str1;   //找空字符串，直接返回str1
	}
	while (*start != '\0')//当start遇到'\0'的时候就没有比要再继续查找了，那一定是查找不到的了
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
		printf("不存在\n");
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
	int a = 10;  //在内存中开辟一个空间
	int* p = &a; //这里我们对变量a取出他的地址，可以使用&操作符
	//将a的地址存在变量p中，p就是一个指针变量。
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
	int* p = arr;  //四个字节四个字节去改变
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
	char* p = arr;  //一个字节一个字节去改变
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
	//加4实际上是加了32，因为4*8=32
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
//功能是将前五个元素的值都变成0


#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%d\n", &arr[9] - &arr[0]);
	return 0;
}
//结果是9，因为他们之间有9个元素


#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%d\n", &arr[0] - &arr[9]);
	return 0;
}
//结果为-9，因为是小地址-大地址
//结果的绝对值为他们之间元素的个数


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


//利用指针-指针的方法
//得出两个指针之间的元素个数
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
	printf("%p\n", &arr[0]);   //数组首元素的地址
	printf("%p\n", arr);       //数组首元素的地址
	printf("%p\n", &arr);      //数组的地址
	return 0;
}
//两个特殊情况，表示整个数组
//&arr  //数组名表示的是整个数组，取出的是数组的地址
//sizeof(arr)  //数组名表示的是整个数组，计算的是整个数组的大小
//除此之外，所有数组名都是首元素的地址


#include<stdio.h>
int main()
{
	int a = 10;
	int* p = &a;
	int** pp = &p;
	int*** ppp = &pp;
	return 0;
}


//指针数组
//指针数组是数组
//指针数组里放的是指针
#include<stdio.h>
int main()
{
	int arr[10];  //整形数组 
	char ch[5];   //字符数组
	int* arr2[6];
	char* arr[3];
	return 0;
}


//指针数组的作用
//指针数组中可以放好多别人的地址
#include<stdio.h>
int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	int e = 5;
	int* arr[5] = { &a,&b,&c,&d,&e };
	printf("%d", *arr[4]);  //打印的结果为e的值，为5
	return 0;
}


#include<stdio.h>
int main()
{
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = { 2,3,4,5,6 };
	int arr3[5] = { 3,4,5,6,7 };
	int* arr[3] = { arr1,arr2,arr3 };  //数组名表示首元素的地址
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
	char* arr1[5];   //sizeof(arr1)   大小为20
	int* arr2[5];    //sizeof(arr2)   大小为20
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
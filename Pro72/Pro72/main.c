#define _CRT_SECURE_NO_WARNINGS 1



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
int main()
{
	int arr[10] = { 0 };
	printf("%d\n", &arr[9] - &arr[0]);
	return 0;
}
//结果是9，因为他们之间有9个元素


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
	char* arr1[5];   //sizeof(arr1)   大小为20
	int* arr2[5];    //sizeof(arr2)   大小为20
}


//模拟实现
//递归
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


//计数器
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


//指针-指针
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


//模拟实现strcpy
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


//模拟实现strcat
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
	//先找到\0，然后进行字符串拷贝
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


//模拟实现
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
	//成员变量
	//成员列表
	char name[20];
	short age;
	char sex[5];
	float score;
}s1, s2, s3;  //学生s1,s2,s3   //创建了三个学生出来，为全局变量
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
}Stu;   //Stu==struct Stu  此处得Stu为类型名，不是变量名
int main()
{
	return 0;
}


#include<stdio.h>
struct Point
{
	int x;
	int y;
	//注意结构体中不能包含自己这一结构体，但是可以包含别的结构体
	//包含自己这个结构体，在算结构体大小的时候就不好算了
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
//如果只有这些代码的话，他是没有向内存中申请空间的。
struct Stu s = { "zhangsan",20 };
//有了上面的创建s对象的那句语句，才算向内存中申请了一定的空间。
//想找到name的话，就用s.name，想找到age的话，就用s.age


#include<stdio.h>
struct Stu
{
	char name[20];
	int age;
};
void Print(struct Stu* s)  //结构体指针
{
	printf("%s %d", s->name, s->age);
}
int main()
{
	struct Stu s = { "张三",20 };
	Print(&s);
	return 0;
}


#include<stdio.h>
struct Stu
{
	char name[20];
	int age;
};
void Print(struct Stu s)  //结构体指针
{
	printf("%s %d", s.name, s.age);
}
int main()
{
	struct Stu s = { "张三",20 };
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
	*p = 0;  //主动追加一个\0就字符串连接了。
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
		printf("找不到\n");
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
	*p = 0;  //主动追加一个\0就字符串连接了。
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
		printf("找不到\n");
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
	while (*dest++ = *source++)    //\0也一起都复制过去了，后置加加，先使用再加加
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
//如果找不到还是返回空指针


#include<stdio.h>
int main()
{
	printf("%s\n", strerror(0));
	printf("%s\n", strerror(1));
	printf("%s\n", strerror(2));
	return 0;
}
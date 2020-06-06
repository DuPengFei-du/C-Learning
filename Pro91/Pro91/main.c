#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
int main()
{
	char arr[20] = "abcdef";
	int len = strlen(arr);
	printf("%d", len);
	return 0;
}


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
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
#include<assert.h>
int my_strlen(char* str)
{
	assert(str);
	char* ret = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - ret;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "abcdef";
	strcpy(arr1, arr2);
	printf("%s", arr1);
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
	char arr2[] = "abcdef";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


//模拟实现strcpy
//字符串的拷贝
#include<stdio.h>
void my_strcpy(char* dest, char* source)//用指针接收
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
	char arr1[20] = { 0 };
	char arr2[] = "hello word";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = "hello";
	strcat(arr1, " world");
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
	char arr1[20] = "hello";
	my_strcat(arr1, " world");
	printf("%s", arr1);
	return 0;
}


//字符串比较函数
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abcdef";
	char arr2[]="bcdef";
	int ret = 0;
	ret = strcmp(arr1, arr2);
	printf("%d", ret);
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
}s1, s2, s3;  //学生s1,s2,s3   //创建了三个学生出来
int main()
{
	struct Stu s;
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
};
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
}p1;  //声明类型的同时定义p1
int main()
{
	struct Point p2;     //定义结构体变量p2
	return 0;
}
//通常采用p2的方式


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
	//Print(s);
	return 0;
}


//strlen模拟实现
#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)
{
	assert(str);
	int count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
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
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
#include<assert.h>
int my_strlen(char* str)
{
	assert(str);
	char* ret = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - ret;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
int main()
{
	char arr[20] = "abcdef";
	int len = strlen(arr);
	printf("%d", len);
	return 0;
}


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
}


//strcpy模拟实现
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
	char arr1[20] = "hello";
	my_strcpy(arr1, "world");
	printf("%s\n", arr1);
	return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "abcdef";
	strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


//strcat
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = "Hello";
	char arr2[] = " world";
	strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}


//模拟实现strcat
#include<stdio.h>
#include<assert.h>
char* my_strcat(char* dest, const char* source)
{
	assert(dest);
	assert(source);
	char* ret = dest;
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
	//先找到\0的位置，然后再进行拷贝就可以了
	char arr1[20] = "hello";
	my_strcat(arr1, " world");
	printf("%s", arr1);
	return 0;
}


//strcmp
//模拟实现strcmp
#include<stdio.h>
#include<assert.h>
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1);
	assert(str2);
	while (*str1 == *str2)
	{
		if (*str1 == "\0")
			return 0;
		str1++;
		str2++;
	}
	return *str1 - *str2;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "bcdef";
	int ret=my_strcmp(arr1, arr2);
	printf("%d", ret);
	return 0;
}


#include<stdio.h>
#include<assert.h>
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	while (*str1 == *str2)
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


#include<stdio.h>
#include<assert.h>
#include<string.h>
char* my_strncpy(char* dest, const char* source, size_t count)
{
	assert(dest);
	assert(source);
	char* ret = dest;
	size_t len = 0;
	int offset = 0;
	len = strlen(source);
	if (len < count)          //src长度小于count
	{
		offset = count - len;
	}
	while (len)
	{
		*dest++ = *source++;
	}
	while (offset--)
	{
		*dest++ = '\0';
	}
	return ret;
}
int main()
{
	char arr1[] = "hello world";
	char arr2[] = "nihaoa";
	my_strncpy(arr1, arr2, 2);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<assert.h>
#include<string.h>
char* my_strncpy(char* dest, const char* src, size_t count)
{
	assert(dest);
	assert(src);
	char* res = dest;
	int sz = 0;
	if (strlen(src) < count)//src长度小于len
	{
		sz = count - strlen(src);
		count = strlen(src);
	}

	while (count--)
	{
		*dest++ = *src++;
	}
	while (sz--)
	{
		*dest++ = '\0';
	}
	return res;
}
int main()
{
	char arr1[] = "hello world";
	char arr2[] = "nihaoa";
	my_strncpy(arr1, arr2, 8);
	printf("%s", arr1);
	return 0;
}
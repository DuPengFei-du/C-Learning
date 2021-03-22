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
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
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
int main()
{
	int a = 1;
	char* pa = (char*)& a;
	if (*pa == 1)
		printf("小端\n");
	else
		printf("大端\n");
	return 0;
}


#include<stdio.h>
int CheckSystem()
{
	int a = 1;
	char* pa = (char*)& a;
	return *pa;
}
int main()
{
	int ret = CheckSystem();
	if (ret == 1)
		printf("小端\n");
	else
		printf("大端\n");
	return 0;
}


#include<stdio.h>
int CheckSystem()
{
	union Un
	{
		int i;
		char c;
	}u;
	u.i = 1;
	return u.c;
}
int main()
{
	int ret = CheckSystem();
	if (ret == 1)
		printf("小端\n");
	else
		printf("大端\n");
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
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void Swap(char* buf1, char* buf2, int width)
{
	for (int i = 0; i < width; i++)
	{
		char temp = *buf1;
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2++;
	}
}
void My_BubbleSort(int* arr, int sz, int width, int (*cmp_int)(const void* e1, const void* e2))
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (cmp_int((char*)arr + j * width, (char*)arr + (j + 1) * width) > 0)
			{
				Swap((char*)arr + j * width, (char*)arr + (j + 1) * width, width);
			}
		}
	}
}
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	My_BubbleSort(arr, sz, sizeof(arr[0]), cmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


#include<assert.h>
#include<stdio.h>
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
	printf("%d", len);
	return 0;
}


#include<assert.h>
#include<stdio.h>
int my_strlen(const char* str)
{
	assert(str);
	int count = 0;
	while (*str!='\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "hello world";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<assert.h>
#include<stdio.h>
int my_strlen(char* str)
{
	assert(str);
	char* dest = str;
	while (*str!='\0')
	{
		str++;
	}
	return str - dest;
}
int main()
{
	char arr[] = "hello world";
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
	char arr[] = "hello world";
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
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "hello world";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
#include<assert.h>
int my_strlen(char* str)
{
	assert(str);
	char* dest = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - dest;
}
int main()
{
	char arr[] = "hello world";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


//模拟实现strcpy
#include<stdio.h>
#include<assert.h>
char my_strcpy(char* dest, const char* source)
{
	assert(dest);
	assert(source);
	char* ret = dest;
	while (*dest++ = *source++)
	{
		;
	}
	return *ret;
}
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello world";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
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
	char arr1[20] = "hello ";
	char arr2[] = "world";
	my_strcat(arr1, arr2);
	printf("%s", arr1);
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
	Print(s);
	return 0;
}
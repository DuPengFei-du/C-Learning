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
	for (int i = 0; i < 10; i++)
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


//计算字符串的长度
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


//计算字符串的长度
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
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


//计算字符串的长度
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
	char* arr1[5];   //sizeof(arr1)   大小为20
	int* arr2[5];    //sizeof(arr2)   大小为20
}


#include<stdio.h>
int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int* ptr = (int*)(&a + 1);  //加1跳过了整个数组，强制转换成了int* 
	printf("%d,%d", *(a + 1), *(ptr - 1));  //-1向前挪动一个，指向5的地址，解引用之后
	//得到的就是5的值
	return 0;
	//结果为2 5
}


struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
//假设p 的值为0x100000。 如下表表达式的值分别为多少？
//结构体大小为20个字节
int main()
{
	p = (struct Test*)0x100000;
	//这道题主要考察的点在于指针+1的权限到底有多大
	//指针的权限是和指针的类型密切相关的
	printf("%p\n", p + 0x1);
	//p作为一个指针变量，p的大小是20个字节，那么对于此处来说，p+1，它所能够访问的权限就是20个字节
	//所以p+1，加的就是20个字节，0x是16进制，20在16进制下就是14，又因为p为0x100000,所以它+14的结果是
	//0x100014
	printf("%p\n", (unsigned long)p + 0x1);
	//此处p被强制类型转换成了整形，所以p+1在此处就是p+1进行整数运算，所以结果为
	//0x100001
	printf("%p\n", (unsigned int*)p + 0x1);
	//此处p被强制类型转换成了指针类型，整形指针+1所拥有的权限是4个字节，那么，p+1的结果是
	//0x100014
	return 0;
}


#include<stdio.h>
int main()
{
	int a[4] = { 1, 2, 3, 4 };
	int* ptr1 = (int*)(&a + 1);
	int* ptr2 = (int*)((int)a + 1);
	printf("%x,%x", ptr1[-1], *ptr2);
	return 0;
}


#include <stdio.h>
int main()
{
	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
	int* p;
	p = a[0];
	printf("%d", p[0]);
	return 0;
	//打印的结果是1，考察的点是逗号表达式，利用逗号表达式对数组进行初始化
}


#include<stdio.h>
int main()
{
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	return 0;
}


#include<stdio.h>
int main()
{
	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* ptr1 = (int*)(&aa + 1);
	//&数组名，代表的是整个数组，整个数组加1，位置来到了10的后面
	//然后再-1，位置来到了10，然后再解引用就得到10位置处的值
	//所以结果就为10
	int* ptr2 = (int*)(*(aa + 1));
	//首元素的地址加1，位置来到了第二行，然后进行解引用，相当于拿到了第二行
	//也就是拿到了6的地址，然后-1，到了5的地址处，然后解引用
	//得到了5的值，所以结果为5
	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
	return 0;
	//结果为 10 和 5 
}


#include<stdio.h>
int main()
{
	char* a[] = { "work","at","alibaba" };
	char** pa = a;
	pa++;
	printf("%s\n", *pa);
	return 0;
	//结果为at
	//a为指针数组
	//pa+1,跳过一个char*的大小
}


#include<stdio.h>
int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
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
	struct Stu s = {"张三",20 };
	Print(&s);
	return 0;
}


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
#include<assert.h>
int my_strlen(const char* str)
{
	assert(str);
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen(str+1);
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
		str++;
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
	char arr2[] = "abcdef";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
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
char* my_strcat(char* str1, const char* str2)
{
	assert(str1);
	assert(str2);
	char* ret = str1;
	while (*str1 != '\0')
	{
		str1++;
	}
	while (*str1++ = *str2++)
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
#define _CRT_SECURE_NO_WARNINGS 1


//自定义类型：结构体，枚举，联合
#include<stdio.h>
struct Stu
{
	//成员变量
	char name[20];
	int age;
	float score;
};
int main()
{
	return 0;
}


#include<stdio.h>
struct Stu
{
	//成员变量
	char name[20];
	int age;
	float score;
};
int main()
{
	struct Stu s;
	//s 和s1，s2一样，都是变量，只不过是s1，s2是全局的
	//但是像s1，s2那样的声明对象一般我们是不用的
	return 0;
}


//匿名结构体
#include<stdio.h>
struct 
{
	//成员变量
	char name[20];
	int age;
	float score;
}s;
int main()
{
	return 0;
}


#include<stdio.h>
struct
{
	//成员变量
	char name[20];
	int age;
	float score;
}s;
struct
{
	//成员变量
	char name[20];
	int age;
	float score;
}*ps;
int main()
{
	ps = &s;
	return 0;
}


#include<stdio.h>
struct Node
{
	int value;
	struct Node next;
};
int main()
{
	return 0;
}


#include<stdio.h>
struct Node
{
	int value;
	struct Node *next;
};
int main()
{
	return 0;
}


//结构体变量的定义和初始化
#include<stdio.h>
struct Point
{
	int x;
	int y;
};
struct Point p2;
int main()
{
	struct Point p1;
	return 0;
}


#include<stdio.h>
struct Point
{
	int x;
	int y;
};
struct Point p2 = { 2,3 };
int main()
{
	struct Point p1 = { 3,4 };
	return 0;
}



//结构体内存对齐
#include<stdio.h>
struct S
{
	char c1;
	int a;
	char c2;
};
struct S2
{
	int a;
	char c1;
	char c2;
};
int main()
{
	printf("%d\n", sizeof(struct S));
	printf("%d\n", sizeof(struct S2));
	return 0;
}


#include<stdio.h>
#include<stddef.h>
struct S2
{
	int a;
	char c1;
	char c2;
};
int main()
{
	printf("%d\n", offsetof(struct S2, c1));
	printf("%d\n", offsetof(struct S2, a));
	printf("%d\n", offsetof(struct S2, c2));
	return 0;
}


#include<stdio.h>
struct S3
{
	double d;
	char c;
	int i;
};
struct S4
{
	char c1;
	struct S3 s3;
	double d;
};
int main()
{
	printf("%d\n", sizeof(struct S4));
	return 0;
}


#include<stdio.h>
#pragma pack(2)  //设置默认对齐数为2
struct S
{
	int a;   //4 
	char c1;   //1 
	char c2;   //1 
	//一共6个字节大小
}; 
int main()
{
	printf("%d\n", sizeof(struct S));
	return 0;
}


#include<stdio.h>
#pragma pack(2)  //设置默认对齐数为2
struct S
{
	char c1;   
	int a;   
	char c2;   
	//一共8个字节大小
}; 
int main()
{
	printf("%d\n", sizeof(struct S));
	return 0;
}


//模拟实现offsetof
#include<stdio.h>
struct S
{
	char c1;
	int a;
	char c2;
};
#define my_offsetof(s_type,member) (int)&(((s_type*)0)->member)
//把0地址强制类型转化成一个结构体指针，然后去访问成员，然后取地址，之后
//解引用就可以了
int main()
{
	printf("%d\n", my_offsetof(struct S, c1));
	printf("%d\n", my_offsetof(struct S, a));
	printf("%d\n", my_offsetof(struct S, c2));
	return 0;
}


#include<stdio.h>
struct A 
{
	int _a: 2;
	int _b: 5;
	int _c: 10;
	int _d: 30;
};
int main()
{
	printf("%d\n", sizeof(struct A));
	return 0;
}


struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};
//需要3个字节的空间
int main()
{
	struct S s = { 0 };
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;
	return 0;
}
//先使用低处的比特位
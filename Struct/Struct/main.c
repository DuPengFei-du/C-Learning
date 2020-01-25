#define _CRT_SECURE_NO_WARNINGS 1


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
	printf("%s %d %d %d %d %d\n", t.arr, t.age, t.p.x, t.p.y,t.arr2[0],t.arr2[1]);
	return 0;
}


#include<stdio.h>
struct Stu
{
	char name[20];
	int age;
};
int main()
{
	struct Stu s = { "zhangsan",20 };
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
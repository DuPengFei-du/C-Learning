#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
struct Stu
{
	//��Ա����
	//��Ա�б�
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
}Stu;   //Stu==struct Stu  �˴���StuΪ�����������Ǳ�����
int main()
{
	return 0;
}


#include<stdio.h>
struct Point
{
	int x;
	int y;
	//ע��ṹ���в��ܰ����Լ���һ�ṹ�壬���ǿ��԰�����Ľṹ��
	//�����Լ�����ṹ�壬����ṹ���С��ʱ��Ͳ�������
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
}p1;  //�������͵�ͬʱ����p1
int main()
{
	struct Point p2;     //����ṹ�����p2
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
void Print(struct Stu* s)  //�ṹ��ָ��
{
	printf("%s %d", s->name, s->age);
}
int main()
{
	struct Stu s = {"����",20 };
	Print(&s);
	return 0;
}


#include<stdio.h>
struct Stu
{
	char name[20];
	int age;
};
void Print(struct Stu s)  //�ṹ��ָ��
{
	printf("%s %d", s.name, s.age);
}
int main()
{
	struct Stu s = { "����",20 };
	Print(s);
	return 0;
}
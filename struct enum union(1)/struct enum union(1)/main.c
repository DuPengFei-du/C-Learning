#define _CRT_SECURE_NO_WARNINGS 1


//�Զ������ͣ��ṹ�壬ö�٣�����
#include<stdio.h>
struct Stu
{
	//��Ա����
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
	//��Ա����
	char name[20];
	int age;
	float score;
};
int main()
{
	struct Stu s;
	//s ��s1��s2һ�������Ǳ�����ֻ������s1��s2��ȫ�ֵ�
	//������s1��s2��������������һ�������ǲ��õ�
	return 0;
}


//�����ṹ��
#include<stdio.h>
struct 
{
	//��Ա����
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
	//��Ա����
	char name[20];
	int age;
	float score;
}s;
struct
{
	//��Ա����
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


//�ṹ������Ķ���ͳ�ʼ��
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



//�ṹ���ڴ����
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
#pragma pack(2)  //����Ĭ�϶�����Ϊ2
struct S
{
	int a;   //4 
	char c1;   //1 
	char c2;   //1 
	//һ��6���ֽڴ�С
}; 
int main()
{
	printf("%d\n", sizeof(struct S));
	return 0;
}


#include<stdio.h>
#pragma pack(2)  //����Ĭ�϶�����Ϊ2
struct S
{
	char c1;   
	int a;   
	char c2;   
	//һ��8���ֽڴ�С
}; 
int main()
{
	printf("%d\n", sizeof(struct S));
	return 0;
}


//ģ��ʵ��offsetof
#include<stdio.h>
struct S
{
	char c1;
	int a;
	char c2;
};
#define my_offsetof(s_type,member) (int)&(((s_type*)0)->member)
//��0��ַǿ������ת����һ���ṹ��ָ�룬Ȼ��ȥ���ʳ�Ա��Ȼ��ȡ��ַ��֮��
//�����þͿ�����
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
//��Ҫ3���ֽڵĿռ�
int main()
{
	struct S s = { 0 };
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;
	return 0;
}
//��ʹ�õʹ��ı���λ
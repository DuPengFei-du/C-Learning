#define _CRT_SECURE_NO_WARNINGS 1


//枚举
#include<stdio.h>
enum Sex
{
	male,
	female
	//为sex所有可能的取值
};
int main()
{
	enum Sex sex = male;
	printf("%d\n", male);
	printf("%d\n", female);
	return 0;
}


#include<stdio.h>
enum Sex
{
	male = 5,
	female
	//为sex所有可能的取值
};
int main()
{
	enum Sex sex = male;
	printf("%d\n", male);
	printf("%d\n", female);
	return 0;
}


#include<stdio.h>
enum color
{
	RED = 1,
    GREEN=2,
	BLUE=4
};
int main()
{
	return 0;
}


enum Option
{
	ADD，
	SUB,
	MUL,
	DIV
};
int main()
{
	return 0;
}


//联合体
#include<stdio.h>
union Un
{
	char c;
	int i;
	double d;
};
int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	return 0;
}


#include<stdio.h>
union Un
{
	char c;
	int i;
	double d;
};
int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	printf("%p\n", &u);
	printf("%p\n", &(u.i));
	printf("%p\n", &(u.c));
	printf("%p\n", &(u.d));
	return 0;
}


#include<stdio.h>
union Un
{
	char ch[5];
	int i;
};
int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	return 0;
}


//判断大小端
int check_sys()
{
	int a = 1;
	//01 00 00 00
	//00 00 00 01
	/*if(*(char*)&a == 1)
		return 1;
	else
		return 0;*/
	//返回1表示小端
	//返回0表示大端
	return (*(char*)&a);
}
int main()
{
	//int a = 0x11223344;
	//[11][22][33][44]-大端字节序存储
	//低     高
	//[44][33][22][11]-小端字节序存储
	if(check_sys()==1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}


int check_sys()
{
	union
	{
		int i;
		char c;
	}u;
	u.i = 1;
	return u.c;
}
int main()
{
	//int a = 0x11223344;
	//[11][22][33][44]-大端字节序存储
	//低     高
	//[44][33][22][11]-小端字节序存储
	if (check_sys() == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}
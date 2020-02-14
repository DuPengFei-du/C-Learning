#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
char* GetMemory(char *p)
{
	p = (char *)malloc(100);
	return p;
}
void Test(void)
{
	char *str = NULL;
	str = GetMemory(str);
	//值传递，str并没有发生任何改变
	strcpy(str, "hello world");
	printf(str);
	free(str);
	str = NULL;
}

int main()
{
	Test();
	return 0;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* GetMemory(char** p)
{
	*p = (char*)malloc(100);
	return *p;
}
void Test(void)
{
	char* str = NULL;
	str = GetMemory(&str);
	strcpy(str, "hello world");
	printf(str);
	free(str);
	str = NULL;
}
int main()
{
	Test();
	return 0;
}


#include<stdio.h>
char *GetMemory(void)
{
	char p[] = "hello world";
	return p;
}
void Test(void)
{
	char *str = NULL;
	str = GetMemory();
	printf(str);
}
int main()
{
	Test();
	return 0;
}


#include<stdio.h>
void GetMemory(char **p, int num)
{
	*p = (char *)malloc(num);
}
void Test(void)
{
	char *str = NULL;
	GetMemory(&str, 100);
	strcpy(str, "hello");
	printf(str);
}
int main()
{
	Test();
	return 0;
}


void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}
int main()
{
	Test();
	return 0;
}


//柔性数组
#include<stdio.h>
struct s
{
	int age;
	char arr[];
};
int main()
{
	return 0;
}


#include<stdio.h>
struct S
{
	int age;
	char arr[];
};
int main()
{
	printf("%d\n", sizeof(struct S));
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct S
{
	int age;
	char arr[];
};
int main()
{
	struct S* p = (struct S*)malloc(sizeof(struct S) + 20 * sizeof(char));
	if (p != NULL)
	{
		p->age = 10;
		strcpy(p->arr, "hello world");
		printf("%d\n", p->age);
		printf("%s\n", p->arr);
		free(p);
	}
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct S
{
	int age;
	char* arr;
};
int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	if (ps == NULL)
		return 0;
	ps->age= 100;
	ps->arr = (char*)malloc(20 * sizeof(char));
	strcpy(ps->arr, "hello world");
	printf("%d\n", ps->age);
	printf("%s\n", ps->arr);
	free(ps->arr);
	free(ps);
	return 0;
}
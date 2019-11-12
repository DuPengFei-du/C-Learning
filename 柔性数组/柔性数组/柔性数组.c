#define  _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
struct Stu
{
	int age;
	char arr[];//柔性数组成员，是未知大小的数组
};
int main()
{
	return 0;
}


//柔性数组
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Stu
{
	int num;
	char arr[];
};
int main()
{
	struct Stu* p = (struct Stu*)malloc(sizeof(struct Stu) + (20 * (sizeof(char))));
	if (p != NULL)
	{
		p->num = 100;
		strcpy(p->arr, "hello world");
		printf("%d\n", p->num);
		printf("%s\n", p->arr);
		free(p);
	}
}



#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct s
{
	int num;
	char* arr;
};
int main()
{
	struct s* ps = (struct s*)malloc(sizeof(struct s));
    if(ps != NULL)
	{
		ps->num = 10;
		ps->arr = (char *)malloc(20 * (sizeof(char)));
		strcpy(ps->arr, "hello world");
		printf("%d\n", ps->num);
		printf("%s\n", ps->arr);
		free(ps->arr);
		free(ps);
	}
	return 0;
}
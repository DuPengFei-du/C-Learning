#include<stdio.h>
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;
	printf("%d %d %d %d", a, b, c, d);
	return 0;
}

#include<stdio.h>
int main()
{
	int i = 0, a = 1, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;
	printf("%d %d %d %d", a, b, c, d);
	return 0;
}

#include<stdio.h>
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ || ++b || d++;
	printf("%d %d %d %d", a, b, c, d);
	return 0;
}


//用条件操作符，找出两个数中的较大数
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int max = 0;
	scanf("%d %d", &a, &b);
	max = a > b ? a : b;
	printf("%d", max);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 1;
	int b = 2;
	int c = (a > b, a = b + 10, b = a + 1);
	printf("%d", c);
	return 0;
}

#include<stdio.h>
struct Stu
{
	char name[10];
	int age;
	char sex[5];
	double score;
};
void set_age1(struct Stu stu)
{
	stu.age = 18;
}
void set_age2(struct Stu* pStu)
{
	pStu->age = 18;
}
int main()
{
	struct Stu stu;
	struct Stu* pStu = &stu;
	stu.age = 20;
	set_age1(stu);
	pStu->age = 20;
	set_age2(pStu);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int c = a + b * 10;
	printf("%d", c);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int c = a + b + 10;
	printf("%d", c);
	return 0;
}

#include<stdio.h>
int main()
{
	char a = 3;
	char b = 127;
	char c = a + b;
	printf("%c", c);
	return 0;
}
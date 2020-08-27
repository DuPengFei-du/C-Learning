#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
struct A
{
	int _a : 2;
	int _b : 5;
	int _c : 10;
	int _d : 30;
};
int main()
{
	printf("%d\n", sizeof(struct A));
	return 0;
}
//结果是8
//如果是int，首先先开辟4个字节的大小，也就是32个比特位
//用完了之后，在重新继续开辟就可以了
//一共开辟了两次，所以大小为8个字节


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


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	(void)scanf("%d %d", &a, &b);
	c = a + b;
	printf("%d", c);
	return 0;
}


#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	(void)scanf("%d %d", &a, &b);
	c = Add(a, b);
	printf("%d", c);
	return 0;
}


#include<stdio.h>
int main()
{
	printf("%c\n", '\'');
	printf("%s\n", "\"");
	return 0;
}


#include<stdio.h>
int main()
{
	printf("%d\n", sizeof(int));  //4
	printf("%d\n", sizeof(char)); //1
	printf("%d\n", sizeof(short)); //2
	printf("%d\n", sizeof(long));  //4/8
	printf("%d\n", sizeof(long long));  //8
	printf("%d\n", sizeof(float));  //4
	printf("%d\n", sizeof(double));  //8
	return 0;
}
//类型的大小单位都是字节
//计算机中的单位 
//bit(位) byte(字节) kbyte(kb) mb gb tb pb  
//前两个单位之间的换算单位是8，后面的单位之间的是1024


#include<stdio.h>
int main()
{
	{
		int num = 10;
	}
	printf("%d", num);
	return 0;
	//此时，这个程序会出错，num作用域中不包括有printf语句。
}


#include<stdio.h>
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c',0 };
	printf("%s\n", "abc");
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
	//三种打印的结果都是abc
	//如果arr2后面不加0的话，那么打印结果就会是再abc的后面还会出现烫烫烫的字符
	//因为如果不加0的话，字符串就会并没有结束，只有加了0或者\0才会停止打印
	//烫烫烫背后的真实东西其实是0xcccccc
	//由此可以看来\0对字符串来说是非常重要的
	//字符串是\0需要的结束标志的符号；
}


#include<stdio.h>
#include<string.h>
int main()
{
	printf("%d\n", 10);
	printf("%d\n", strlen("abc"));
	printf("%d\n", strlen("c:\test\47\test.c");
	return 0;
	//其中，第三个printf语句的输出结果为13，主要的陷阱就在于\47
	//这其中的本质还是在考察对于转义字符的理解
	//\ddd也为转义字符，其中ddd表示1-3个八进制的数字，这三个东西统一的看成一个字符，所以说长度为1.
	//\xddd  ddd表示3个16进制数字
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	while (i < 10)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	return 0;
}


#include<stdio.h>
int main()
{
	int a1 = 5 / 2;
	float a2 = 5 / 2;
	float a3 = 5.0 / 2;
	printf("%d\n", a1);
	printf("%f\n", a2);
	printf("%f\n", a3);
	return 0;
}
//针对于除法操作，与他存储的是什么类型是没有关系的
//主要是看两个除法的操作数到底是什么类型的，如果有一个是浮点型的，得到的结果就会是浮点型的结果


#include<stdio.h>
int main()
{
	//int a = 5/2;
	//int a = 5/2.0;
	//printf("%d\n", a);
	//int a = 5%2;
	//printf("%d\n", a);
	int a = 15;
	int b = a << 1;
	//a = a<<1;
	printf("%d\n", a);
	printf("%d\n", b);
	//<< 移位操作符-移动的是二进制位
	//原码-反码-补码
	//00000000000000000000000000001111-原码-反码-补码相同
	//00000000000000000000000000011110
	//
	//-1
	//10000000000000000000000000000001-原码
	//11111111111111111111111111111110-反码
	//11111111111111111111111111111111-补码
	system("pause");
	return 0;
}
//详细还是看笔记本上相关内容


#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	int c = a ^ b;
	printf("%d", c);
	return 0;
	//相同为0，相异为1
	//结果为6
}


#include<stdio.h>
int main()
{
	int a = 10;
	int b = ++a;
	printf("%d\n", a);   //11
	printf("%d\n", b);   //11
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int max = 0;
	max = (a > b) ? a : b;
	printf("%d", max);
	return 0;
}


#include<stdio.h>
#define ADD(X,Y) X+Y
int main()
{
	printf("%d\n", 10 * ADD(2, 3));
	return 0;
}
//宏的替换是直接替换的，不经运算，直接替换。


#include<stdio.h>
int main()
{
	char c = 'w';
	int a = 10;
	int* pa = &a;
	char* pc = &c;
	printf("%d\n", sizeof(pa));  //4
	printf("%d\n", sizeof(pc));  //4
	return 0;
}


#include<stdio.h>
struct Stu
{
	//成员变量
	char name[20];
	int age;
	float score;
}s1, s2;
//s1,s2为创建的全局的结构体变量
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
//这样写代码可行吗？？


#include<stdio.h>
struct Node
{
	int value;
	struct Node* next;
};
int main()
{
	return 0;
}


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
//结果为12 和 8 


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
struct S3
{
	double d;
	char c;
	int i;
};
//16
struct S4
{
	char c1;
	struct S3 s3;
	double d;
};
//32
//从8开始放结构体3，从倍数开始放
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
//大小为6


#include<stdio.h>
struct A
{
	int _a : 2;
	int _b : 5;
	int _c : 10;
	int _d : 30;
};
int main()
{
	printf("%d\n", sizeof(struct A));
	return 0;
}
//结果是8
//如果是int，首先先开辟4个字节的大小，也就是32个比特位
//用完了之后，在重新继续开辟就可以了
//一共开辟了两次，所以大小为8个字节


#include<stdio.h>
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	if (n % 2 == 1)
	{
		printf("奇数\n");
	}
	else
	{
		printf("不是奇数\n");
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int count = 0;
	for (int i = 100; i <= 200; i++)
	{
		if (i % 2 == 1)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("%d", count);
	return 0;
}


#include<stdio.h>
int main()
{
	int day = 0;
	(void)scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday\n");
		break;
	case 6:
	case 7:
		printf("weekend\n");
		break;
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int count = 0;
	int j = 0;
	for (int i = 100; i <= 200; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (j == i)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("%d", count);
	return 0;
}


#include<stdio.h>
#include<math.h>
int main()
{
	int count = 0;
	int j = 0;
	for (int i = 100; i <= 200; i++)
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
				break;
		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("%d", count);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 1;
	(void)scanf("%d %d", &a, &b);
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	printf("%d", b);
	return 0;
}


#include<stdio.h>
int main()
{
	int age = 0;
	(void)scanf("%d", &age);
	if (age < 18)
		printf("未成年\n");
	else
		printf("成年\n");
	return 0;
}


#include<stdio.h>
int main()
{
	int age = 10;
	if (age == 5)
		printf("age==5\n");
	return 0;
}
//屏幕上什么都不会打印，因为age！=5；


#include<stdio.h>
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;
	case 2:n++;
	case 3:
		switch (n)
		{//switch允许嵌套使用
		case 1:	n++;
		case 2:m++; n++;	break;
		}
	case 4:m++; break;
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n);
	system("pause");
	return 0;
}
//结果是m=5，n=3；


#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			break;
		printf("%d ", i);
		i++;
	}
	return 0;
}
//打印结果为1，2，3，4
//break永久的跳出循环，停止后期的所有循环，永久的终止循环


//EOF为end of file
#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;
}
//用ctrl+z来停下来。


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	for (a = 1; a <= 9; a++)
	{
		for (b = 1; b <= a; b++)
		{
			printf("%d*%d=%2d ", a, b, a * b);
		}
		printf("\n");
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int x, y;
	for (x = 0, y = 0; x < 2 && y < 5; ++x, ++y)
	{
		printf("hehe\n");
	}
	return 0;
}
//打印结果为2个hehe
//&&操作符只要一边为假，另一边就不用看了。


#include<stdio.h>
int main()
{
	int i = 1;
	do
	{
		printf("%d ", i);
		i++;
	} while (i <= 10);
	return 0;
}
//打印结果为1-10


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
	struct Node* next;
};
int main()
{
	return 0;
}


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
//结果为12 和 8 


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
	int _a : 2;
	int _b : 5;
	int _c : 10;
	int _d : 30;
};
int main()
{
	printf("%d\n", sizeof(struct A));
	return 0;
}
//结果是8
//如果是int，首先先开辟4个字节的大小，也就是32个比特位
//用完了之后，在重新继续开辟就可以了
//一共开辟了两次，所以大小为8个字节


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
//打印的结果为5，6，一次向下加1 
//不是赋值，是给的初始值


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
//大小为8


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
//地址一样，说明共同同一块空间


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
	return (*(char*)& a);
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
#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(int));  //4
//	printf("%d\n", sizeof(char)); //1
//	printf("%d\n", sizeof(short)); //2
//	printf("%d\n", sizeof(long));  //4/8
//	printf("%d\n", sizeof(long long));  //8
//	printf("%d\n", sizeof(float));  //4
//	printf("%d\n", sizeof(double));  //8
//	return 0;
//}
////类型的大小单位都是字节
////计算机中的单位 
////bit(位) byte(字节) kbyte(kb) mb gb tb pb  
////前两个单位之间的换算单位是8，后面的单位之间的是1024


//#include<stdio.h>
//int main()
//{
//	int num = 10;
//	printf("%d", num);
//	return 0;
//	//在这个程序中num的值是可以正常打印出来的
//	//因为num是局部变量，正好printf语句也处在num的作用域中，所以是可以正常打印出来的。
//}


//#include<stdio.h>
//int main()
//{
//	{
//		int num = 10;
//	}
//	printf("%d", num);
//	return 0;
//	//此时，这个程序会出错，num作用域中不包括有printf语句。
//}


//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};


//#include<stdio.h>
//int main()
//{
//	printf("c:\\test\\test.c\n");
//	return 0;
//}
////输出的结果为
////c:\test\test.c


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	printf("%d\n", 10);
//	printf("%d\n", strlen("abc"));
//	printf("%d\n", strlen("c:\test\47\test.c");
//	return 0;
//	//其中，第三个printf语句的输出结果为13，主要的陷阱就在于\47
//	//这其中的本质还是在考察对于转义字符的理解
//	//\ddd也为转义字符，其中ddd表示1-3个八进制的数字，这三个东西统一的看成一个字符，所以说长度为1.
//	//\xddd  ddd表示3个16进制数字
//}


//#include<stdio.h>
//int main()
//{
//	int a1 = 5 / 2;
//	float a2 = 5 / 2;
//	float a3 = 5.0 / 2;
//	printf("%d\n", a1);
//	printf("%f\n", a2);
//	printf("%f\n", a3);
//	return 0;
//}
////针对于除法操作，与他存储的是什么类型是没有关系的
////主要是看两个除法的操作数到底是什么类型的，如果有一个是浮点型的，得到的结果就会是浮点型的结果


//#include<stdio.h>
//int main()
//{
//	//int a = 5/2;
//	//int a = 5/2.0;
//	//printf("%d\n", a);
//	//int a = 5%2;
//	//printf("%d\n", a);
//	int a = 15;
//	int b = a << 1;
//	//a = a<<1;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	//<< 移位操作符-移动的是二进制位
//	//原码-反码-补码
//	//00000000000000000000000000001111-原码-反码-补码相同
//	//00000000000000000000000000011110
//	//
//	//-1
//	//10000000000000000000000000000001-原码
//	//11111111111111111111111111111110-反码
//	//11111111111111111111111111111111-补码
//	system("pause");
//	return 0;
//}
////详细还是看笔记本上相关内容


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b) ? a : b;
//	printf("%d", max);
//	return 0;
//}


//#include<stdio.h>
//void test()
//{
//	static int n = 1;   //n为局部变量
//	n++;
//	printf("%d ", n);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}
////打印的结果是2-11，用static修饰变量，创建了就不销毁了。


//#include<stdio.h>
////自定义类型
//struct Stu
//{
//	char name[20];   //一个汉字是两个字符
//	int age;
//	float score;
//};
//int main()
//{
//	struct Stu s = { "张三",20,60.0f };
//	struct Stu* ps = &s;  //结构体指针
//	printf("%s %d %f", ps->name, ps->age, ps->score);
//	return 0;
//}


#include<stdio.h>
int main()
{
	int count = 0;
	int j = 0;
	for (int i = 100; i <= 200; ++i)
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
	for (int i = 100; i <= 200; ++i)
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
void Print(int n)
{
	if (n > 9)
		Print(n / 10);
	printf("%d ", n % 10);
}
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	Print(n);
	return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
	printf("%d\n", 10);
	printf("%d\n", strlen("abc"));
	printf("%d\n", strlen("c:\test\47\test.c"));
	return 0;
	//其中，第三个printf语句的输出结果为13，主要的陷阱就在于\47
	//这其中的本质还是在考察对于转义字符的理解
	//\ddd也为转义字符，其中ddd表示1-3个八进制的数字，这三个东西统一的看成一个字符，所以说长度为1.
	//\xddd  ddd表示3个16进制数字
}


//如何在频幕上打印一个单引号
#include<stdio.h>
int main()
{
	printf("%c\n", '\'');
	printf("%s\n", "\"");
	return 0;
}


//写一个两个数加法的函数
#include<stdio.h>
int Add(int x, int y)
{
	int z = x + y;
	return z;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	(void)scanf("%d %d", &a, &b);
	c = Add(a, b);
	printf("%d\n", c);
	return 0;
}


#include<stdio.h>
//自定义类型
struct Stu
{
	char name[20];   //一个汉字是两个字符
	int age;
	float score;
};
int main()
{
	struct Stu s = { "张三",20,60.0f };
	struct Stu* ps = &s;  //结构体指针
	printf("%s %d %f", (*ps).name, (*ps).age, (*ps).score);
	return 0;
}


#include<stdio.h>
int main()
{
	int day = 0;
	scanf("%d", &day);
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
	default:
		printf("选择错误\n");
		break;
	}
}


#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		i++;
		if (i == 5)
			continue;
		printf("%d ", i);
	}
	return 0;
}
//打印结果为2，3，4，5，7，8，9，10，11
//continue作用：continue用来终止本次的循环，当次continue之后的语句不再执行。


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


//输出乘法口诀表
#include<stdio.h>
int main()
{
	for (int a = 1; a <= 9; ++a)
	{
		for (int b = 1; b <= a; b++)
		{
			printf("%d*%d=%2d ", a, b, a * b);
		}
		printf("\n");
	}
	return 0;
}


//求十个整数中的最大值
#include<stdio.h>
int main()
{
	int arr[10] = { 12,34,675,32,75,24,86,23,88,16 };
	int max = arr[0];
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 1; i < sz; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d", max);
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	for (; i < 10; i++)
	{
		for (; j < 10; j++)
		{
			printf("hehe\n");
		}
	}
	return 0;
}
//这段代码得打印结果只有10个hehe
//并且10个hehe是从i=0-- i=9一口气打印出来的
//当i=0时，j从一直到9，打印了10个hehe之后，j的条件就不再满足了
//所以一共只会打印10个hehe


#include<stdio.h>
int my_strlen(const char* str)
{
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen(str + 1);
}
int main()
{
	char arr[] = "abc";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
int my_strlen(const char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return count;
}
int main()
{
	char arr[] = "abc";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
int my_strlen( char* str)
{
	char* ret = str;
	while (*str != '\0')
	{
		str ++ ;
	}
	return str - ret;
}
int main()
{
	char arr[] = "abc";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}
//判断是否为闰年
#include<stdio.h>
int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		{
			count++;
			printf("%d ", year);
		}
	}
	printf("count is %d", count);
	return 0;
}

//封装成函数
#include<stdio.h>
int  Is_Leapyear(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		return 1;
	}
	else
		return 0;
}
int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (Is_Leapyear(year) == 1)
		{
			count++;
			printf("%d ", year);
		}
	}
	printf("count is %d", count);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 3;
	int b = 4;
	int c = 5;
	printf("%d", a || b + c && b - c);
	return 0;
}


//有三个整数a,b,c,由键盘输入，输出其中最大数的值
#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int max = c;
	if (a > c)
	{
		max = a;
	}
	if (b > c)
	{
		max = b;
	}
	printf("%d", max);
	return 0;
}


/*
从键盘输入一个小于1000的正数，要求输出他平方根
如果平方根不是整数，那么就输出其正数部分
要求在输入数据后先进行检查是否为小于1000的正数，若不是，则要求重新输入
*/
#include<stdio.h>
#include<math.h>
#define A 1000
int main()
{
	int i = 0;
	int k = 0;//平方根的值
	scanf("%d", &i);
	if (i > A)
	{
		printf("输入错误，请重新输入\n");
		scanf("%d", &i);
	}
	k = sqrt(i);
	printf("%d的平方分的整数部分为：%d", i, k);
	return 0;
}


//给一个不多于五位的正整数，要求
//求出他是几位数
#include<stdio.h>
int main()
{
	int num = 0;
	int place = 0;
	printf("请输入一个数字（0~99999)\n");
	scanf("%d", &num);
	if (num > 9999)
	{
		place = 5;
	}
	else if (num > 999)
	{
		place = 4;
	}
	else if (num > 99)
	{
		place = 3;
	}
	else if (num > 9)
	{
		place = 2;
	}
	else
		place = 1;
	printf("%d", place);
	return 0;
}

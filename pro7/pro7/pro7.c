//判断是否为闰年
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("count =%d", count);
	return 0;
}


/*
逻辑型变量：这是C99所增加的一种数据类型，可以将关系运算和逻辑运算的结果存到一个
逻辑型变量当中，以便于分析和运算
定义逻辑变量用类型符_Bool
*/
#include<stdio.h>
#include<stdbool.h>
int main()
{
	int score = 0;
	scanf("%d", &score);
	bool a, b;//a和b被定义成逻辑型变量
	a = score >= 60;
	b = score <= 69;
	if (a == true && b == true)
	{
		printf("the grade is C\n");
	}
	return 0;
}


//输出两个数中较大的一个数
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int max = 0;
	if (a > b)
	{
		max = a;
	}
	if (a < b)
	{
		max = b;
	}
	printf("%d", max);
	return 0;
}


//输入一个字符判别他是不是大写字母，如果是，
//将它转换成小写字母，如果不是，那么就不转换。然后输出最后得到的字符
#include<stdio.h>
int main()
{
	char a;
	scanf("%c", &a);
	a = (a >= 'A' && a <= 'Z') ? (a + 32) : a;
	printf("%c", a);
	return 0;
}


//编写一个函数
#include<stdio.h>
int main()
{
	int x = 0;
	int y = 0;
	scanf("%d", &x);
	if (x < 0)
	{
		y = -1;
	}
	if (x == 0)
	{
		y = 0;
	}
	if (x > 0)
	{
		y = 1;
	}
	printf("%d", y);
	return 0;
}
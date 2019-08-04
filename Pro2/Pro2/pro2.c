#include<stdio.h>
int main()
{
	int a;
	int* p = &a;
	int a;
	int* p;
	p = &a;
}


//输出变量的地址
#include<stdio.h>
int main()
{
	int a = 10;
	int* p;
	p = &a;
	printf("%p\n", p);//输出的就是a的地址
}


//利用指针将两个数字交换
#include<stdio.h>
void Swap(int* x, int* y)
{
	int t = *x;
	*x = *y;
	*y = t;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	Swap(&a, &b);
	printf("%d %d", a, b);
	return 0;
}


//&*和*&的区别
int a;
p = &a;
/*
&和*的运算符优先级相同，按自右向左的方向结合，因此*p先进行*运算，p相当于变量a
在进行&运算，&*p就相当于取变量a的地址；&a先进行&运算，&a就是取变量a的地址
然后执行*运算，*&a就相当于取变量a所在的地址的值，实际就是变量a
*/

#include<stdio.h>
int main()
{
	int i;
	int* p;
	printf("please input the number:\n");
	scanf("%d", &i);
	p = &i;//将变量i的地址赋给指针变量
	printf("the result1 is %p:\n", p);//输出p的地址
	p++;
	printf("the result2 is %p:\n", p);
	return 0;
}


//将输入的数以二维数组的形式显示
#include<stdio.h>
int main()
{
	int a[4][2];
	int i = 0;
	int j = 0;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("二维数组的形式为\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}


//输出第三行的元素
#include<stdio.h>
int main()
{
	int a[3][5];
	int i = 0;
	int j = 0;
	int(*p)[5];
	p = &a[0];
	printf("please input:\n");
	for (i = 0; i < 3; i++)
		for (j = 0; j < 5; j++)
			scanf("%d", &a[i][j]);
	p = &a[2];
	printf("the third line is:\n");
	for (j = 0; j < 5; j++)
		printf("%5d", *((*p) + j));
	printf("\n");
	return 0;
}


#include<stdio.h>
int main()
{
	printf("This is a C program\n");
	return 0;
}


//求两个数的和
#include<stdio.h>
int main()
{
	int a = 123;
	int b = 456;
	int c = a + b;
	printf("%d", c);
	return 0;
}


//求两个数中的较大者
#include<stdio.h>
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d", &a, &b);
	c = Max(a, b);
	printf("%d", c);
	return 0;
}


#include<stdio.h>
int main()
{
	printf("********************\n");
	printf("Very Good\n");
	printf("********************\n");
	return 0;
}


//输出三个数中的最大值
#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int max = c;
	if (a > c)
		max = a;
	else if (b > c)
		max = b;
	printf("%d", max);
	return 0;
}


//求n的阶乘
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 1;
	int s = 1;
	scanf("%d", &n);//计算的是n的阶乘
	for (i = 1; i <= n; i++)
	{
		s = s * i;
	}
	printf("%d", s);
	return 0;
}


//计算1x3x5x7x9x11
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 1;
	int s = 1;
	scanf("%d", &n);//计算的是n的阶乘
	for (i = 1; i <= n; i += 2)
	{
		s = s * i;
	}
	printf("%d", s);
	return 0;
}


//判断闰年
#include<stdio.h>
int main()
{
	int count = 0;
	int i = 2000;
	for (i = 2000; i <= 2500; i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
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
	int i = 0;
	double sum = 0.0;
	double z = 1.0;
	int j = -1;//定义各项的符号
	for (i = 1; i <= 100; i++)//先定义分母
	{
		j = (-1) * j;
		z = j * (1.0 / i);
		sum = sum + z;
	}
	printf("%lf", sum);
	return 0;
}


//判断一个数是不是素数
//1-100之间的素数
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 2;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j < 200; j++)
		{
			if (i % j == 0)//能整除，不是素数
				break;
		}
		if (j == i)
			count++;
		printf("%d ", i);
	}
	printf("\n");
	printf("%d", count);
	return 0;
}
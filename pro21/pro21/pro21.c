#include<stdio.h>
void test()
{
	printf("******************\n");
	printf("How do u do\n");
	printf("******************\n");
}
int main()
{
	test();
	return 0;
}



//接收一个整型值（无符号），按照顺序打印它的每一位
#include<stdio.h>
void print(int n)
{
	if (n > 9)
		print(n / 10);
	printf("%d ", n % 10);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	print(n);
	return 0;
}


//编写函数不允许创建临时变量，求字符串的长度
//相当于模拟实现strlen
#include<stdio.h>
int my_strlen(char const* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	int len = my_strlen("abc");
	printf("%d", len);
	return 0;
}


int my_strlen(char const* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
		return 0;
}
int main()
{
	int len = my_strlen("abc");
	printf("%d", len);
	return 0;
}


//求n的阶乘
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 1;
	int sum = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum * i;
	}
	printf("%d", sum);
	return 0;
}

//求n的阶乘，不考虑溢出
#include<stdio.h>
int fac(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * fac(n - 1);
}
int main()
{
	int n = 0;
	int i = 1;
	int sum = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = fac(n);
	}
	printf("%d", sum);
}
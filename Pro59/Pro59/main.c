#define _CRT_SECURE_NO_WARNINGS 1


//输出100-200之间的素数
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;  //能整除
		}
		if (j == i)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("%d", count);
}


#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
				break;
		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d ",i);
		}
	}
	printf("\n");
	printf("%d", count);
	return 0;
}


//最大公约数
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


//用递归打印输入数字的每一位
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
	(void)scanf("%d", &n);
	print(n);
	return 0;
}


//不允许使用临时变量， 求字符串长度
#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)
{
	assert(str != NULL);
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen(str + 1);
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


//非递归下的斐波那契数列
#include<stdio.h>
int main()
{
	int a = 1;
	int b = 1;
	int c = 1;
	int n = 0;
	(void)scanf("%d", &n);
	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
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
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


#include<stdio.h>
#define NAME "HELLO WORLD"
int main()
{
	printf("%s\n", NAME);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	printf("%p\n", &a);
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
	printf("%s %d %f", ps->name, ps->age, ps->score);
	return 0;
}


//输出素数
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
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
int main()
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 100; i < 200; i++)
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


//非递归下的斐波那契额数列问题
#include<stdio.h>
int main()
{
	int a = 1;
	int b = 1;
	int c = 1;
	int n = 0;
	(void)scanf("%d", &n);
	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	printf("%d", c);
	return 0;
}


//一维数组在内存中是连续存储的
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("&arr[%d]=%p\n", i, &arr[i]);
	}
	return 0;
}
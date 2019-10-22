//编写函数不允许创建临时变量，求字符串的长度, 相当于模拟实现strlen
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
	char arr1[] = "abcdef";
	int ret = 0;
	ret = my_strlen(arr1);
	printf("%d", ret);
	return 0;
}

//创建临时变量实现strlen
#include<stdio.h>
int my_strlen(const char* str)
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
	char arr1[] = "abcdef";
	int ret = 0;
	ret = my_strlen(arr1);
	printf("%d", ret);
	return 0;
}


//斐波那契数列
#include<stdio.h>
int fib(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}
int main()
{
	int n = 0;
	int ret = 0;
	(void)scanf("%d", &n);
	ret = fib(n);
	printf("%d", ret);
	return 0;
}


//非递归下的斐波那契数列
#include<stdio.h>
int main()
{
	int n = 0;
	int a = 1;
	int b = 1;
	int c = 1;
	(void)scanf("%d", &n);
	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	printf("%d", c);
}


//打印数组中元素的地址
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("a[%d]=%p\n", i, &arr[i]);
	}
	return 0;
}


//指针题
#include<stdio.h>
struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
//结构体的大小为20
int main()
{
	printf("%p\n", p + 0x1);
	printf("%p\n", (unsigned long)p + 0x1);
	printf("%p\n", (unsigned int*)p + 0x1);
	return 0;
}


#include<stdio.h>
int main()
{
	int a[4] = { 1,2,3,4 };
	int* ptr1 = (int*)(&a + 1);
	int* ptr2 = (int*)((int)a + 1);
	printf("%x,%x", ptr1[-1], *ptr2);
	return 0;
}


#include<stdio.h>
int main()
{
	int a[3][2] = { (0,1),(2,3),(4,5) };
	int* p;
	p = a[0];
	printf("%d", p[0]);
	return 0;
}


#include<stdio.h>
int main()
{
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	return 0;
}


#include<stdio.h>
int main()
{
	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
	int* ptr1 = (int*)(& aa + 1);
	int* ptr2 = (int*)(*(aa + 1));
	printf("%d %d", *(ptr1 - 1), *(ptr2 - 1));
	return 0;
}


#include<stdio.h>
int main()
{
	const char* a[] = { "work","at","alibaba" };
	char** pa = &a;
	pa++;
	printf("%s\n", *pa);
	return 0;
}
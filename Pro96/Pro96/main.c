#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
int main()
{
	char a = 'w';
	char* pc = &a;   //这个时候，pc称为字符指针，pc的类型为char*
	char arr[10] = "abc";
	char* pa = arr;   //arr作为数组名，他代表的是数组首元素的地址，pa的类型为char*
	char* p = "abcdef";  //此时p只具有4个字节，但是abcdef不算\0有6个字节，显然放不下
	//那么此时，p中存的就是"abcdef"中首个字母a的地址，地址用指针接收，刚好为4个字节
	//上述常量表达式的结果就是首字符a的地址。
}


#include<stdio.h>
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abcdef";
	if (arr1 == arr2)
		printf("arr1==arr2\n");
	else
		printf("arr1!=arr2\n");
	return 0;
	//打印结果为arr1!=arr2
	//原因:因为arr1和arr2会开辟两块空间的大小，虽然都表示的是首字母a的地址
	//但是两块空间的地址是不一样的，所以两块空间中a的地址自然也就是不一样的了。
}


#include<stdio.h>
int main()
{
	char* p1 = "abcdef";
	char* p2 = "abcdef";
	if (p1 == p2)
		printf("p1==p2");
	else
		printf("p1!=p2");
	return 0;
	//打印结果为p1==p2
	//虽然把字符串abcdef地址存在了p1和p2当中，但是两个字符串是一样的
	//都是abcdef，所以首元素a的地址自然也是一样的了
	//abcdef为常量字符串，所以说他是不能被改变的，其实也只会出现一次abcdef
	//但是p1的地址和p2的地址是绝对不一样的。
}


#include<stdio.h>
int main()
{
	char arr1[] = "abcdef";
	//创建了一个数组，数组中存的是abcdef
	const char* p = "abcdef";
	//将字符串abcdef中首元素的地址，即a的地址，存在p中
	arr1[2] = 'w';
	//修改数组中的内容，是被允许的
	//*(p + 2) = 'w';        //p[2]
	//p所指向的是一个常量字符串，常量字符串中的值是不可以被修改的
	return 0;
	//这个程序运行起来是会崩溃的，崩溃的主要原因在于，*(p+2)='w'
	//这个语句是不正确的
	//字符指针不仅仅用来存放字符的地址，还可能存放一个字符串的起始地址
}


#include<stdio.h>
int main()
{
	int arr[10];  //整形数组
	int* arr1[5];  //指针数组，存放指针的数组，也就是其内部元素的类型是指针类型
	char** arr3[5]; //二级字符指针的数组
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	char c = 'w';
	int* p1 = &a;
	char* p2 = &c;
	int arr[10] = { 0 };
	char ch[5] = { 0 };
	char* arr2[6] = { 0 };
	//数组指针就是指向数组的指针
	//arr  表示数组首元素的地址
	//&arr[0]表示数组首元素的地址
	//&arr 表示数组的地址
	int(*p)[10] = &arr;  //数组的地址 
	char(*pc)[5] = &ch;
	char* (*pa)[6] = &arr2;
	return 0;
}


#include<stdio.h>
void Print1(int arr[], int sz)
{
	int i = 0;
	for (i = 1; i <= sz; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
}
void Print2(int(*p)[10], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", (*p)[i]);
		//首先找到数组，用(*p)找到数组，然后去访问第i个元素
		//如果不带括号的话，那么p就会先和[]进行结合
		//其实(*p)就等于是数组名然后[i]，就相当于是arr[i];
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Print1(arr, sz);
	Print2(&arr, sz);
	return 0;
}


#include<stdio.h>
void Print1(int arr[3][5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
void Print2(int(*p)[5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			//printf("%d ", (*(p+i))[j]);
			printf("%d ", *(*(p + i) + j));
			//*(p+i)相当于找到了第i行首元素的地址
			//也可以写成p[i][j]
			//其实p就相当于arr
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { 1,2,3,4,5,3,4,5,6,7,4,5,6,7,8 };
	Print1(arr, 3, 5);
	Print2(arr, 3, 5);
	//arr代表首元素的地址，对于二维数组来说，首元素的地址就是第一行的地址
	//所以列标是很重要的
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[5];          //整形数组
	int* parr1[10];      //指针数组
	int(*parr2)[10];     //数组指针
	int(*parr3[10])[5];  //存放数组指针的数组，可以存放10个这样的指针
	//数组有10个对象，数组中存储对象的类型是数组指针
	//5个整形元素的数组的地址 数组中每个元素的类型是int
}


//一维数组的传参
#include<stdio.h>
void test(int arr[])
{

}
void test(int arr[10])
{

}
void test(int* arr)
{

}
void test2(int* arr[20])
{

}
void test(int** arr)
{

}
//上述的几种传参形式都是正确的，如果要按照数组的形式传递，那么就原模原样的传递就可以了。
//一维数组如果想用指针的形式，那么就用二级指针来接收参数，就可以了。
int main()
{
	int arr[10] = { 0 };
	int* arr2[20] = { 0 };
	test(arr);
	test2(arr2);
	return 0;
}


#include<stdio.h>
void test(int arr[3][5])
{

}
//void test(int arr[][])
//{
//	//这种传参是不正确的，可以省略行，不可以省略列
//}
void test(int arr[][5])
{

}
//总结:二维数组传参，函数形式的设计只能省略第一维的[],不能省略第二维的
//因为对一个二维数组，可以不知道有多少行，但是必须知道一行有多少个元素
//这样才会方便运算，同样，一样的道理，如果用数组接收参数，那么就原模原样的接收就可以了
void test(int(*arr)[5])
{

}
int main()
{
	int arr[3][5];
	test(arr);
}


#include<stdio.h>
void Print(int* p, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	Print(p, sz);
	return 0;
}


//求阶乘
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 1;
	int sum = 1;
	(void)scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum * i;
	}
	printf("%d", sum);
	return 0;
}


//求阶乘的和
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 1;
	int ret = 1;
	int sum = 0;
	(void)scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
		sum = sum + ret;
	}
	printf("%d", sum);
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 5;
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < key)
			left = mid + 1;
		else if (arr[mid] > key)
			right = mid - 1;
		else if (arr[mid] == key)
		{
			printf("找到了，下标为:%d", mid);
			break;
		}
	}
	return -1;
}


#include<stdio.h>
int main()
{
	char arr1[] = "hello world";
	char arr2[] = "#######################";
	int left = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int right = sz - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
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


#include<stdio.h>
int main()
{
	int ch = getchar();
	putchar(ch);
	return 0;
}
//输入什么字符就会输出相应的字符


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	(void)scanf("%d %d", &a, &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d %d", a, b);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	(void)scanf("%d %d", &a, &b);
	a = a ^ b;
	b = a ^b;
	a = a ^ b;
	printf("%d %d", a, b);
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
	int a = 0;
	int b = 0;
	int m = 0;
	int n = 0;
	int c = 0;
	int z;
	(void)scanf("%d %d", &a, &b);
	m = a;
	n = b;
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	z = (m * n) / b;
	printf("%d\n", b);
	printf("%d\n", z);
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("%d ", i);
	}
	return 0;
}



#include<stdio.h>
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++)
	{
		printf("hehe\n");
		arr[i] = 0;
	}
	return 0;
}
//代码的打印结果是hehe的死循环


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
	int x = 0;
	int y = 0;
	for (x = 0, y = 0; x < 2, y < 5; ++x, ++y)
	{
		printf("hehe\n");
	}
	return 0;
}
//打印结果为5个hehe，利用了逗号表达式，x=2的情况被忽略了，只看y<5,所以打印5个hehe


//模拟登录程序
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		printf("请输入密码:>\n");
		(void)scanf("%s", password);
		if (0 == strcmp(password, "123456"))
		{
			printf("登录成功\n");
			break;
		}
		else
			printf("输入错误，请重新输入!");
	}
	if (i == 3)
	{
		printf("无法登录!\n");
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
//1号程序员写的代码
int Add(int x, int y)
{
	return x + y;
}
//2号程序员写的代码
int test(int (*pf)(int, int))
{
	//如果2号程序员想在他的内部调用Add函数的话，我可以在主函数中将Add函数的地址传递给2号程序员写的代码
	//那么2号程序员写的代码，就要对Add函数的地址进行接收，利用函数指针(指向函数的指针)
	//pf为指针变量
	pf(2, 4);  //调用这个指针所指向的函数，此时被调用的函数就称为回调函数
}
int main()
{
	//1号程序员进行调用
	//自己写的代码，自己直接调用，这种不被称为回调函数
	int ret = Add(2, 3);
	int res = test(Add);
	printf("%d", res);
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz - 1; i++)
	{
		int flag = 1;
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				flag = 0;
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		if (flag == 1)
			break;
	}
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int arr1[10];
	char arr2[5];
	return 0;
}
//[]中必须是常量或者常量表达式，不然就会报错


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5 };
	return 0;
}
//没有被赋值的元素则默认为为0
//通过监视窗口来看


#include<stdio.h>
int main()
{
	char arr1[] = { 'a','b','c' };
	char arr2[] = "abc";
	printf("%s", arr1);
	printf("%s", arr2);
	return 0;
}
//这两个数组的是不一样的
//arr1是不可以看成数组的，因为它没有\0，\0是字符串的结束标志
//如果没有\0是不可以看成字符串的
//arr2是可以看成字符串的，c后面还有一个隐藏的\0


#include<stdio.h>
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
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
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", *(p+i));
	}
	return 0;
}


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
//每个元素地址之间差的值是4
//至于为什么差4，因为我是一个整形的数组，每个元素占有4个字节。


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;  //得到了首元素的地址
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%p===%p\n", &arr[i], p + i);
	}
	return 0;
}
//这个代码就说明：p+i为下标为i的元素的地址
//*(p + i)为下标为i的元素的值


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int arr1[3][4]; //创建了一个三行四列的数组
	char arr2[4][5];
	double arr3[3][5];
}


#include<stdio.h>
int main()
{
	int arr[3][4] = { 1,2,3,4,5,6 };//后面没有初始化的元素全部当0对待
	int arr2[3][4] = { {1,2},{3,4},{5,6} };//第一行为1 2 0 0 第二行为3 4 0 0
}


#include<stdio.h>
int main()
{
	int arr[3][4] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[3][4] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
		}
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int i = 0;
	int j = 0;
	int* p = &arr[0][0];
	for (i = 0; i < 12; i++)
	{
		printf("%d ", *(p + i));
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz - 1; i++)
	{
		int flag = 1;
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;
			}
		}
		if (flag == 1)
			break;
	}
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%d", sizeof(arr));
	return 0;
}
//这个代码的结果是40


#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%p\n", &arr);
	printf("%p\n", &arr + 1);
	return 0;
}
//这两行之间的地址值的差值为40，刚好为数组的大小


#include<stdio.h>
int main()
{
	int a = 1;
	char* pa = (char*)& a;
	if (*pa == 1)
		printf("小端\n");
	else
		printf("大端\n");
	return 0;
}


#include<stdio.h>
int CheckSystem()
{
	int a = 1;
	char* pa = (char*)& a;
	return *pa;
}
int main()
{
	int ret = CheckSystem();
	if (ret == 1)
		printf("小端\n");
	else
		printf("大端\n");
	return 0;
}


#include<stdio.h>
int CheckSystem()
{
	union Un
	{
		int i;
		char c;
	}u;
	u.i = 1;
	return u.c;
}
int main()
{
	int ret = CheckSystem();
	if (ret == 1)
		printf("小端\n");
	else
		printf("大端\n");
	return 0;
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
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	printf("%p\n", &Add);   //证实了函数也是有地址的
	int (*p)(int x, int y) = &Add;
	int ret = (*p)(2, 3);   //函数的调用
	//也可以写车： int ret=p(2,3);
	//哪个*写不写都行，写几个都行
	//(*p)是先找到这个函数，然后传参进行调用
	//p是函数指针
	return 0;
}


#include<stdio.h>
int my_strlen(const char* str)
{

}
int main()
{
	int* arr[10];  //整形指针数组
	char* arr[5];  //字符指针数组
	int (*ps)(const char*) = &my_strlen;
	int (*ps2)(const char*) = &my_strlen;
	int (*ps3)(const char*) = &my_strlen;
	int (*pArr[3])(const char*) = &my_strlen;   //函数指针数组
	//存放函数指针的数组
	return 0;
}


#include<stdio.h>
void menu()
{
	printf("**********************\n");
	printf("*** 欢迎来到计算器 ***\n");
	printf("***  1.Add   2.Sub ***\n");
	printf("***  3.Mul   4.Div ***\n");
	printf("**********************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void test()
{
	int input = 0;
	do
	{
		menu();
		int x = 0;
		int y = 0;
		int ret = 0;
		printf("请选择:>\n");
		(void)scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入两个操作数:>\n");
			(void)scanf("%d %d", &x, &y);
			ret = Add(x, y);
			printf("%d\n", ret);
			break;
		case 2:
			printf("请输入两个操作数:>\n");
			(void)scanf("%d %d", &x, &y);
			ret = Sub(x, y);
			printf("%d\n", ret);
			break;
		case 3:
			printf("请输入两个操作数:>\n");
			(void)scanf("%d %d", &x, &y);
			ret = Mul(x, y);
			printf("%d\n", ret);
			break;
		case 4:
			printf("请输入两个操作数:>\n");
			(void)scanf("%d %d", &x, &y);
			ret = Div(x, y);
			printf("%d\n", ret);
			break;
		case 0:
			printf("退出计算器!\n");
			break;
		default:
			printf("所输入的有误，请重新输入!\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}


//利用函数指针数组优化计算器
#include<stdio.h>
void menu()
{
	printf("**********************\n");
	printf("*** 欢迎来到计算器 ***\n");
	printf("***  1.Add   2.Sub ***\n");
	printf("***  3.Mul   4.Div ***\n");
	printf("**********************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void test()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
	int (*parray[5])(int, int) = { 0,Add,Sub,Mul,Div };
	do
	{
		menu();
		printf("请选择:>");
		(void)scanf("%d", &input);
		printf("情输入两个操作数:>\n");
		(void)scanf("%d %d", &x, &y);
		ret = parray[input](x, y);
		printf("%d\n", ret);
	} while (input);
}
int main()
{
	test();
	return 0;
}


#include<stdio.h>
//1号程序员写的代码
int Add(int x, int y)
{
	return x + y;
}
//2号程序员写的代码
int test(int (*pf)(int, int))
{
	//如果2号程序员想在他的内部调用Add函数的话，我可以在主函数中将Add函数的地址传递给2号程序员写的代码
	//那么2号程序员写的代码，就要对Add函数的地址进行接收，利用函数指针(指向函数的指针)
	//pf为指针变量
	pf(2, 4);  //调用这个指针所指向的函数，此时被调用的函数就称为回调函数
}
int main()
{
	//1号程序员进行调用
	//自己写的代码，自己直接调用，这种不被称为回调函数
	int ret = Add(2, 3);
	int res = test(Add);
	printf("%d", res);
	return 0;
}
//函数指针
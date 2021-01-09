#define _CRT_SECURE_NO_WARNINGS 1



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


//冒泡排序
#include<stdio.h>
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void Swap(char* buf1, char* buf2, int width)
{
	for (int i = 0; i < width; i++)
	{
		char temp = *buf1;
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2++;
	}
}
void My_BubbleSort(int* arr, int sz, int width, int (*cmp_int)(const void* e1, const void* e2))
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (cmp_int((char*)arr + j * width, (char*)arr + (j + 1) * width) > 0)
			{
				Swap((char*)arr + j * width, (char*)arr + (j + 1) * width, width);
			}
		}
	}
}
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	My_BubbleSort(arr, sz, sizeof(arr[0]), cmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Stu
{
	char name[20];
	int age;
};
int cmp_struct_by_name(const void* elem1, const void* elem2)
{
	return strcmp(((struct Stu*)elem1)->name, ((struct Stu*)elem2)->name);
}
int main()
{
	struct Stu arr[3] = { {"zhangsan",20},{"lisi",15},{"wangwu",25} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_struct_by_name);
}


#include<stdio.h>
int main()
{
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));//16,a作为数组名，独立存在与sizeof内部，表示的是整个数组的大小，结果为4*4=16
	printf("%d\n", sizeof(a + 0)); //4，此时a并没有单独存在与sizeof内部，所以a此时表示的是首元素的地址
	//a表示首元素的地址，a+0还表示的是首元素的地址，只要是地址，就是4个字节
	printf("%d\n", sizeof(*a)); //4，*a表示的首元素的值，首元素的值为1，类型为int，sizeof(int)=4
	printf("%d\n", sizeof(a + 1));//4 a表示首元素的地址，a+1表示的是第二个元素的地址，只要是地址
	//结果就是4
	printf("%d\n", sizeof(a[1]));//4 a[1]表示的是第2个元素的值，值为int类型，所以带大小为4
	printf("%d\n", sizeof(&a));  //4 &a，取出的是整个数组的地址，只要是地址，结果就是4个字节
	printf("%d\n", sizeof(*&a)); // 16 这个需要注意：
	//先对a进行&，去除了整个数组的地址，在对这个地址进行解引用的操作
	//就找到了整个数组，所以大小为16，*&a就相当于a，其实就是sizeof(a)，为整个数组的大小
	printf("%d\n", sizeof(&a + 1)); //4 &a+1，跳过了整个数组的大小，然后，还是一个地址，所以结果还是4
	printf("%d\n", sizeof(&a[0])); //4 仍然是一个地址
	printf("%d\n", sizeof(&a[0] + 1)); //4 还是地址
}


#include<stdio.h>
int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr)); //arr作为数组名放在sizeof内部，要计算的是整个数组的大小
	//数组中此时并没有放置\0，所以一共有6个元素，每个元素的大小是一个字节
	//所以整个数组的大小为6个字节
	printf("%d\n", sizeof(arr + 0));  //4 此时arr作为首元素的地址，arr+0还是表示首元素的地址
	//只要是地址，大小就是4
	printf("%d\n", sizeof(*arr));     //1  arr作为首元素的地址，进行解引用，然后得到了
	//首元素的值，值为char型的，大小为1个字节
	printf("%d\n", sizeof(arr[1]));   //1 第二个元素的值
	printf("%d\n", sizeof(&arr));     //4  &arr取出的是数组的地址
	printf("%d\n", sizeof(&arr + 1));//4  跳过整个数组，还是一个地址
	printf("%d\n", sizeof(&arr[0] + 1));  //4
}


#include<stdio.h>
int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", strlen(arr));   //未知数，因为我并没有看到\0，所以不知道\0到底在哪
	//所以值是随机值 X
	printf("%d\n", strlen(arr + 0));  //arr此时作为首元素的地址，首元素地址+0还是首元素的地址
	//所以还是随机值X
	printf("%d\n", strlen(*arr));    //传进去的是字符a，小写a的ASCII码值为97
	//所以为错误代码
	printf("%d\n", strlen(arr[1]));  //传的是B，所以还是错误代码
	printf("%d\n", strlen(&arr));    //X
	printf("%d\n", strlen(&arr + 1));  //Y-X=6
	printf("%d\n", strlen(&arr[0] + 1));  //X+1
}


#include<stdio.h>
int main()
{
	char arr[] = "abcdef";
	printf("%d\n", strlen(arr));   //6
	printf("%d\n", strlen(arr + 0));  //和上面第一个一样往后数，一共有6个
	printf("%d\n", strlen(*arr));     //error ，错误的传参方式
	printf("%d\n", strlen(arr[1]));   //error ，错误的传参方式
	printf("%d\n", strlen(&arr));     //取出整个数组的地址，往后数，还是6
	printf("%d\n", strlen(&arr + 1)); //随机值，跳过整个数组，已经跳到\0的后面了
	//所以结果是多少是一个未知数
	printf("%d\n", strlen(&arr[0] + 1));  //5
}


#include<stdio.h>
int main()
{
	char* p = "abcdef";
	printf("%d\n", sizeof(p));  //4 p为指针变量，大小为4
	printf("%d\n", sizeof(p + 1)); //4 p是指针变量，+1的大小还是地址，结果为3
	printf("%d\n", sizeof(*p));//1 ，是一个值，值得类型是char类型，所以大小为1
	printf("%d\n", sizeof(p[0])); //1 同上
	printf("%d\n", sizeof(&p));   // 4 取出整个数组的地址 
	printf("%d\n", sizeof(&p + 1));   //4  跳过整个数组，还是地址
	printf("%d\n", sizeof(&p[0] + 1));  //4，还是地址
}


#include<stdio.h>
int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));  //48 整个数组，大小为 48
	printf("%d\n", sizeof(a[0][0]));  //4 第一个元素的大小
	printf("%d\n", sizeof(a[0]));     //16 第一行的数组名，单独放在内部，
	//表示第一行的大小
	printf("%d\n", sizeof(a[0] + 1));  //4 a[0]变成首元素的地址，所以大小还是4
	printf("%d\n", sizeof(*(a[0] + 1)));  //4 是指的大小，值的类型为int
	printf("%d\n", sizeof(a + 1));  //4 a是二维数组的数组名，a为首元素的地址，首元素的地址为第一行的地址
	//第一行的地址加1，是第二行的地址 ，只要是地址，大小就是4 
	printf("%d\n", sizeof(*(a + 1))); //16 对第二行的地址进行解引用的操作，找到了第二行的所有
	//所以大小为16
	printf("%d\n", sizeof(&a[0] + 1)); //4 还是地址 取出的是第二行的地址
	printf("%d\n", sizeof(*(&a[0] + 1)));  //16 找出了第二行的所有元素
	printf("%d\n", sizeof(*a));  //16 第一行解引用
	printf("%d\n", sizeof(a[3]));  //16 //虽然越界了，但是并不影响，结果还是一行的大小
}


#include<stdio.h>
int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int* ptr = (int*)(&a + 1);  //加1跳过了整个数组，强制转换成了int* 
	printf("%d,%d", *(a + 1), *(ptr - 1));  //-1向前挪动一个，指向5的地址，解引用之后
	//得到的就是5的值
	return 0;
	//结果为2 5
}


struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
//假设p 的值为0x100000。 如下表表达式的值分别为多少？
//结构体大小为20个字节
int main()
{
	p = (struct Test*)0x100000;
	//这道题主要考察的点在于指针+1的权限到底有多大
	//指针的权限是和指针的类型密切相关的
	printf("%p\n", p + 0x1);
	//p作为一个指针变量，p的大小是20个字节，那么对于此处来说，p+1，它所能够访问的权限就是20个字节
	//所以p+1，加的就是20个字节，0x是16进制，20在16进制下就是14，又因为p为0x100000,所以它+14的结果是
	//0x100014
	printf("%p\n", (unsigned long)p + 0x1);
	//此处p被强制类型转换成了整形，所以p+1在此处就是p+1进行整数运算，所以结果为
	//0x100001
	printf("%p\n", (unsigned int*)p + 0x1);
	//此处p被强制类型转换成了指针类型，整形指针+1所拥有的权限是4个字节，那么，p+1的结果是
	//0x100014
	return 0;
}


#include<stdio.h>
int main()
{
	int a[4] = { 1, 2, 3, 4 };
	int* ptr1 = (int*)(&a + 1);
	int* ptr2 = (int*)((int)a + 1);
	printf("%x,%x", ptr1[-1], *ptr2);
	return 0;
}


#include <stdio.h>
int main()
{
	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
	int* p;
	p = a[0];
	printf("%d", p[0]);
	return 0;
	//打印的结果是1，考察的点是逗号表达式，利用逗号表达式对数组进行初始化
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
	printf("%c\n",'\'');
	printf("%s\n", "\"");
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	(void)scanf("%d %d", &a, &b);
	c = a + b;
	printf("%d\n", c);
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
	printf("%d\n", c);
	return 0;
}


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


#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
//<stdio.h>为标准的输入输出函数头文件
//写一个C语言的代码其实就是在写后缀名为.c(原文件)或.h文件(头文件)
int main()
{
	//printf为输入输出的函数--库函数(不是自己实现的，需要引入一个头文件)
	//双引号内部打印的是字符串
	//简单的输出一句话，可以用printf函数
	printf("hello world\n");
	system("pause");
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
	int num = 10;
	printf("%d", num);
	return 0;
	//在这个程序中num的值是可以正常打印出来的
	//因为num是局部变量，正好printf语句也处在num的作用域中，所以是可以正常打印出来的。
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
int main()
{
	printf("c:\test\test.c\n");
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


#include<stdio.h>
int main()
{
	int input = 0;
	printf("要学习吗？ (1/0)\n");
	(void)scanf("%d", &input);
	if (input == 0)
	{
		printf("放弃学习\n");
	}
	else if (input == 1)
	{
		printf("好的offer\n");
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
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d", arr[4]);
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
	int a = 5 % 2;
	printf("%d", a);
	return 0;
}
//针对于取模运算，有一点需要特别注意：
//取模运算符左右两边的操作数都必须是整数，如果不是整数，那么就会出错。


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
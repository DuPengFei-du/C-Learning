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
	//数组也是一种自定义类型
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));                //40
	printf("%d\n", sizeof(int[10]));          //40
	int a = 10;
	sizeof(int);  //可以的
	sizeof(a);    //可以的
	//那么问题来了，数组的类型是什么呢？
	//数组的类型，就是数组去掉数组名剩下的部分
	//比如上述对数组的声明 int arr[10],那么数组的类型就是int [10]
}


#include<stdio.h>
void test()
{
	printf("hehe");
}
int main()
{
	test(20);
	return 0;
}
//屏幕上打印的结果是hehe，虽然test函数实际上是没有参数的，但是在主函数调用test函数时候，还是传了参数，但是是没有任何影响的。
//你传是你的事情，我接不接受是我的事情。
//但是如果没有参数的话，最好还是在test函数的括号中加一个void，声明这个函数是没有参数的。


#include<stdio.h>
struct Stu
{
	char name[20];
	int age;
};
union Un
{
	int i;
	char c;
};    //联合体类型
int main()
{
	union Un u = { 0 };   //u为联合体对象
	printf("%d\n", sizeof(u));   //结果为4
	printf("%p\n", &u);
	printf("%p\n", &(u.i));
	printf("%p\n", &(u.c));
	//三个的地址是一模一样的，说明i和c占用同一块空间
	//所以联合体又叫共用体，共用体的意思就是我的成员要共用同一块空间
	//那么我给i里面放东西c就会发生变化
	//我给c里面放东西，i也会发生变化
	//c是i占的四个字节中的第一个字节，这也解决了大小端算法的另一种解法问题
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
	//int res = test(Add);
	//printf("%d", res);
	return 0;
}


#include<stdio.h>
void menu()
{
	printf("************************\n");
	printf("****欢迎来到计算器！****\n");
	printf("****1.Add      2.Sub****\n");
	printf("****3.Mul      4.Div****\n");
	printf("************************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}int Mul(int x, int y)
{
	return x * y;
}int Div(int x, int y)
{
	return x / y;
}
void Cal(int(*p)(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("请输入操作数:>");
	(void)scanf("%d %d", &x, &y);
	ret = p(x, y);
	printf("%d\n", ret);
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>\n");
		(void)scanf("%d", &input);
		switch (input)
		{
		case 1:
			Cal(Add);
			break;
		case 2:
			Cal(Sub);
			break;
		case 3:
			Cal(Mul);
			break;
		case 4:
			Cal(Div);
			break;
		case 0:
			printf("退出程序！\n");
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
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
		*buf1++;
		*buf2++;
	}
}
void my_BubbleSort(int* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_BubbleSort(arr, sz, sizeof(arr[0]), cmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


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
	b = a ^ b;
	a = a ^ b;
	printf("%d %d", a, b);
	return 0;
}


#include<stdio.h>
int main()
{
	int count = 0;
	int n = 0;
	(void)scanf("%d", &n);
	for (int i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = -1;
	int b = a << 1;
	//整数在内存中存储的是二进制补码
	//-1的在内存中存储，就是存储32个1，32个1为-1的补码。
	//正数的原，反，补码相同
	//负数：写先原码，最高位为符号位，负数的最高位为1，负数的符号位为1，正数为0
	//反码：在原码的基础上，符号位不动，其他位按位取反，得到反码
	//反码+1得到补码
	printf("%d\n", b);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = -1;
	int b = a >> 1;
	printf("%d\n", b);
	return 0;
	//采用的是算数右移
}


#include<stdio.h>
int main()
{
	int a = 3;  //011
	int b = 5;  //101
	int c = a ^ b;   //110
	printf("%d\n", c);
	return 0;
}
//结果为6


#include<stdio.h>
int main()
{
	int a = 10;
	int b = !a;
	printf("%d\n", b);
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", arr + 1);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0] + 1);
	printf("%p\n", &arr);   //数组的地址
	printf("%p\n", &arr + 1); //数组的地址加1
	return 0;
}
//数组的地址加1跳过的是整个数组


#include <stdio.h>
void test1(int arr[])
{
	printf("%d\n", sizeof(arr));//(2)   //用指针接收的，大小为4
}
void test2(char ch[])
{
	printf("%d\n", sizeof(ch));//(4)  //这里是一个易错的点，他是用指针接收的
	//所以大小还是4，与char是没有任何关系的
}
int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));//(1)
	printf("%d\n", sizeof(ch));//(3)
	test1(arr);
	test2(ch);
	return 0;
}


#include <stdio.h>
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;
	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	printf("%d\n", arr[5]);
	printf("%d\n", p[5]);
	printf("%d\n", *(p + 5));
	printf("%d\n", *(arr + 5));
	return 0;
	//p[5]==*(p+5)
	//arr[5]==*(arr+5)==*(5+arr)==5[arr]
}


#include<stdio.h>
int main()
{
	char a = 127;
	char b = 3;
	char c = a + b;
	//00000000000000000000000001111111  --a的32位形式下的存储
	//00000000000000000000000001000011  --b的32位形式下的存储
	//但是a和b都是char类型的，char之由一个字节，所以a，b为：
	//01111111  --a
	//00000011  --b
	//字符在算的时候都达不到整形的大小，所以要先把他们提升成整形的大小，然后再进行运算
	//a，b均为有符号的char类型，所以最高位是符号位
	//所以需要把a首先补成这个样子，00000000000000000000000001111111
	//b是同理，b变成了，00000000000000000000000001000011
	//将a和b进行相加：
	//00000000000000000000000001111111
	//00000000000000000000000001000011
	//00000000000000000000000010000010   ---a和b相加的结果
	//a+b的结果要存在c里面，只能存在有8个比特位，结果为10000010
	//对c进行整形提升，要补的是符号位，补完的结果如下所示:
	//11111111111111111111111110000010 ---再内存中放的是补码，打印的是原码
	//补码-1是反码
	//反码为：11111111111111111111111110000001
	//原码为：10000000000000000000000001111110  --结果为-126
	printf("%d", c);   //---126
	return 0;
}
//无符号数进行提升的时候，只能补0


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	(void)scanf("%d %d", &a, &b);
	c = a + b;
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
	c = Add(a,b);
	printf("%d", c);
	return 0;
}


#include<stdio.h>
int main()
{
	printf("%c\n", '\'');
	printf("%s\n", "\"");
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
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
	printf("c:\\test\\test.c\n");
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


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = a || b;
	printf("%d", c);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	int b = 2;
	int c = 4;
	int d = (a = b + c, b = c - 2, c = c + b);
	printf("%d\n", d);
	return 0;
	//结果为6
}


#include<stdio.h>
#define ADD(X,Y) X+Y
int main()
{
	printf("%d\n", 10 * ADD(2, 3));
	return 0;
}
//宏的替换是直接替换的，不经运算，直接替换。
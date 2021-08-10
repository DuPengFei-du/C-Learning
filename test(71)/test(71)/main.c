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
int main()
{
	void (*pfun1)();   //函数指针 ，函数无参，返回值类型为void类型
	void* pfun2();    //函数声明，函数无参，函数的返回值类型为void*类型
}


#include<stdio.h>
int main()
{
	//代码1
	(*(void(*)())0)();

	/*
	首先，void(*)()为函数指针类型，其次void(*)()内放在括号中
	形成了(void(*)()),我们都知道，一个类型放在括号中，是用来
	强制类型转换的，(void(*)())又放在0前面，意思就是吧0转换成
	函数指针类型，0本来的类型是int，我希望把0当成函数指针类型的这样的
	一个函数的地址，所以我希望0这个地址处放的是一个无参，返回值类型
	为void的函数，然后，既然是个地址，那么我就解引用一下
	所以综上，上述是一场函数调用。
	调用0位置处的函数，被调用的这个函数是无参的，返回值类型为void的类型
	*/

	//代码2
	void (*signal(int, void(*)(int)))(int);
	/*
	这段代码整体来看是一个函数声明，其中signal为函数名，signal函数的第一个参数
	为int类型，第二个参数类型为函数指针类型，有了函数名，有了参数
	剩下的就是函数的返回值类型了，这个函数的返回值类型也是一个函数指针类型
	*/
	/*
	但是又因为这个代码出现了两次函数指针类型，所以我们可以用typedef进行
	类型重命名，即：
	typedef void(*pfun_t)(int);
	所以上述声明也可以变成
	pfun_t signal(int,pfun_t);
	*/
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


int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int (*p)(int, int);   //函数指针
int (*parray[2])(int, int);  //函数指针数组
int(*(*ptr)[2])(int, int) = &parray;//指向函数指针数组的指针
//ptr是指针


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
	int temp = 0;
	(void)scanf("%d %d", &a, &b);
	temp = a;
	a = b;
	b = temp;
	printf("%d %d", a, b);
	return 0;
}


//二进制中1的个数
#include<stdio.h>
int main()
{
	int n = 0;
	int count = 0;
	(void)scanf("%d", &n);
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	printf("%d", count);
	return 0;
}


//二进制中1的个数
#include<stdio.h>
int main()
{
	int n = 0;
	int count = 0;
	(void)scanf("%d", &n);
	for (int i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
			count++;
	}
	printf("%d", count);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	int b = a << 1;
	//<<左移操作符
	//左边丢弃，右边补0
	printf("%d\n", b);
	printf("%d\n", a);
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
	int a = 16;
	int b = a >> 1;
	printf("%d", b);
	return 0;
}
//结果是8


#include<stdio.h>
int main()
{
	int a = 3;   //011
	int b = 5;   //101
	int c = a & b;    //001
	printf("%d\n", c);
	return 0;
	//结果是1
}


#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	int c = a | b;
	printf("%d\n", c);
	return 0;
}
//结果为7


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
	a = a + 2;
	a += 2;
	printf("%d\n", a);
	return 0;
}
//其他的诸如此类都是这样的


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
	int a = 3;
	int b = -a;
	printf("%d\n", b);
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
int main()
{
	int a = 10;
	printf("%p\n", &a);   //003DF718
	//printf("%x\n", &a);   //3df718
	return 0;
}
//%x表示用16进制打印，如果用16进制打印，前面就会少00


#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);      //首元素的地址
	printf("%p\n", &arr[0]); //首元素的地址
	printf("%p\n", &arr);    //数组的地址
	return 0;
}
//三个的值均为00FBFCF0


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


#include<stdio.h>
int main()
{
	int a = 1;
	printf("%d\n", sizeof(a));  //4
	printf("%d\n", sizeof(int));   //4
	return 0;
}
//printf("%d\n",sizeof a);
//sizeof可以对变量省略括号，不能对类型省略括号


#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr)); //40  计算的是数组的大小
	return 0;
}


#include<stdio.h>
int main()
{
	short a = 10;
	int b = 3;
	printf("%d\n", sizeof(a = b + 5));  //2
	printf("%d\n", a);         //10
	return 0;
}
//值得需要注意的是：
//sizeof是运算符，并不是函数。
//所以sizeof括号中的内容只能算的上是传参，括号中的表达式是不会被计算的。
//所以a的值是并没有发生改变的。
//把int类型的东西非要放在short类型中，那当然是short说了算的，所以sizeof算出来的字节数的结果是2


#include<stdio.h>
int main()
{
	int a = 10;
	int b = ~a;
	printf("%d\n", b);
	return 0;
	//结果是-11
	//00000000000000000000000000001010  --补码
	//11111111111111111111111111110101  --按位取反后的补码
	//11111111111111111111111111110100  --反码
	//10000000000000000000000000001011  --原码
}


#include<stdio.h>
int main()
{
	int a = 10;
	int b = a++;
	printf("%d\n", b);  //10
	printf("%d\n", a);  //11
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	int b = ++a;
	printf("%d\n", b);  //11
	printf("%d\n", a);  //11
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	int* p = &a;
	printf("%d\n", a);
	return 0;
	//*p其实就是a
}


#include<stdio.h>
int main()
{
	int arr1[] = "abcdef";
	if (arr1 == "abcdef")
	{
		printf("hehe\n");
	}
	return 0;
}
//这段代码是不会打印任何结果的
//arr1其实是首元素的地址，所以是不等于abcdef的
//不能用==来判断字符串和数组是否相等


#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	int c = a && b;
	printf("%d\n", c);
	return 0;
}
//结果为1，逻辑与只看数字的真假


#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	int c = a || b;
	printf("%d\n", c);
	return 0;
}
//结果为1


#include <stdio.h>
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;
	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
	return 0;
}
// 打印的值是1 2 3 4


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", arr[5]);
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
//这几个打印的结果都一样的
//说明


#include<stdio.h>
struct Stu
{
	char name[20];
	int age;
	char sex[5];
};
int main()
{
	struct Stu s = { "张三", 30, "男" };
	printf("%s\n", s.name);
	printf("%d\n", s.age);
	printf("%s\n", s.sex);
	return 0;
}


#include<stdio.h>
struct Stu
{
	char name[20];
	int age;
	char sex[5];
};
int main()
{
	struct Stu s = { "张三", 30, "男" };
	struct Stu* ps = &s;
	printf("%s\n", ps->name);
	printf("%d\n", ps->age);
	printf("%s\n", ps->sex);
	return 0;
}
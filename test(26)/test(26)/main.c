#define _CRT_SECURE_NO_WARNINGS 1



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
	int b = a++;
	printf("%d\n", b);  //10
	printf("%d\n", a);  //11
	return 0;
}


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
	i = a++ || ++b || d++;
	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
	return 0;
}
//打印的值为1 3 3 4


#include<stdio.h>
int main()
{
	int a = 1;
	int b = 2;
	int c = (a > b, a = b + 10, a, b = a + 1);
	printf("%d\n", c);
	return 0;
	//结果是13，逗号表达式
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
	char a = 0xb6;//11000110
	short b = 0xb600;
	int c = 0xb6000000;
	if (a == 0xb6)
		printf("a");
	if (b == 0xb600)
		printf("b");
	if (c == 0xb6000000)
		printf("c");
	system("pause");
	return 0;
}
//打印结果为c
//另外两个都发生整形提升了


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
}


#include<stdio.h>
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void Swap(char* buf1, char* buf2,int width)
{
	for (int i = 0; i < width ; i++)
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
		printf("%d ", arr[i]);
	}
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
int main()
{
	int a = 0x11223344;
	//0x11223344放在a里面是刚刚好的
	//因为11是一个字节，22是一个字节，33是一个字节，44是一个字节
	//通过监视看：转换到16进制，观察到a的值为0x11223344
	//通过内存看：输入&a，可以观察到，a显示为44332211
	return 0;
}


#include<stdio.h>
int main()
{
	//加入说我想算一个1-1的结果是多少
	//但是遗憾的是，计算机不能算减法
	//那我只好把减法转换为加法的形式
	//1 - 1;
	1 + (-1);
	//如果按原码来计算的话
	// 1的原码
	//00000000000000000000000000000001
	//-1的原码
	//10000000000000000000000000000001
	//两个码相加的结果为
	//10000000000000000000000000000010
	//如果按照原码直接相加的话，结果就为-2，这显然是不正确的
	//所以科学家们推出了补码的概念
	//用补码来算的时候，可以算出正确的结果
}


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
	int n = 9;
	//9存在内存中，存储的时他的补码
	//00000000000000000000000000001001
	float* pFloat = (float*)& n;
	//要把一个整形，转换层成一个浮点型，那么现在就来转换一下
	//0 00000000 00000000000000000001001
	//又因为上述浮点型的存储中E全为0，所以这个数字是一个无限接近于0的数字 ，所以打印的结果为0.000000
	printf("n的值为:%d\n", n);
	//以整形的形式存入，再以整形的形式取出，那么结果当然还是整形了，所以说结果为9;
	printf("*pFloat的值为:%f\n", *pFloat);
	//要把一个整形，转换层成一个浮点型，那么现在就来转换一下
	//0 00000000 00000000000000000001001
	//又因为上述浮点型的存储中E全为0，所以这个数字是一个无限接近于0的数字 ，所以打印的结果为0.000000
	*pFloat = 9.0;
	printf("n的值为:%d\n", n);
	//以浮点数的形式存进去，以浮点数的形式往出拿
	//先将9写成二进制的形式
	//1001.0
	//1.001*2^3;
	//0 100000010 00100000000000000000000  --补码
	//整数，原，反，补相同
	//所以结果为010000001000100000000000000000000  --结果为1091567616
	printf("*pFloat的值为:%f\n", *pFloat);
	//以浮点数形式存进去，再以浮点是结果拿出来，结果是不会变化的
	//结果为9.000000
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
	printf("%d\n", sizeof(arr)); //7 主动放了一个\0，所以为7
	printf("%d\n", sizeof(arr + 0));  //4 首元素地址，所以还是地址
	printf("%d\n", sizeof(*arr));  //1 首元素的值，是char型的，大小为1
	printf("%d\n", sizeof(arr[1])); //1 
	printf("%d\n", sizeof(&arr)); // 4 取出整个数组的地址
	printf("%d\n", sizeof(&arr + 1)); //4 跳过整个数组
	printf("%d\n", sizeof(&arr[0] + 1)); //4 
}


#include<stdio.h>
int main()
{
	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr)); //7 主动放了一个\0，所以为7
	printf("%d\n", sizeof(arr + 0));  //4 首元素地址，所以还是地址
	printf("%d\n", sizeof(*arr));  //1 首元素的值，是char型的，大小为1
	printf("%d\n", sizeof(arr[1])); //1 
	printf("%d\n", sizeof(&arr)); // 4 取出整个数组的地址
	printf("%d\n", sizeof(&arr + 1)); //4 跳过整个数组
	printf("%d\n", sizeof(&arr[0] + 1)); //4 
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
	char* p = "abcdef";
	printf("%d\n", strlen(p));   //6 p为a的地址，看a后面有几个数字
	printf("%d\n", strlen(p + 1));  //5
	printf("%d\n", strlen(*p));  //error
	printf("%d\n", strlen(p[0]));  //error
	printf("%d\n", strlen(&p));    //未知数 &p和p中存的内容没有什么直接的关系
	printf("%d\n", strlen(&p + 1)); //未知数
	printf("%d\n", strlen(&p[0] + 1)); //5 取出了b的地址，结果为5 
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
		if(((n >> i) & 1) == 1)
		{
			count++;
		}
	}
	printf("%d",count);
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
	int a = 1;
	printf("%d\n", sizeof(a));  //4
	printf("%d\n", sizeof(int));   //4
	return 0;
}
//printf("%d\n",sizeof a);
//sizeof可以对变量省略括号，不能对类型省略括号


#include<stdio.h>
void test(int arr[])
{
	printf("%d\n", sizeof(arr));   //数组传参传过来的是首元素的地址，所以结果是4
	//要用指针接收
}
int main()
{
	int arr[10] = { 0 };
	test(arr);
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
	int a = 1;
	int b = 2;
	int c = (a > b, a = b + 10, a, b = a + 1);
	printf("%d\n", c);
	return 0;
	//结果是13，逗号表达式
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
	int i = 1;
	int ret = (++i) + (++i) + (++i);
	printf("%d", ret);
	printf("%d", i);
	return 0;
	//不同的编译器，可能会有不同的结果
}
//这段代码的第一个+在执行的时候，第二个+是否执行这是不确定的
//因为依靠操作符的优先级和结合性是无法决定第一个+和都三个前置++的先后顺序的


#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'A' && ch <= 'Z')
		{
			putchar(ch + 32);
		}
		else if (ch >= 'a' && ch <= 'z')
		{
			putchar(ch - 32);
		}
		else if (ch >= '0' && ch <= '9')
			continue;
	}
	return 0;
}


//打印乘法口诀表，行数和列数自己指定
#include<stdio.h>
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0 ; j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}


//逆序字符串
#include<stdio.h>
void Reverse(char arr[],int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}
int main()
{
	char arr[] = "hello world";
	int sz = sizeof(arr) / sizeof(arr[0]);
	Reverse(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%c", arr[i]);
	}
	return 0;
}


//获取一个数二进制序列中所有的偶数位和奇数位
//分别输出二进制序列
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	(void)scanf("%d", &n);
	//偶数位
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d", (n >> i) & 1);
	}
	printf("\n");
	//奇数位
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", (n >> i) & 1);
	}
	return 0;
}


//编程实现
//两个int(32位)整数m和n二进制表达式中
//有多少个bit不同
//输入例子
// 1999 2299
//输出例子 ：7
#include<stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int a = 0;
	int count = 0;
	(void)scanf("%d %d", &m, &n);
	a = m ^ n;
	for (int i = 0; i < 32; i++)
	{
		if (((a >> i) & 1) == 1)
			count++;
	}
	printf("%d", count);
	return 0;
}


/*
5位运动员参加了10m跳水比赛，有人让他们预测比赛结果
A选手说：B第二，我第三;
B选手说，我第二，E第四;
C选手说，我第一，D第二;
D选手说，C最后，我第三;
E选手说，我第四，A第一;
比赛结束后，每位选手都说对了一半，请编程确定比赛的名次
*/

/*
通过这个题，我们可以知道A,B,C,D,E都可能是第一名到第五名的名词，那么我们可以
通过把所有的可能罗列出来，然后看那种满足每人都说对了一半的情况
*/
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((b == 2) + (a == 3) == 1)
							&& ((b == 2) + (e == 4) == 1)
							&& ((c == 1) + (d == 2) == 1)
							&& ((c == 5) + (d == 3) == 1)
							&& ((e == 4) + (a == 1) == 1))
						{
							if (a * b * c * d * e == 120)
								printf("%d %d %d %d %d\n", a, b, c, d, e);
						}
					}
				}
			}
		}
	}
}


/*
日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为
四个嫌疑犯中的一个。以下为4个嫌犯的供词：
A说:不是我
B说:是C
C说:是D
D说:C在胡说
已知三个人说了真话，一个人说的是假话
现在请根据这些信息，写一个程序来确定到底谁是凶手
*/
#include<stdio.h>
int main()
{
	char killer = 0;
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
		{
			printf("killer is %c", killer);
		}
	}
	return 0;
}
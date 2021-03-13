#define _CRT_SECURE_NO_WARNINGS 1



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
#include<stdlib.h>
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
		printf("%d ", arr[i]);
	}
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
void Swap(int* pa, int* pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}
int main()
{
	int a = 0;
	int b = 0;
	(void)scanf("%d %d", &a, &b);
	Swap(&a, &b);
	printf("%d %d",a, b);
	return 0;
}


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


#include<stdio.h>
int main()
{
	int n = 0;
	int count = 0;
	(void)scanf("%d", &n);
	for(int i=0;i<32;i++)
	{
		if(((n>>i)&1)==1)
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
	int a = 10;
	printf("%p\n", &a);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 10;
	printf("%p\n", &a);   //003DF718
	printf("%x\n", &a);   //3df718
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


#include<stdio.h>
int main()
{
	int a = 10;
	int b = ++a;
	printf("%d\n", b);  //11
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


#include <stdio.h>
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;
	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
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
	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* ptr1 = (int*)(&aa + 1);
	//&数组名，代表的是整个数组，整个数组加1，位置来到了10的后面
	//然后再-1，位置来到了10，然后再解引用就得到10位置处的值
	//所以结果就为10
	int* ptr2 = (int*)(*(aa + 1));
	//首元素的地址加1，位置来到了第二行，然后进行解引用，相当于拿到了第二行
	//也就是拿到了6的地址，然后-1，到了5的地址处，然后解引用
	//得到了5的值，所以结果为5
	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
	return 0;
	//结果为 10 和 5 
}


#include<stdio.h>
int main()
{
	char* a[] = { "work","at","alibaba" };
	char** pa = a;
	pa++;
	printf("%s\n", *pa);
	return 0;
	//结果为at
	//a为指针数组
	//pa+1,跳过一个char*的大小
}
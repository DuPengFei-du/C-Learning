#define _CRT_SECURE_NO_WARNINGS 1



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
				Swap((char*)arr + j * width, (char*)arr + (j + 1) * width,width);
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
	c = Add(a, b);
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
	int num = 0;
	(void)scanf("%d", &num);
	printf("%d", num);
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
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
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
//上面代码的输出结果为
//c:      est     est.c
//主要是应为编译器将\t也当成了一个转义字符在使用，如过想要输出和printf语句中内容一样的东西，那么在\t的前面在加上一个\就行了


#include<stdio.h>
int main()
{
	printf("c:\\test\\test.c\n");
	return 0;
}
//输出的结果为
//c:\test\test.c


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
	int c = a & b;
	printf("%d", c);
	return 0;
	//结果为1，按位与的按位是按二进制，相同的为1，不同的为0
}


#include<stdio.h>
int main()
{
	int a = 10;
	int b = ++a;
	printf("%d\n", a);   //11
	printf("%d\n", b);   //11
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int max = 0;
	max = (a > b) ? a : b;
	printf("%d", max);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = (1, 2, 3, 4, 5);
	printf("%d\n", a);
	return 0;
}


#include<stdio.h>
void test()
{
	static int n = 1;   //n为局部变量
	n++;
	printf("%d ", n);
}
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		test();
	}
	return 0;
}
//打印的结果是2-11，用static修饰变量，创建了就不销毁了。


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
	printf("%s %d %f", (*ps).name, (*ps).age, (*ps).score);
	return 0;
}


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
	printf("%d", res);
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
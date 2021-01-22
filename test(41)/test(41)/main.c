#define _CRT_SECURE_NO_WARNINGS 1



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


//EOF为end of file
#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;
}
//用ctrl+z来停下来。


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	for (a = 1; a <= 9; a++)
	{
		for (b = 1; b <= a; b++)
		{
			printf("%d*%d=%2d ", a, b, a * b);
		}
		printf("\n");
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n");
	printf("%d", count);
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
//按二进制位，异或：相同为0，相异为1；
//异或不能解决除了整形以外类型的运算
//但是这种算法不存在有溢出的问题
//这段代码的可读性也比较差，一开始是看不懂的


#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			break;
		printf("%d ", i);
	}
	return 0;
}
//打印结果为1，2，3，4



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
	{
		int num = 10;
	}
	//printf("%d", num);
	return 0;
	//此时，这个程序会出错，num作用域中不包括有printf语句。
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
	int c = a | b;
	printf("%d", c);
	return 0;
	//结果为7
}


#include<stdio.h>
int main()
{
	int a = 10;
	int b = a++;
	printf("%d\n", a);  //11
	printf("%d\n", b);  //10
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
	int a = (int)3.14;
	printf("%d", a);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	int c = a && b;
	printf("%d", c);
	return 0;
}
//结果为1


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 5;
	int c = a || b;
	printf("%d", c);
	return 0;
}
//结果为1


#include<stdio.h>
int main()
{
	int a = (1, 2, 3, 4, 5);
	printf("%d\n", a);
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
	char c = 'w';
	int a = 10;
	int* pa = &a;
	char* pc = &c;
	printf("%d\n", sizeof(pa));  //4
	printf("%d\n", sizeof(pc));  //4
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
int main()
{
	int a = -10;
	//10000000000000000000000000001010  --原码
	//11111111111111111111111111110101  --反码
	//11111111111111111111111111110110  --补码
	//fffffff6               ---补码转换成16进制的样子
	//但是在内存中&a显示的结果是f6ffffff
}


//解题思路：
//我们可以通过把1存在内存中，然后通过看他的存储形式，我们来判断当前机器到底是大端还是小端
//1的16形式的格式为00000001
//如果存储形式是01000000那么就是小端
//如果存储形式是00000001那么就是大段
//我们可以通过读取第一个字节的内容，来判断到底是大端还是小端，想要读取一个整形的第一个字节，那么存储在char*类型的变量中就可以了。
#include<stdio.h>
int main()
{
	int a = 1;
	char* pa = (char*)& a;
	if (*pa == 1)
		printf("小端");
	else
		printf("大端");
	return 0;
}

//封装成一个函数
#include<stdio.h>
int check_system()
{
	int a = 1;
	char* pa = (char*)& a;
	if (*pa == 1)
		return 1;
	else
		return 0;
}
int main()
{
	int ret = check_system();
	if (ret == 1)
		printf("小端");
	else
		printf("大端");
	return 0;
}


#include<stdio.h>
int main()
{
	char a = -1;
	signed char b = -1;
	//char和signed char其实是一样得，所以前两个得结果一定是一样的
	//-1的补码为：11111111111111111111111111111111
	//保存到char中为11111111
	//反码为：11111110
	//原码为：10000001  --所以说前两个的结果为-1 和 -1
	//有符号的类型，高位所需要补的是符号位
	unsigned char c = -1;
	//c放在内存中 11111111---补码
	//又因为c是无符号数，所以给c的高位补0
	//00000000000000000000000011111111  -- 补码
	//又因为最高位是0，所以说为正数，正数的原，反，补相同
	//所以c的结果为255  8个1的结果为255
	printf("a=%d,b=%d,c=%d", a, b, c);
	//-1 -1 255
	return 0;
}


#include<stdio.h>
int main()
{
	char a = -128;
	//10000000000000000000000010000000   原码-- -128
	//11111111111111111111111101111111   反码
	//11111111111111111111111110000000   补码
	//但是只能存8个比特位，结果为10000000
	//需要进行整形提升
	//提升的时候需要看原来的符号位，全部补成1
	//结果为11111111111111111111111110000000  --补码
	//又因为是无符号数，所以原码，反码，补码全部相同
	//所以就得到了结果：4294967168
	printf("%u\n", a);
	return 0;
}


#include<stdio.h>
int main()
{
	char a[1000];
	int i;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d", strlen(a));
	//什么时候遇到\0，长度就是多少，参考char的范围的哪个圆圈
	//所以结果为255
	return 0;
}
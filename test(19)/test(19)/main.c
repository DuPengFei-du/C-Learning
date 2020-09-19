#define _CRT_SECURE_NO_WARNINS 1


#include<stdio.h>
int main()
{
	int i = 1;
	int n = 0;
	int sum = 1;
	(void)scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum *= i;
	}
	printf("%d", sum);
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 1;
	int n = 0;
	int ret = 1;
	int sum = 0;
	(void)scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret *= i;
		sum += ret;
	}
	printf("%d", sum);
	return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
	char password[20] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:>\n");
		(void)scanf("%s", password);
		if (0 == strcmp(password, "123456"))
		{
			printf("登录成功！\n");
			break;
		}
		else
		{
			printf("密码错误，请重新输入!\n");
		}
	}
	if (i == 3)
	{
		printf("密码错误，已经无法登录!\n");
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;
	case 2:n++;
	case 3:
		switch (n)
		{//switch允许嵌套使用
		case 1:	n++;
		case 2:m++; n++;	break;
		}
	case 4:m++; break;
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n);
	system("pause");
	return 0;
}
//结果是m=5，n=3；


#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			continue;
		printf("%d ", i);
		i++;
	}
	return 0;
}
//打印结果是1，2，3，4，4，4，4，4...死循环


#include<stdio.h>
int main()
{
	int count = 0;
	int j = 0;
	for(int i=100;i<=200;i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (j == i)
		{
			count++;
			printf("%d ", i);
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
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)
		k++;
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int key = 8;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > key)
			right = mid - 1;
		else if (arr[mid] < key)
			left = mid + 1;
		else
		{
			printf("找到了，下标为:%d", mid);
			break;
		}
	}
	return -1;
}


//猜数字游戏
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void menu()
{
	printf("***** 欢迎来到猜数字游戏！*****\n");
	printf("*****        1. play      *****\n");
	printf("*****        0. exit      *****\n");
	printf("***** 欢迎来到猜数字游戏！*****\n");
}
void game()
{
	int guess = 0;
	int ret = rand() % 100 + 1;
	while (1)
	{
		printf("请输入所要猜测的数字:>\n");
		(void)scanf("%d", &guess);
		if (ret > guess)
		{
			printf("猜小了!\n");
		}
		else if (ret < guess)
		{
			printf("猜大了!\n");
		}
		else
		{
			printf("猜对了!\n");
			break;
		}
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>\n");
		(void)scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏!\n");
			break;
		default:
			printf("输入错误，请重新输入!\n");
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
	unsigned int i;
	//无符号的数，是没有负数的
	//判断条件为i>=0，但是无符号的，i>=0是永恒成立的
	//所以结果为死循环
	for (i = 9; i >= 0; i--)
	{
		printf("%u\n", i);
	}
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


//计算器
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
	do
	{
		menu();
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


//利用函数指针数组实现计算器
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
	int (*p[5])(int x, int y) = { 0,Add,Sub,Mul,Div };
	do
	{
		menu();
		printf("请选择:>\n");
		(void)scanf("%d", &input);
		printf("请输入两个操作数:>\n");
		(void)scanf("%d %d", &x, &y);
		ret = p[input](x, y);
		printf("%d\n", ret);
	} while (input);
}
int main()
{
	test();
	return 0;
}
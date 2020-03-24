#define _CRT_SECURE_NO_WARNINGS 1


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
int check_system()
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
void test(int arr[3][5])
{

}
void test(int arr[][])
{
	//这种传参是不正确的，可以省略行，不可以省略列
}
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


//计算器
#include<stdio.h>
void menu()
{
	printf("**************************\n");
	printf("      欢迎来到计算器      \n");
	printf("****  1.Add   2.Sub   ****\n");
	printf("****  3.MUl   4.Div   ****\n");
	printf("****      0.exit      ****\n");
	printf("**************************\n");
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
			printf("请输入操作数:>\n");
			(void)scanf("%d %d", &x, &y);
			ret = Add(x, y);
			printf("%d\n", ret);
			break;
		case 2:
			printf("请输入操作数:>\n");
			(void)scanf("%d %d", &x, &y);
			ret = Sub(x, y);
			printf("%d\n", ret);
			break;
		case 3:
			printf("请输入操作数:>\n");
			(void)scanf("%d %d", &x, &y);
			ret = Mul(x, y);
			printf("%d\n", ret);
			break;
		case 4:
			printf("请输入操作数:>\n");
			(void)scanf("%d %d", &x, &y);
			ret = Div(x, y);
			printf("%d\n", ret);
			break;
		case 0:
			printf("退出计算器!\n");
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
void menu()
{
	printf("**************************\n");
	printf("      欢迎来到计算器      \n");
	printf("****  1.Add   2.Sub   ****\n");
	printf("****  3.MUl   4.Div   ****\n");
	printf("****      0.exit      ****\n");
	printf("**************************\n");
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
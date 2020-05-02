#include<stdio.h>
#include<assert.h>
void* my_memmove(void* destination, const void* source, int count)
{
	int i = 0;
	assert(destination != NULL);
	assert(source != NULL);
	if (destination < source)
	{
		//从前往后拷贝
		char* dest = (char*)destination;
		char* sour = (char*)source;
		for (i = 0; i < count; i++)
		{
			dest[i] = sour[i];
		}
	}
	else
	{
		while (count--)
		{
			*((char*)destination + count) = *((char*)source + count);
		}
	}
	return destination;
}
int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr1 + 2, arr1, 16);
	return 0;
}


//猜数字游戏的实现
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void menu()
{
	printf("******************************\n");
	printf("***  欢迎来到猜数字游戏！  ***\n");
	printf("***         1.play         ***\n");
	printf("***         0.exit         ***\n");
	printf("******************************\n");
}
void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;
	while (1)
	{
		printf("请输入猜测数字！\n");
		(void)scanf("%d", &guess);
		if (guess > ret)
			printf("猜大了！\n");
		else if (guess < ret)
			printf("猜小了！\n");
		else
		{
			printf("猜对了！\n");
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
			printf("退出猜数字游戏！\n");
			break;
		default:
			printf("选择错误，请重新选择!\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}


//goto语句 
//关机程序
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("你的电脑将在60s后关机，如果输入：你是猪，则取消关机!\n");
	(void)scanf("%s", input);
	if (0 == strcmp(input, "你是猪"))
	{
		system("shutdown -a");
	}
	else
		goto again;
	return 0;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
	(void)scanf("%s", input);
	if (0 == strcmp(input, "我是猪"))
	{
		system("shutdown -a");
	}
	else
	{
		printf("输入错误，请重新输入!\n");
		goto again;
	}
	return 0;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[] = { 0 };
	system("shutdown -s -t 60");
	//这是Windows系统下的一个关机命令
	while (1)
	{
		printf("你的电脑将在一分钟后关机，如果输入我是猪，就会取消关机！\n请输入：");
		scanf("%s", input);
		if (0 == strcmp(input, "我是猪"))
		{
			system("shutdown -a");//取消关机命令
			break;
		}
	}
	return 0;
}


struct Stu
{
	char name[20];
	int age;
	float score;
};
int main()
{
	return 0;
}


struct Stu
{
	char name[20];
	int age;
	float score;
}s1,s2;
int main()
{
	return 0;
}



struct 
{
	char name[20];
	int age;
	float score;
}s;
int main()
{
	return 0;
}
//匿名结构体只能用一次


struct
{
	char name[20];
	int age;
	float score;
}s;
struct
{
	char name[20];
	int age;
	float score;
}*ps;
int main()
{
	return 0;
}


struct Point
{
	int x;
	int y;
}p1;

struct Point p2;

int main()
{
	struct Point p;
	return 0;
}


//初始化
struct Point
{
	int x;
	int y;
}p1 = { 1,2 };

struct Point p2 = { 2,3 };

int main()
{
	struct Point p = { 3,4 };
	return 0;
}


struct S
{
	char c;
	int a;
	char c3;
};
struct S2
{
	int a;
	char c1;
	char c2;
};
int main()
{
	printf("%d\n", sizeof(struct S));
	printf("%d\n", sizeof(struct S2));
	return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "*************";
	char arr2[] = "hello world";
	strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}


#include<stdio.h>
#include<math.h>
int main()
{
	int n = 0;
	int k = 0;
	double ret = 0;
	(void)scanf("%d %d", &n, &k);
	ret = pow(n, k);
	printf("%lf", ret);
	return 0;
}


#include<stdio.h>
int Max(int x, int y)
{
	return x > y ? x : y;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	(void)scanf("%d %d", &a, &b);
	c = Max(a,b);
	printf("%d", c);
	return 0;
}


#include<stdio.h>
int is_prime(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int n = 0;
	int ret = 0;
	(void)scanf("%d", &n);
	ret = is_prime(n);
	if (ret == 1)
		printf("素数\n");
	else
		printf("不是素数\n");
	return 0;
}


#include<stdio.h>
int is_leapyear(int n)
{
	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
		return 1;
	else
		return 0;
}
int main()
{
	int n = 0;
	int ret = 0;
	(void)scanf("%d", &n);
	ret = is_leapyear(n);
	if (ret == 1)
		printf("闰年");
	else
		printf("不是闰年");
	return 0;
}


//打印一个无符号数字的每一位
#include<stdio.h>
void Print(int n)
{
	if (n > 9)
		Print(n / 10);
	printf("%d " ,n % 10);
}
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	Print(n);
	return 0;
}


//字符串长度，不调用strlen函数
#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)
{
	assert(str);
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen(str + 1);
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)
{
	int count = 0;
	assert(str);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
#include<assert.h>
int my_strlen(char* str)
{
	char* ret = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - ret;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int a = 0;
	int b = 0;
	(void)scanf("%d %d", &a, &b);
	Swap(&a, &b);
	printf("%d %d", a, b);
	return 0;
}


#include<stdio.h>
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
	return 0;
}
//打印的结果为4 3 2 1
//printf函数的返回值是字符的个数


//判断大小端的问题
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


#include<stdio.h>
int CheckSystem()
{
	int a = 1;
	char* pa = (char*)& a;
	return *pa;
}
int main()
{
	int a = 1;
	int ret = CheckSystem();
	if (ret== 1)
		printf("小端");
	else
		printf("大端");
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
	int a = 1;
	int ret = CheckSystem();
	if (ret== 1)
		printf("小端");
	else
		printf("大端");
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
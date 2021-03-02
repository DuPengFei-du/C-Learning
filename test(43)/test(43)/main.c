#define _CRT_SECURE_NO_WARNINGS 1



////一维数组的传参
//#include<stdio.h>
//void test(int arr[])
//{
//
//}
//void test(int arr[10])
//{
//
//}
//void test(int* arr)
//{
//
//}
//void test2(int* arr[20])
//{
//
//}
//void test(int** arr)
//{
//
//}
////上述的几种传参形式都是正确的，如果要按照数组的形式传递，那么就原模原样的传递就可以了。
////一维数组如果想用指针的形式，那么就用二级指针来接收参数，就可以了。
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}


//#include<stdio.h>
//void test(int arr[3][5])
//{
//
//}
//void test(int arr[][])
//{
//	//这种传参是不正确的，可以省略行，不可以省略列
//}
//void test(int arr[][5])
//{
//
//}
////总结:二维数组传参，函数形式的设计只能省略第一维的[],不能省略第二维的
////因为对一个二维数组，可以不知道有多少行，但是必须知道一行有多少个元素
////这样才会方便运算，同样，一样的道理，如果用数组接收参数，那么就原模原样的接收就可以了
//void test(int(*arr)[5])
//{
//
//}
//int main()
//{
//	int arr[3][5];
//	test(arr);
//}


//#include<stdio.h>
//void Print(int* p, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(p, sz);
//	return 0;
//}


//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("%p\n", &Add);   //证实了函数也是有地址的
//	int (*p)(int x, int y) = &Add;
//	int ret = (*p)(2, 3);   //函数的调用
//	//也可以写车： int ret=p(2,3);
//	//哪个*写不写都行，写几个都行
//	//(*p)是先找到这个函数，然后传参进行调用
//	//p是函数指针
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	//代码1
//	(*(void(*)())0)();
//
//	/*
//	首先，void(*)()为函数指针类型，其次void(*)()内放在括号中
//	形成了(void(*)()),我们都知道，一个类型放在括号中，是用来
//	强制类型转换的，(void(*)())又放在0前面，意思就是吧0转换成
//	函数指针类型，0本来的类型是int，我希望把0当成函数指针类型的这样的
//	一个函数的地址，所以我希望0这个地址处放的是一个无参，返回值类型
//	为void的函数，然后，既然是个地址，那么我就解引用一下
//	所以综上，上述是一场函数调用。
//	调用0位置处的函数，被调用的这个函数是无参的，返回值类型为void的类型
//	*/
//
//	//代码2
//	void (*signal(int, void(*)(int)))(int);
//	/*
//	这段代码整体来看是一个函数声明，其中signal为函数名，signal函数的第一个参数
//	为int类型，第二个参数类型为函数指针类型，有了函数名，有了参数
//	剩下的就是函数的返回值类型了，这个函数的返回值类型也是一个函数指针类型
//	*/
//	/*
//	但是又因为这个代码出现了两次函数指针类型，所以我们可以用typedef进行
//	类型重命名，即：
//	typedef void(*pfun_t)(int);
//	所以上述声明也可以变成
//	pfun_t signal(int,pfun_t);
//	*/
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	(void)scanf("%d %d", &a, &b);
//	if (a > b)
//		printf("%d", a);
//	else
//		printf("%d", b);
//	return 0;
//}


//#include<stdio.h>
//int max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	(void)scanf("%d %d", &a, &b);
//	c = max(a, b);
//	printf("%d", c);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int temp = 0;
//	(void)scanf("%d %d", &a, &b);
//	temp = a;
//	a = b;
//	b = temp;
//	printf("%d %d", a, b);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	(void)scanf("%d %d", &a, &b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	(void)scanf("%d %d", &a, &b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//	return 0;
//}


////判断一个数字是不是素数
//#include<stdio.h>
//int is_prime(int n)
//{
//	for (int i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	(void)scanf("%d", &n);
//	if (is_prime(n) == 1)
//		printf("素数\n");
//	else
//		printf("不是素数\n");
//	return 0;
//}


//#include<stdio.h>
//void Print(int n)
//{
//	if (n > 9)
//		Print(n / 10);
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	(void)scanf("%d", &n);
//	Print(n);
//	return 0;
//}


////求字符串长度
//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char* str)
//{
//	assert(str);
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
//int main()
//{
//	char arr[] = "hello world";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int sum = 1;
//	(void)scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	printf("%d", sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int sum = 0;
//	int ret = 1;
//	(void)scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char arr1[] = "hello world";
//	memset(arr1, 'x', 5);
//	printf("%s", arr1);
//	return 0;
//}


//#include<stdio.h>
//void Swap(int* x, int* y)
//{
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	(void)scanf("%d %d", &a, &b);
//	Swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}


//#include<stdio.h>
//int is_leapyear(int i)
//{
//	if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int n = 0;
//	(void)scanf("%d", &n);
//	if (is_leapyear(n) == 1)
//	{
//		printf("是闰年\n");
//	}
//	else
//	{
//		printf("不是闰年\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//void BinarySearch(int arr[], int sz)
//{
//	int key = 7;
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < key)
//			left = mid + 1;
//		else if (arr[mid] > key)
//			right = mid - 1;
//		else
//		{
//			printf("找到了,下标是:%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到\n");
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BinarySearch(arr, sz);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//	printf("%d\n", strlen("abcdef"));
//	return 0;
//}
////把一个函数的返回值作为另一个函数的参数


//#include<stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
////打印的结果为4 3 2 1
////printf函数的返回值是字符的个数


//#include<stdio.h>
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	int c = 0;
//	(void)scanf("%d", &n);
//	c = fib(n);
//	printf("%d\n", c);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	char* pa = (char*)& a;
//	if (*pa == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}


//#include<stdio.h>
//int CheckSystem()
//{
//	int a = 1;
//	char* pa = (char*)& a;
//	return *pa;
//}
//int main()
//{
//	int ret = CheckSystem();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}


//#include<stdio.h>
//int CheckSystem()
//{
//	union Un
//	{
//		int i;
//		char c;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	int ret = CheckSystem();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char a = 'w';
//	char* pc = &a;   //这个时候，pc称为字符指针，pc的类型为char*
//	char arr[10] = "abc";
//	char* pa = arr;   //arr作为数组名，他代表的是数组首元素的地址，pa的类型为char*
//	char* p = "abcdef";  //此时p只具有4个字节，但是abcdef不算\0有6个字节，显然放不下
//	//那么此时，p中存的就是"abcdef"中首个字母a的地址，地址用指针接收，刚好为4个字节
//	//上述常量表达式的结果就是首字符a的地址。
//}


//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	if (arr1 == arr2)
//		printf("arr1==arr2\n");
//	else
//		printf("arr1!=arr2\n");
//	return 0;
//	//打印结果为arr1!=arr2
//	//原因:因为arr1和arr2会开辟两块空间的大小，虽然都表示的是首字母a的地址
//	//但是两块空间的地址是不一样的，所以两块空间中a的地址自然也就是不一样的了。
//}


//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	//创建了一个数组，数组中存的是abcdef
//	const char* p = "abcdef";
//	//将字符串abcdef中首元素的地址，即a的地址，存在p中
//	arr1[2] = 'w';
//	//修改数组中的内容，是被允许的
//	*(p + 2) = 'w';        //p[2]
//	//p所指向的是一个常量字符串，常量字符串中的值是不可以被修改的
//	return 0;
//	//这个程序运行起来是会崩溃的，崩溃的主要原因在于，*(p+2)='w'
//	//这个语句是不正确的
//	//字符指针不仅仅用来存放字符的地址，还可能存放一个字符串的起始地址
//}


//#include<stdio.h>
//void Print1(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 1; i <= sz; i++)
//	{
//		printf("%d ", i);
//	}
//	printf("\n");
//}
//void Print2(int(*p)[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", (*p)[i]);
//		//首先找到数组，用(*p)找到数组，然后去访问第i个元素
//		//如果不带括号的话，那么p就会先和[]进行结合
//		//其实(*p)就等于是数组名然后[i]，就相当于是arr[i];
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print1(arr, sz);
//	Print2(&arr, sz);
//	return 0;
//}


//数组指针主要用于数组的传参
//#include<stdio.h>
//void Print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//}
//void Print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", (*(p+i))[j]);
//			printf("%d ", *(*(p + i) + j));
//			//*(p+i)相当于找到了第i行首元素的地址
//			//也可以写成p[i][j]
//			//其实p就相当于arr
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,3,4,5,6,7,4,5,6,7,8 };
//	Print1(arr, 3, 5);
//	Print2(arr, 3, 5);
//	//arr代表首元素的地址，对于二维数组来说，首元素的地址就是第一行的地址
//	//所以列标是很重要的
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[5];          //整形数组
//	int* parr1[10];      //指针数组
//	int(*parr2)[10];     //数组指针
//	int(*parr3[10])[5];  //存放数组指针的数组，可以存放10个这样的指针
//	//数组有10个对象，数组中存储对象的类型是数组指针
//	//5个整形元素的数组的地址 数组中每个元素的类型是int
//}


////一维数组的传参
//#include<stdio.h>
//void test(int arr[])
//{
//
//}
//void test(int arr[10])
//{
//
//}
//void test(int* arr)
//{
//
//}
//void test2(int* arr[20])
//{
//
//}
//void test(int** arr)
//{
//
//}
////上述的几种传参形式都是正确的，如果要按照数组的形式传递，那么就原模原样的传递就可以了。
////一维数组如果想用指针的形式，那么就用二级指针来接收参数，就可以了。
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}
//二维数组传参用数组指针接收


////利用函数指针数组优化计算器
//#include<stdio.h>
//void menu()
//{
//	printf("**********************\n");
//	printf("*** 欢迎来到计算器 ***\n");
//	printf("***  1.Add   2.Sub ***\n");
//	printf("***  3.Mul   4.Div ***\n");
//	printf("**********************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void test()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	int (*parray[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("请选择:>");
//		(void)scanf("%d", &input);
//		printf("情输入两个操作数:>\n");
//		(void)scanf("%d %d", &x, &y);
//		ret = parray[input](x, y);
//		printf("%d\n", ret);
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}
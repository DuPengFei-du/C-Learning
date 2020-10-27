#define _CRT_SECURE_NO_WARNINGS 1



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


////计算器的实现
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
//	do
//	{
//		menu();
//		printf("请选择:>\n");
//		(void)scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数:>\n");
//			(void)scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个操作数:>\n");
//			(void)scanf("%d %d", &x, &y);
//			ret = Sub(x, y);;
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个操作数:>\n");
//			(void)scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个操作数:>\n");
//			(void)scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误，请重新选择!\n");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}


////计算器的实现
////利用函数指针数组是西安一个计算器
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
//	int (*p[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("请选择:>\n");
//		(void)scanf("%d", &input);
//		printf("请输入两个操作数!\n");
//		(void)scanf("%d %d", &x, &y);
//		ret = p[input](x, y);
//		printf("%d\n", ret);
//	} while (input);
//}
//int main()
//{
//	test();
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
////1号程序员写的代码
//int Add(int x, int y)
//{
//	return x + y;
//}
////2号程序员写的代码
//int test(int (*pf)(int, int))
//{
//	//如果2号程序员想在他的内部调用Add函数的话，我可以在主函数中将Add函数的地址传递给2号程序员写的代码
//	//那么2号程序员写的代码，就要对Add函数的地址进行接收，利用函数指针(指向函数的指针)
//	//pf为指针变量
//	pf(2, 4);  //调用这个指针所指向的函数，此时被调用的函数就称为回调函数
//}
//int main()
//{
//	//1号程序员进行调用
//	//自己写的代码，自己直接调用，这种不被称为回调函数
//	int ret = Add(2, 3);
//	int res = test(Add);
//	printf("%d", res);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr1[10];
//	char arr2[5];
//	return 0;
//}
////[]中必须是常量或者常量表达式，不然就会报错


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	return 0;
//}
////没有被赋值的元素则默认为为0
////通过监视窗口来看


//#include<stdio.h>
//int main()
//{
//	char arr1[] = { 'a','b','c' };
//	char arr2[] = "abc";
//	printf("%s", arr1);
//	printf("%s", arr2);
//	return 0;
//}
////这两个数组的是不一样的
////arr1是不可以看成数组的，因为它没有\0，\0是字符串的结束标志
////如果没有\0是不可以看成字符串的
////arr2是可以看成字符串的，c后面还有一个隐藏的\0


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}
////每个元素地址之间差的值是4
////至于为什么差4，因为我是一个整形的数组，每个元素占有4个字节。
////一维数组在内存中是连续存储的


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;  //得到了首元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p===%p\n", &arr[i], p + i);
//	}
//	return 0;
//}
////这个代码就说明：p+i为下标为i的元素的地址
////*(p + i)为下标为i的元素的值


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ",*(p + i));
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr1[3][4]; //创建了一个三行四列的数组
//	char arr2[4][5];
//	double arr3[3][5];
//}


//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6 };//后面没有初始化的元素全部当0对待
//	int arr2[3][4] = { {1,2},{3,4},{5,6} };//第一行为1 2 0 0 第二行为3 4 0 0
//}


//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	return 0;
//}
////这两行之间的地址值的差值为40，刚好为数组的大小


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d", sizeof(arr));
//	return 0;
//}
////这个代码的结果是40


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
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


////快速排序
//#include<stdio.h>
//#include<stdlib.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int main()
//{
//	int arr[10] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
////1号程序员写的代码
//int Add(int x, int y)
//{
//	return x + y;
//}
////2号程序员写的代码
//int test(int (*pf)(int, int))
//{
//	//如果2号程序员想在他的内部调用Add函数的话，我可以在主函数中将Add函数的地址传递给2号程序员写的代码
//	//那么2号程序员写的代码，就要对Add函数的地址进行接收，利用函数指针(指向函数的指针)
//	//pf为指针变量
//	pf(2, 4);  //调用这个指针所指向的函数，此时被调用的函数就称为回调函数
//}
//int main()
//{
//	//1号程序员进行调用
//	//自己写的代码，自己直接调用，这种不被称为回调函数
//	int ret = Add(2, 3);
//	int res = test(Add);
//	printf("%d", res);
//	return 0;
//}


////模拟实现冒泡排序
////利用快速排序的思路
//#include<stdio.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void Swap(char* buf1, char* buf2, int width)
//{
//	for (int i = 0; i < width; i++)
//	{
//		char temp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = temp;
//		buf1++;
//		buf2++;
//	}
//}
//void my_BubbleSort(int* arr, int sz, int width, int (*cmp)(const void* e1, const void* e2))
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (cmp((char*)arr + j * width, (char*)arr + (j + 1) * width) > 0)
//			{
//				Swap((char*)arr + j * width, (char*)arr + (j + 1) * width, width);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_BubbleSort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
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
//int main()
//{
//	int n = 0;
//	int count = 0;
//	(void)scanf("%d", &n);
//	for (int i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//			count++;
//	}
//	printf("%d", count);
//}


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = a << 1;
//	//<<左移操作符
//	//左边丢弃，右边补0
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = -1;
//	int b = a << 1;
//	//整数在内存中存储的是二进制补码
//	//-1的在内存中存储，就是存储32个1，32个1为-1的补码。
//	//正数的原，反，补码相同
//	//负数：写先原码，最高位为符号位，负数的最高位为1，负数的符号位为1，正数为0
//	//反码：在原码的基础上，符号位不动，其他位按位取反，得到反码
//	//反码+1得到补码
//	printf("%d\n", b);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = -1;
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//	//采用的是算数右移
//}


//#include<stdio.h>
//int main()
//{
//	int a = 3;   //011
//	int b = 5;   //101
//	int c = a & b;    //001
//	printf("%d\n", c);
//	return 0;
//	//结果是1
//}


//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a | b;
//	printf("%d\n", c);
//	return 0;
//}
////结果为7


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	a = a + 2;
//	a += 2;
//	printf("%d\n", a);
//	return 0;
//}
////其他的诸如此类都是这样的


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = !a;
//	printf("%d\n", b);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);   //003DF718
//	printf("%x\n", &a);   //3df718
//	return 0;
//}
////%x表示用16进制打印，如果用16进制打印，前面就会少00


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);      //首元素的地址
//	printf("%p\n", &arr[0]); //首元素的地址
//	printf("%p\n", &arr);    //数组的地址
//	return 0;
//}
////三个的值均为00FBFCF0


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	printf("%p\n", &arr);   //数组的地址
//	printf("%p\n", &arr + 1); //数组的地址加1
//	return 0;
//}
////数组的地址加1跳过的是整个数组


//#include<stdio.h>
//void test(int arr[])
//{
//	printf("%d\n", sizeof(arr));   //数组传参传过来的是首元素的地址，所以结果是4
//	//要用指针接收
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//}
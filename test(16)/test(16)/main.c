#define _CRT_SECURE_NO_WARNINGS 1



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
//int MAX(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	(void)scanf("%d %d", &a,&b);
//	c = MAX(a, b);
//	printf("%d", c);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	(void)scanf("%d %d", &a, &b);
//	int temp = a;
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
//	int ret = 0;
//	ret = is_prime(n);
//	if (ret == 1)
//		printf("素数\n");
//	else
//		printf("不是素数\n");
//	return 0;
//}


////打印每一位
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


//#include<stdio.h>
//int main()
//{
//	char arr1[] = "hello world";
//	memset(arr1, 'x', 5);
//	printf("%s", arr1);
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
//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//	printf("%d\n", strlen("abcdef"));
//	return 0;
//}
////把一个函数的返回值作为另一个函数的参数


//#include<stdio.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d", len);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	//数组也是一种自定义类型
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));                //40
//	printf("%d\n", sizeof(int[10]));          //40
//	int a = 10;
//	sizeof(int);  //可以的
//	sizeof(a);    //可以的
//	//那么问题来了，数组的类型是什么呢？
//	//数组的类型，就是数组去掉数组名剩下的部分
//	//比如上述对数组的声明 int arr[10],那么数组的类型就是int [10]
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
//	char* pa = (char*)&a;
//	return *pa;
//}
//int main()
//{
//	int ret = CheckSystem();
//	if (ret==1)
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
//struct Stu
//{
//	char name[20];
//	int age;
//};
//union Un
//{
//	int i;
//	char c;
//};    //联合体类型
//int main()
//{
//	union Un u = { 0 };   //u为联合体对象
//	printf("%d\n", sizeof(u));   //结果为4
//	printf("%p\n", &u);
//	printf("%p\n", &(u.i));
//	printf("%p\n", &(u.c));
//	//三个的地址是一模一样的，说明i和c占用同一块空间
//	//所以联合体又叫共用体，共用体的意思就是我的成员要共用同一块空间
//	//那么我给i里面放东西c就会发生变化
//	//我给c里面放东西，i也会发生变化
//	//c是i占的四个字节中的第一个字节，这也解决了大小端算法的另一种解法问题
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000   原码-- -128
//	//11111111111111111111111101111111   反码
//	//11111111111111111111111110000000   补码
//	//但是只能存8个比特位，结果为10000000
//	//需要进行整形提升
//	//提升的时候需要看原来的符号位，全部补成1
//	//结果为11111111111111111111111110000000  --补码
//	//又因为是无符号数，所以原码，反码，补码全部相同
//	//所以就得到了结果：4294967168
//	printf("%u\n", a);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	//什么时候遇到\0，长度就是多少，参考char的范围的哪个圆圈
//	//所以结果为255
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
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	if (p1 == p2)
//		printf("p1==p2");
//	else
//		printf("p1!=p2");
//	return 0;
//	//打印结果为p1==p2
//	//虽然把字符串abcdef地址存在了p1和p2当中，但是两个字符串是一样的
//	//都是abcdef，所以首元素a的地址自然也是一样的了
//	//abcdef为常量字符串，所以说他是不能被改变的，其实也只会出现一次abcdef
//	//但是p1的地址和p2的地址是绝对不一样的。
//}


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	char c = 'w';
//	int* p1 = &a;
//	char* p2 = &c;
//	int arr[10] = { 0 };
//	char ch[5] = { 0 };
//	char* arr2[6] = { 0 };
//	//数组指针就是指向数组的指针
//	//arr  表示数组首元素的地址
//	//&arr[0]表示数组首元素的地址
//	//&arr 表示数组的地址
//	int(*p)[10] = &arr;  //数组的地址 
//	char(*pc)[5] = &ch;
//	char* (*pa)[6] = &arr2;
//	return 0;
//}


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
//int my_strlen(const char* str)
//{
//
//}
//int main()
//{
//	int* arr[10];  //整形指针数组
//	char* arr[5];  //字符指针数组
//	int (*ps)(const char*) = &my_strlen;
//	int (*ps2)(const char*) = &my_strlen;
//	int (*ps3)(const char*) = &my_strlen;
//	int (*pArr[3])(const char*) = &my_strlen;   //函数指针数组
//	//存放函数指针的数组
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
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
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
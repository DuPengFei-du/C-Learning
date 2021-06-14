#define _CRT_SECURE_NO_WARNINGS 1



//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdlib.h>
//#include<stdio.h>
////<stdio.h>为标准的输入输出函数头文件
////写一个C语言的代码其实就是在写后缀名为.c(原文件)或.h文件(头文件)
//int main()
//{
//	//printf为输入输出的函数--库函数(不是自己实现的，需要引入一个头文件)
//	//双引号内部打印的是字符串
//	//简单的输出一句话，可以用printf函数
//	printf("hello world\n");
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	(void)scanf("%d", &num);
//	printf("%d", num);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(int));  //4
//	printf("%d\n", sizeof(char)); //1
//	printf("%d\n", sizeof(short)); //2
//	printf("%d\n", sizeof(long));  //4/8
//	printf("%d\n", sizeof(long long));  //8
//	printf("%d\n", sizeof(float));  //4
//	printf("%d\n", sizeof(double));  //8
//	return 0;
//}
////类型的大小单位都是字节
////计算机中的单位 
////bit(位) byte(字节) kbyte(kb) mb gb tb pb  
////前两个单位之间的换算单位是8，后面的单位之间的是1024


//#include<stdio.h>
//int main()
//{
//	{
//		int num = 10;
//	}
//	printf("%d", num);
//	return 0;
//	//此时，这个程序会出错，num作用域中不包括有printf语句。
//}


//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c',0 };
//	printf("%s\n", "abc");
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//	//三种打印的结果都是abc
//	//如果arr2后面不加0的话，那么打印结果就会是再abc的后面还会出现烫烫烫的字符
//	//因为如果不加0的话，字符串就会并没有结束，只有加了0或者\0才会停止打印
//	//烫烫烫背后的真实东西其实是0xcccccc
//	//由此可以看来\0对字符串来说是非常重要的
//	//字符串是\0需要的结束标志的符号；
//}


//#include<stdio.h>
//int main()
//{
//	printf("c:\test\test.c\n");
//	return 0;
//}
////上面代码的输出结果为
////c:      est     est.c
////主要是应为编译器将\t也当成了一个转义字符在使用，如过想要输出和printf语句中内容一样的东西，那么在\t的前面在加上一个\就行了


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	printf("%d\n", 10);
//	printf("%d\n", strlen("abc"));
//	printf("%d\n", strlen("c:\test\47\test.c"));
//	return 0;
//	//其中，第三个printf语句的输出结果为13，主要的陷阱就在于\47
//	//这其中的本质还是在考察对于转义字符的理解
//	//\ddd也为转义字符，其中ddd表示1-3个八进制的数字，这三个东西统一的看成一个字符，所以说长度为1.
//	//\xddd  ddd表示3个16进制数字
//}


////如何在频幕上打印一个单引号
//#include<stdio.h>
//int main()
//{
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int input = 0;
//	printf("要学习吗？ (1/0)\n");
//	(void)scanf("%d", &input);
//	if (input == 0)
//	{
//		printf("放弃学习\n");
//	}
//	else if (input == 1)
//	{
//		printf("好的offer\n");
//	}
//	return 0;
//}


////写一个两个数加法的函数
//#include<stdio.h>
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	(void)scanf("%d %d", &a, &b);
//	c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	printf("\n");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
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
//#include<stdlib.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


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
//void My_BubbleSort(int* arr, int sz, int width, int (*cmp_int)(const void* e1, const void* e2))
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (cmp_int((char*)arr + j * width, (char*)arr + (j + 1) * width) > 0)
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
//	My_BubbleSort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


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
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);
//	while (*str)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//int my_strlen(char* str)
//{
//	assert(str);
//	char* ret = str;
//	while(*str)
//	{
//		str++;
//	}
//	return str - ret;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* dest, const char* source)
//{
//	assert(dest);
//	assert(source);
//	char* ret = dest;
//	while (*dest++ = *source++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr[20] = { 0 };
//	char arr2[] = "abcdef";
//	my_strcpy(arr, arr2);
//	printf("%s", arr);
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//char* my_strcat(char* dest, const char* source)
//{
//	assert(dest);
//	assert(source);
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *source++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr[20] = "ghj";
//	char arr2[] = "abcdef";
//	my_strcat(arr, arr2);
//	printf("%s", arr);
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//int main()
//{
//	char arr[20] = "ghj";
//	char arr2[] = "abcdef";
//	int ret=my_strcmp(arr, arr2);
//	printf("%d",ret);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char arr[20] = "abcdef";
//	int len = strlen(arr);
//	printf("%d", len);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abc";
//	if (strlen(arr2) - strlen(arr1) > 0)
//		printf("arr2>arr1");
//	else
//		printf("arr2<arr1");
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abcdef";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}


////模拟实现strcpy
////字符串的拷贝
//#include<stdio.h>
//void my_strcpy(char* dest, char* source)//用指针接收
//{
//	while (*source != '\0')
//	{
//		*dest = *source;
//		dest++;
//		source++;
//	}
//	*dest = *source;
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello word";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[20] = "Hello";
//	char arr2[] = " world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "bdefetfsf";
//	char arr2[] = "abc";
//	int ret = strcmp(arr1, arr2);
//	printf("%d", ret);
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > * str2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}
//int main()
//{
//	char arr1[] = "bedfwseg";
//	char arr2[] = "abc";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d", ret);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdlib.h>
//#include<stdio.h>
////<stdio.h>为标准的输入输出函数头文件
////写一个C语言的代码其实就是在写后缀名为.c(原文件)或.h文件(头文件)
//int main()
//{
//	//printf为输入输出的函数--库函数(不是自己实现的，需要引入一个头文件)
//	//双引号内部打印的是字符串
//	//简单的输出一句话，可以用printf函数
//	printf("hello world\n");
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int main()
////main函数是主函数，是函数的入口
//{
//	printf("hehe\n");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	(void)scanf("%d", &num);
//	printf("%d", num);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(int));  //4
//	printf("%d\n", sizeof(char)); //1
//	printf("%d\n", sizeof(short)); //2
//	printf("%d\n", sizeof(long));  //4/8
//	printf("%d\n", sizeof(long long));  //8
//	printf("%d\n", sizeof(float));  //4
//	printf("%d\n", sizeof(double));  //8
//	return 0;
//}
////类型的大小单位都是字节
////计算机中的单位 
////bit(位) byte(字节) kbyte(kb) mb gb tb pb  
////前两个单位之间的换算单位是8，后面的单位之间的是1024


//#include<stdio.h>
//int main()
//{
//	char ch = 'w';
//	short age = 10;
//	float weight = 55.5;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	(void)scanf("%d %d", &a, &b);
//	c = a + b;
//	printf("%d ", c);
//	return  0;
//}


//#include<stdio.h>
//int main()
//{
//	int num = 10;
//	printf("%d", num);
//	return 0;
//	//在这个程序中num的值是可以正常打印出来的
//	//因为num是局部变量，正好printf语句也处在num的作用域中，所以是可以正常打印出来的。
//}


//#include<stdio.h>
//int main()
//{
//	{
//		int num = 10;
//	}
//	printf("%d", num);
//	return 0;
//	//此时，这个程序会出错，num作用域中不包括有printf语句。
//}


//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};


//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c',0 };
//	printf("%s\n", "abc");
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//	//三种打印的结果都是abc
//	//如果arr2后面不加0的话，那么打印结果就会是再abc的后面还会出现烫烫烫的字符
//	//因为如果不加0的话，字符串就会并没有结束，只有加了0或者\0才会停止打印
//	//烫烫烫背后的真实东西其实是0xcccccc
//	//由此可以看来\0对字符串来说是非常重要的
//	//字符串是\0需要的结束标志的符号；
//}


//#include<stdio.h>
//int main()
//{
//	printf("c:\test\test.c\n");
//	return 0;
//}
////上面代码的输出结果为
////c:      est     est.c
////主要是应为编译器将\t也当成了一个转义字符在使用，如过想要输出和printf语句中内容一样的东西，那么在\t的前面在加上一个\就行了
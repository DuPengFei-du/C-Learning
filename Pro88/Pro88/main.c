#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello world";
	strcpy(arr1, arr2);
	printf("%s", arr1);
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
int MAX(int x, int y)
{
	return x > y ? x : y;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	(void)scanf("%d %d", &a, &b);
	c = MAX(a, b);
	printf("%d", c);
	return 0;
}


#include<stdio.h>
int main()
{
	int x = 0;
	int y = 0;
	(void)scanf("%d %d", &x, &y);
	x = x + y;
	y = x - y;
	x = x - y;
	printf("%d %d", x, y);
	return 0;
}


#include<stdio.h>
int main()
{
	int x = 0;
	int y = 0;
	(void)scanf("%d %d", &x, &y);
	x = x ^ y;
	y = x ^ y;
	x = x ^ y;
	printf("%d %d", x, y);
	return 0;
}


#include<stdio.h>
void Swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
int main()
{
	int x = 0;
	int y = 0;
	(void)scanf("%d %d", &x, &y);
	Swap(&x, &y);
	printf("%d %d", x, y);
	return 0;
}


//写一个函数判断是不是素数
#include<stdio.h>
int is_Prime(int n)
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
	(void)scanf("%d", &n);
	if (is_Prime(n) == 1)
		printf("素数");
	else
		printf("不是素数");
	return 0;
}


#include<stdio.h>
void Print(int n)
{
	if (n > 9)
		Print(n / 10);
	printf("%d ", n % 10);
}
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	Print(n);
	return 0;
}


//求字符串的长度
#include<stdio.h>
int my_strlen(const char* str)
{
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen(str + 1);
}
int main()
{
	char arr[] = "abcedf";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
int my_strlen(const char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return count;
}
int main()
{
	char arr[] = "abcedf";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
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
	char arr[] = "abcedf";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
int is_prime(int i)
{
	int j = 0;
	for (j = 2; j < i; j++)
	{
		if (i % j == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	if (is_prime(n) == 1)
	{
		printf("是素数\n");
	}
	else
	{
		printf("不是素数\n");
	}
	return 0;
}


#include<stdio.h>
int is_leapyear(int i)
{
	if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		return 1;
	else
		return 0;
}
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	if (is_leapyear(n) == 1)
	{
		printf("是闰年\n");
	}
	else
	{
		printf("不是闰年\n");
	}
	return 0;
}


#include<stdio.h>
void BinarySearch(int arr[], int sz)
{
	int key = 7;
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < key)
			left = mid + 1;
		else if (arr[mid] > key)
			right = mid - 1;
		else
		{
			printf("找到了,下标是:%d", mid);
			break;
		}
	}
	if (left > right)
		printf("找不到\n");
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	BinarySearch(arr, sz);
	return 0;
}


#include<stdio.h>
void new_line()
{
	printf("hehe\n");
}
void three_line()
{
	for (int i = 0; i < 3; i++)
	{
		new_line();
	}
}
int main()
{
	three_line();
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
	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr)); //7 主动放了一个\0，所以为7
	printf("%d\n", sizeof(arr + 0));  //4 首元素地址，所以还是地址
	printf("%d\n", sizeof(*arr));  //1 首元素的值，是char型的，大小为1
	printf("%d\n", sizeof(arr[1])); //1 
	printf("%d\n", sizeof(&arr)); // 4 取出整个数组的地址
	printf("%d\n", sizeof(&arr + 1)); //4 跳过整个数组
	printf("%d\n", sizeof(&arr[0] + 1)); //4 
}


#include<stdio.h>
int main()
{
	char* p = "abcdef";
	printf("%d\n", strlen(p));   //6 p为a的地址，看a后面有几个数字
	printf("%d\n", strlen(p + 1));  //5
	printf("%d\n", strlen(*p));  //error
	printf("%d\n", strlen(p[0]));  //error
	printf("%d\n", strlen(&p));    //未知数 &p和p中存的内容没有什么直接的关系
	printf("%d\n", strlen(&p + 1)); //未知数
	printf("%d\n", strlen(&p[0] + 1)); //5 取出了b的地址，结果为5 
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
	int arr1[10];
	char arr2[5];
	return 0;
}
//[]中必须是常量或者常量表达式，不然就会报错


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5 };
	return 0;
}
//没有被赋值的元素则默认为为0
//通过监视窗口来看


#include<stdio.h>
int main()
{
	char arr1[] = { 'a','b','c' };
	char arr2[] = "abc";
	printf("%s", arr1);
	printf("%s", arr2);
	return 0;
}
//这两个数组的是不一样的
//arr1是不可以看成数组的，因为它没有\0，\0是字符串的结束标志
//如果没有\0是不可以看成字符串的
//arr2是可以看成字符串的，c后面还有一个隐藏的\0


#include<stdio.h>
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("&arr[%d]=%p\n", i, &arr[i]);
	}
	return 0;
}
//每个元素地址之间差的值是4
//至于为什么差4，因为我是一个整形的数组，每个元素占有4个字节。


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr)/ sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;  //得到了首元素的地址
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%p===%p\n", &arr[i], p + i);
	}
	return 0;
}
//这个代码就说明：p+i为下标为i的元素的地址
//*(p + i)为下标为i的元素的值


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int arr1[3][4]; //创建了一个三行四列的数组
	char arr2[4][5];
	double arr3[3][5];
}


#include<stdio.h>
int main()
{
	int arr[3][4] = { 1,2,3,4,5,6 };//后面没有初始化的元素全部当0对待
	int arr2[3][4] = { {1,2},{3,4},{5,6} };//第一行为1 2 0 0 第二行为3 4 0 0
}


#include<stdio.h>
int main()
{
	int arr[3][4] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[3][4] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
		}
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int i = 0;
	int j = 0;
	int* p = &arr[0][0];
	for (i = 0; i < 12; i++)
	{
		printf("%d ", *(p + i));
	}
	return 0;
}


#include<stdio.h>
void BubbleSort(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int i = 0;
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


#include<stdio.h>
void BubbleSort(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//假设已经有序
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;
			}
		}
		if (flag == 1)
			break;
	}
}
int main()
{
	int i = 0;
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
//定义一个flag的变量


#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%d", sizeof(arr));
	return 0;
}
//这个代码的结果是40


#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%p\n", &arr);
	printf("%p\n", &arr + 1);
	return 0;
}
//这两行之间的地址值的差值为40，刚好为数组的大小
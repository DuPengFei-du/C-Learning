#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	//printf-输出函数-库函数
//	printf("hehe\n");
//	return 0;
//}
//int main(void)
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d", num);
//	return 0;
//}

//计算类型的大小
//int main(void)
//{
//	printf("%d", sizeof(char));
//	printf("%d", sizeof(short));
//	printf("%d", sizeof(int));
//	printf("%d", sizeof(long));
//	printf("%d", sizeof(long long));
//	printf("%d", sizeof(float));
//	printf("%d", sizeof(double));
//	return 0;
//}

//int main(void)
//{
//	short age = 10;
//	age = 20;
//	printf("%d", age);
//}
//int val = 20; 
//int main(void)
//{
//	int val = 10;
//	printf("%d", val);//局部变量优先
//	return 0;
//}
//int main(void)
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d %d", &num1, &num2);
//	sum = num1 + num2;
//	printf("%d", sum);
//	return 0;
//}

//int main(void)
//{
//	int num = 10;
//	printf("num=%d", num);
//	return 0;
//}
//int num = 10;
//int main(void)
//{
//	{
//		printf("%d", num);
//	}
//	printf("%d", num);
//	return 0;
//}

//int main(void)
//{
//	int num = 10;
//	num = 20;
//	printf("%d", num);
//	return 0;
//}

//int main(void)
//{
//	printf("\a");
//	return 0;
//}

//int main(void)
//{
//	printf("加入比特\n");
//	int line = 0;
//	while (line < 20000)
//	{
//		line++;
//		printf("我要继续敲代码\n");
//	}
//	if (line > 20000)
//		printf("nb\n");
//	return 0;
//}

//int Add(x, y)
//	{
//		int sum = 0;
//		sum = x + y;
//		return sum;
//	}
//int main()
//{
//	int x=0;
//	int y=0;
//	int sum = 0;
//	scanf("%d %d", &x, &y);
//	sum = Add(x, y);
//	printf("%d", sum);
//	return 0;
//}

//int main(void)
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 1; i <= 10;i++)
//	{
//	printf("%d ", i);
//    }
//	return 0;
//}

//int main(void)
//{
//	int a = 15;
//	int b = a << 1;
//	//移位操作符移动的是补码二进制位 
//	//00000000000000000000000000001111-原码
//	//存在内存中的是补码，方便计算
//	printf("%d", b);
//	return 0;
//}
//int main(void)
//{
//	int a = 10;
//	printf("%d", !a);
//	return 0;
//}
//int main(void)
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//	printf("%d", b);
//	return 0;
//}
//int main(void)
//{
//	int a = (int)3.14;
//	printf("%d", a);
//	return 0;
//}
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max=a > b ? a : b;
//	printf("%d", max);
//	return 0;
//}
//int main(void)
//{
//	int arr[10] = { 0 };
//	arr[4] = 5;
//	return 0;
//}
//int main()
//{
//	register int a = 10;//a定义为寄存器变量
//	//起到一个建议的作用，前后顺序编译器说了算
//	return 0;
//}

//
//void test()
//{
//	int n = 1;
//	n++;
//	printf("%d ", n);
//}
//int main(void)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();//2222222222 
//	}
//	return 0;
//}
//#include<stdio.h>
//int Add(x, y)
//	{
//		int sum = 0;
//		sum = x + y;
//		return sum;
//	}
//int main()
//{
//	int x=0;
//	int y=0;
//	int sum = 0;
//	scanf("%d %d", &x, &y);
//	sum = Add(x, y);
//	printf("%d", sum);
//	return 0;
//}
//sizeof(array) / sizeof(arr[0]);
//#define MAX 100
//int main(void)
//{
//	int a = MAX;
//	printf("%d", MAX);
//	return 0;
//}
//#define ADD(X,Y) X+Y
//int main(void)
//{
//	printf("%d\n", ADD(2, 3));
//	return 0;
//}

//int main(void)
//{
//	int a = 10;
//	printf("%p", &a);
//	return 0;
//}
//int main(void)
//{
//	int num = 10;
//	int *p = &num;
//	*p = 20;
//	printf("%d", num);
//	return 0;
//}
//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//
//};
//int main()
//{
//	struct Stu s = { "张三",20,60.0f };
//	struct Stu* ps = &s;
	//printf("%s %d %f\n", ps->name, ps->age, ps->score);
	/*printf("%s %d %f\n", (*ps).name, (*ps).age, (*ps).score);*///地址解引用了一下;
	/*printf("name:%s\n", s.name);
	printf("age:%d\n", s.age);
	printf("score:%f", s.score);*/
	//	return 0;
	//}
	//int main(void)
	//{
	//	int a = 0;
	//	int b = 2;
	//	if (a == 1)
	//		if (b == 2)
	//			printf("hehe\n");
	//		else
	//			printf("haha\n");
	//	return 0;
	//
	//int main()
	//{
	//	int coding = 0;
	//	printf("你会去敲代码吗\n");
	//	scanf("%d", &coding);
	//	if (coding == 1)
	//	{
	//		printf("坚持，你就会有好的offer\n");
	//	}
	//	else
	//	{
	//		printf("放弃，回家卖红薯\n");
	//	}
	//	return 0;
	//}

	//判断一个数是否为奇数
	//int main(void)
	//{
	//	int a;
	//	scanf("%d", &a);
	//	if (a % 2 == 1)
	//		printf("a 为奇数\n");
	//	else
	//	{
	//		printf("a 为偶数\n");
	//	}
	//	return 0;
	//}
	//int main(void)
	//{
	//	int a = 1;
	//	for(a=1;a<=100;a++)
	//	{
	//		if (a % 2 == 1)
	//		{
	//			printf("%d ", a);
	//		}
	//	}
	//	return 0;
	//}
	//int main(void)
	//{
	//	int i = 1;
	//	while (i<=10)
	//	{
	//		printf("%d ", i);
	//		i++;
	//	}
	//	return 0;
	//}

	//#include<stdio.h> 
	//	int main()
	//	{
	//		int i, j;
	//		for (i = 100; i <= 200; i++)
	//		{
	//			for (j = 2; j <= i - 1; j++)
	//			{
	//				if (i % j == 0)
	//					break;//如果能整除就跳出该次循环，避免多余运算
	//			}
	//			if (j == i)//该条件代表没有整除。
	//				printf("%d ", i);
	//		}
	//		printf("\n");
	//		system("pause");
	//		return 0;
	////	}
	//
	//int main(void)
	//{
	//	int a, b;//a和b分别表示行数和列数；
	//	for (a = 1; a <= 9; a++)
	//	{
	//		for (b = 1; b <= a; b++)
	//			printf("%d*%d=%2d ", a, b, a * b);
	//		printf("\n");
	//	}
	//	printf("\n");
	//	return 0;
	//}
	//int main(void)
	//{
	//	int a = 1000;
	//	for (a = 1000; a <= 2000; a++)
	//	{
	//		if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
	//			printf("%d ",a);
	//	}
	//	return 0;
	//}
	//交换两个数的值
	//int main(void)
	//{
	//	int a, b;
	//	scanf("%d %d", &a, &b);
	//	printf("%d %d", b, a);
	//	return 0;
	//}
	//int main(void)
	//{
	//	int a, b;
	//	scanf("%d %d", &a, &b);
	//	int temp = a;
	//	a = b;
	//	b = temp;
	//	printf("%d %d", a, b);
	//	return 0;
	//}
	//int main(void)
	//{
	//	int a, b;
	//	scanf("%d %d", &a, &b);
	//	a = a + b;
	//	b = a - b;
	//	a = a - b;
	//	printf("%d %d", a, b);
	//	return 0;//存在溢出的问题
	//}
	//int main(void)
	//{
	//	int a,b;
	//	scanf("%d %d", &a, &b);
	//	a = a ^ b;
	//	b = a ^ b;
	//	a = a ^ b;
	//	printf("%d %d",a, b);
	//	return 0;
	//}
	//int main(void)
	//{
	//	int MAX;
	//	int i = 0;
	//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//	MAX = arr[0];
	//	for(i=0;i<10;i++)
	//		if (arr[i] > arr[0])
	//		{
	//			MAX = arr[i];
	//		}
	//	printf("%d", MAX);
	//	return 0;
	//}
	//int main(void)
	//{
	//	int a, b, c;
	//	scanf("%d %d %d", &a, &b, &c);
	//	if (a > b && b > c)
	//		printf("%d %d %d", a, b, c);
	//	if (a > c && c > b)
	//		printf("%d %d %d", a, c, b);
	//	if (b > a && a > c)
	//		printf("%d %d %d", b, a, c);
	//	if (b > c && c > a)
	//		printf("%d %d %d", b, c, a);
	//	if (c > a && a > b)
	//		printf("%d %d %d", c, a, b);
	//	if (c > b && b > a)
	//		printf("%d %d %d", c, b, a);
	//	return 0;
	//}
	//void Swap(int *px,int *py)
	//{
	//	int tmp = *px;
	//	*px=*py;
	//	*py = tmp;
	//}
	//int main(void)
	//{
	//	int  a = 1;
	//	int  b = 2;
	//	int  c = 3;
	//	if (a < c)
	//	{
	//		Swap(&a, &c);
	//	}
	//	if (b < c)
	//	{
	//		Swap(&b, &c);
	//	}
	//		if (a < b)
	//		{
	//			Swap(&a, &b);
	//		}
	//		printf("%d %d %d", a, b, c);
	//return 0;
	//}


	//求两个数的最大公约数
	//int main(void)
	//{
	//	int a;
	//	int b;
	//	int c;
	//	scanf("%d %d", &a, &b);
	//	while (c = a % b)
	//	{
	//		a = b;
	//		b = c;
	//	}
	//	printf("%d", b);
	//	return 0;
	//}
#include<stdio.h>
//int main()
//{	
//	int x, y, z, m, n;	
//	printf("请输入两个数：");	
//	scanf_s("%d%d", &x, &y);
//	m = x, n = y;	
//	while (y != 0)	
//	{		
//		z = x%y;
//		x = y;	
//		y = z;	
//	}	
//	printf("最大公约数是: %d\n", x);
//	printf("最小公倍数是: %d\n", m * n / x);
//	system("pause");	
//	return 0;
//}
//int main(void)
//{
//	int i = 1;//初始化
//	for (i = 1; i <= 10; i++)//判断
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main(void)
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d", i);//1,2,3,4
//	}
//	return 0;
//}
//int main(void)
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		printf("%d\n", arr[i]);
//	return 0;
//}
//int main(void)
//{
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main(void)
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//			printf("hehe\n");
//	}
//	return 0;
//}
//int main(void)
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main(void)
//{
//	int x = 0;
//	int y = 0;
//	for (x = 0, y = 0; x < 2, y < 5; ++x, y++)//逗号表达式
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
#include<stdio.h>
//int main(void)
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}
//int main(void)
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i<=10);
//		return 0;
//}
//int main(void)
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);//1,2,3,4
//		i++;
//	} while (i <= 10);
//	return 0;
//}
//int main(void)
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);//1,2,3,4,....
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//求n的阶乘
//#include<stdio.h>
//int main(void)
//{
//	int n;
//	int s =1;
//	int i = 1;
//	scanf("%d", &n);
//	for (i = 1;  i<=n; i++)
//		s = s * i;
//	printf("%d", s);
//	return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//	int n = 0;
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (n = 1; n <= 10; n++)
//	{
//		while (i <= n)
//		{
//			ret *= i;
//			i++;
//		}
//		sum += ret;
//	}
//	printf("sum=%d", sum);
//	return 0;
//}



#include<stdio.h>
//二分查找
//1）先确定被查找范围的左右下标，通过左右下标求出中间元素的下标；
//2）得到中间元素的下标之后，将所要寻找的元素与我中间元素进行比较；
//3）如果所要找的元素小于我的中间元素，那么调整右边的下标；
//4）如果所要找的元素大于我的中间元素，那么调整左边的下标；
//5）然后不断使用上述的方法，最终查找到所要寻找到的元素
//int main(void)
//{
//	/*折半查找算法，或者叫二分查找算法
//	有序，升序的数组*/
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//	int k = 17;
//	int left = 0;//左边的下标
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	//右边的下标，sizeof(arr)/sizeof(arr[0])目的是求得数组元素的个数，数组元素的个数-1
//	//就为最后一个元素的下标；
//	//int mid = (left + right) / 2;//中间元素的下标（但存在溢出的问题，如果right特别大的话）
//	//还有另外一种求平均值的方法
//	while (left<=right)
//	{
//		int mid = left + (right - left) / 2;//这种算法一定不会溢出
//		if (arr[mid] < k)
//		{
//			left = mid + 1;//跳过mid，少一次判断
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("找不到\n");
//		}
//	}
//return 0;
//}


//先确定查找范围的左右边界
//确定所要查找的数字是几
#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//	int key = 17;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	while (left <= right)
//	{
//		    int mid = left + (right - left) / 2;
//			if (arr[mid] < key)
//			{
//				left = mid + 1;
//			}
//			else if (arr[mid] > key)
//			{
//				right = mid - 1;
//			}
//			else
//			{
//				printf("找到了，下标为%d:", mid);
//				break;
//			}
//			if (left > right)
//			{
//				printf("找不到\n");
//			}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//	int index;
//	int a[] = { 14,25,45,85,15,65,4,5,53,12 };
//	for (index = 0; index < 10; index++)
//	{
//		printf("Spare seat number :%d\n", a[index]);
//	}
//	return 0;
//}


//统计各个数字出现的次数
//#include<stdio.h>
//int main(void)
//{
//	int a[] = { 1,5,6,8,2,1,4,5,2,5 };//定义一个数组
//	int i = 0;
//	int b[10] = { 0 };
//	for (i = 0; i < 10; i++)//循环数组中的每个值
//	{
//		b[a[i]]++;//统计出现的次数
//	}
//	for (i = 0; i < 10; i++)//从0-9循环
//	{
//		printf("%d出现的次数为%d ", b[i]);
//	}
//	return 0;
//}


////输出一个四行两列的数组
//#include<stdio.h>
//int main(void)
//{
//	int a[4][2];
//	int i, j;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			printf("a[%d][%d]= ", i, j);
//			scanf("%d", &a[i][j]);
//		}
//	}
//	printf("输出二维数组\n");
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			printf("%d\t", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


////将二维数组的行列进行对换
//#include<stdio.h>
//int main(void)
//{
//	int a[4][2];
//	int b[2][4];//定义一个四行两列的数组
//	int i, j;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			printf("a[%d][%d]= ", i, j);
//			scanf("%d", &a[i][j]);
//		}
//	}
//	printf("输出二维数组\n");
//	for (i = 0; i <4; i++)
//	{
//		for (j = 0; j < 2 ;j++)
//		{
//			printf("%d\t", a[i][j]);
//		}
//		printf("\n");
//	}
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 2 ;j++)
//		{
//			b[j][i] = a[i][j];
//		}
//	}
//	printf("输出转换后的数组\n");
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d\t", b[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//用字符数组输出字符串park
//#include<stdio.h>
//int main(void)
//{
//	char a[5] = { 'p','a','r','k' };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%c", a[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main(void)
//{
//	printf("hello world\n");
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "Welcome to bit!!!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	/*
//	减2的原因是因为，比如说char arr[]="bit",他是以字符串的形式出现的，字符串的结束符为\0;
//	所以bit后面还有一个位置放置的时\0,\0的下标为3，但是如果我要求出最右边的数的下标的话
//	那么我要的就是t的下标，t的下标为2，这个字符串一共有四个元素，所以说最右边的字符的下标
//	就为字符串所含有的元素的个数-2，才能得到正确的下标；（但这种方法病不直观），用下面这种
//	*/
//	int right = strlen(arr1) - 1;
//	/*
//	strlen求字符串的长度，这种求字符串的长度并不包括\0
//	比如用这种方法，求bit的长度，求出来的结果就为3，那么最右边的字符的下标就为
//	求出来的结果减1，这种方法比较直观
//	strlen只能适用于字符串
//	*/
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//	}
//	return 0;
//}
//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	//假设密码为123456
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码\n");
//		scanf("%s", password);
//		if (0 == strcmp(password, "123456"))//string compar,比较两个字符串
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入\n");
//		}
//		if (i == 3)
//		{
//			printf("三次密码全部错误，退出程序\n");
//		}
//	}
//	return 0;
//}
//
//#include<stdio.h>
//#include<time.h>//获取系统时间，通过这个函数，可以拿到当前的时间
//#include<stdlib.h>
//void menu()
//{
//	printf("*****************************\n");
//	printf("***    1.play       0.exit***\n"); 
//	printf("*****************************\n");
//	//写了一个菜单
//}
//void game()
//{
//	/*
//	1)生成随机数
//	RAND_MAX-32767
//	用rand（）函数,返回类型为整形 int ret=rand();
//	*/
//	int guess = 0;
//	int ret = 0;
//	ret = rand()%100+1;
//	//2.猜数字
//	while (1)
//	{
//		printf("请猜数字\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//time的返回值时time_t;(其实是整形）
//	//生成随机数的方式（时间戳）
//	//时间戳可以转化为整数去计算
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//玩游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请重新选择!\n");
//		}
//	} while (input);
//	return 0;
//}
//
//
//#include<stdio.h>
//int main(void)
//{
//again:
//	printf("hehe\n");
//	goto again;
//	return 0;
//}
//
//
////关机程序
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input[] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	if (0 == strcmp(input, "我是猪"))
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		printf("输入错误，请重新输入!\n");
//		goto again;
//	}
//	return 0;
//}
//
//
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input[] = { 0 };
//	system("shutdown -s -t 60");
//		//这是Windows系统下的一个关机命令
//	while(1)
//	{
//		printf("你的电脑将在一分钟后关机，如果输入我是猪，就会取消关机！\n请输入：");
//		scanf("%s", input);
//		if (0 == strcmp(input, "我是猪"))
//		{
//			system("shutdown -a");//取消关机命令
//			break;
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input[] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	if (0 == strcmp(input, "我是猪"))
//	{
//		system("shutdown -a");//取消关机的命令
//	}
//	else
//	{
//		printf("输入错误，请重新输入!\n");
//		goto again;
//	}
//	return 0;
//}

//查找单词的个数
//#include<stdio.h>
//int main()
//{
//	int word = 1;//初始化单词的个数
//	char a[100];
//	int i = 0;//有单词情况下的下标
//	char blank = 0;
//	scanf("%s", a);
//	if (a[0] == '\0')//什么都没有的情况
//	{
//		printf("There is nothing in the computer\n");
//	}
//	else if(a[0]==' ')//第一个字符为空格的情况
//	{
//		printf("The first word is just a blank");
//	}
//	else
//	{
//		for (i = 0; a[i] != ' '; i++)
//		{
//			blank = a[i];//得到数组中的字符元素
//			if (blank == ' ')
//			{
//				word++;
//			}
//			printf("%d\n", word);
//		}
//	}
//	return 0;
//}


//查找单词的个数
//#include <stdio.h>
//#include <string.h>
//#define SIZE 100
//int main()
//{
//	char str[SIZE] = { '\0' };
//	int count = 0;
//	printf("please input the string\n");
//	gets(str);
//	puts(str);
//	int length = strlen(str);//字符串的长度
//	for (int i = 0; i < length; i++)
//	{
//		//判断是不是空格 不是的话在while里面i++执行判断到下一个空格的出现或是结束
//		if (str[i] != ' ')
//		{
//			count++;
//			while (str[i] != ' ' && str[i] != '\0')
//			{
//				i++;
//			}
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


//二分查找
/*
1.先确定索要查找范围的左右下标
2.找到左右下标之后，然后确定中间位置的下标.
(每次在缩小范围之后都要重新确定中间位置的下标），所以要将其放在循环当中
3.然后将所要寻找的数字，与处在中间下标位置的元素进行比较
如果索要查找的元素大于中间元素，那么调整左边的边界，反之，调整右边的边界
*/
//#include<stdio.h>
//int main(void)
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//	int key =17;
//	int left = 0;
//	int right =sizeof(arr)/sizeof(arr[0])-1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] <key)
//		{
//			left=mid+1;
//		}
//		else if (arr[mid] >key)
//		{
//			right=mid-1;
//		}
//		else
//		{
//			printf("找到了，下标为%d\n", mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("找不到\n");
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	char a[30] = "sell sell sell ", b[30] = "apple";
//	printf("输出前一句\n");
//	puts(a);
//	printf("输出后一句\n");
//	puts(b);
//	strcat(a, b);
//	printf("整句为\n");
//	puts(a);
//	return 0;
//}


//将输入的字符串全部转换为大写
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[20], change[20];
//	printf("输入一个字符串:\n");
//	gets(a);
//	strcpy(change, a);//复制要转换的字符
//	strupr(change);//将小写转换为大写
//	printf("转换成大写字母的字符串为%s", change);
//	return 0;
//}

/*
反转输出字符串
在程序中定义两个字符数组，一个表示源字符串，另一个表示反转后的字符串，在源字符串中，
从第一个字符开始遍历，读取字符数据，在目标字符串中从最后一个字符（结束标记\0除外）
倒序遍历字符串，依次将源字符串中的第一个字符数据写入目标字符串的最后一个字符当中，
将源字符串中的第二个字符数据写入目标字符串的倒数第二个字符中，依次类推，这样就实现了字符串的反转；
*/
//#include<stdio.h>
//int main(void)
//{
//	int i;
//	char String[5] = { "live" };
//	char Reverse[5] = { 0 };
//	int size;
//	size = sizeof(String);
//	for (i = 0; i < 4; i++)
//	{
//		Reverse[size - i - 2] = String[i];
//	}
//	printf("输出源字符串:%s\n",String);
//	printf("反过来输出字符串：%s\n", Reverse);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr[] = "Hello bit!!!\n";
//	//把前面的hello变成x；
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}

//找出a和b的较大值
//#include<stdio.h>
//int get_max(int x, int y)//返回类型为整形
//{
//	if (x > y)
//		return x;
//	else
//	{
//		return y;
//	}
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("%d", max);
//}



//#include<stdio.h>
////当实参传给形参的时候
////形参是实参的一份临时拷贝
////对形参的修改不会改变实参
//void Swap(int *px,int *py)//无返回值
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
////x，y叫形参
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}
////a和b是实参


//利用函数写一个加法语句
//#include<stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main(void)
//{
//	int z = Add(2, 3);
//	printf("%d", z);
//	return 0;
//}




////写一个函数判断一个数是不是素数
//#include<stdio.h>
//#include<stdlib.h>
//int is_prime(int n)
//{
//	//判断n是否为素数
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)//可以整除
//		{
//			return 0;//不是素数
//		}
//	}
//	return 1;
//}
//int main(void)
//{
//	int count = 0;
//	int i = 100;
//	for (i = 100; i < 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			    count++;
//				printf("%d ", i);	
//		}
//	}
//	printf("count=%d ", count);//计数
//	return 0;
//}

//
////写一个函数判断年份是不是闰年
//#include<stdio.h>
//#include<stdlib.h>
//int is_LeapYear(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//	   return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int count = 0;
//	int year = 0;
//	for(year=1000;year<=2000;year++)
//	{ 
//		//判断是不是闰年
//		if (is_LeapYear(year) == 1)//是闰年返回1
//		{
//			count++;
//			printf("%d ", year);
//		}
//	}
//	printf("\n");
//	printf("count = %d", count);
//	return 0;
//}


//写一个函数，实现二分查找
//#include<stdio.h>
//int BinarySearch(int arr[], int key,int sz)//int *arr；
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;//每次二分查找都要求中间元素的下标，放循环里面
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//	int key = 17;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	ret=BinarySearch(arr,key,sz);//数组传参传的是首元素的地址
//	if (ret == -1)
//		printf("找不到\n");
//	else
//		printf("找到了，下标时%d ", ret);
//	return 0;
//}


//写一个函数，每调用一次这个函数，就会将num的值增加1
//#include<stdio.h>
//void Add(int* pm)
//{
//	(*pm)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}



//函数的嵌套调用
//#include<stdio.h>
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}


//函数的链式访问
//#include<stdio.h>
//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//	printf("%d\n", strlen("abcdef"));
//	return 0;
//}


//函数语句调用
//#include<stdio.h>
//void LunYu()
//{
//	printf("三人行，必有我师焉\n");
//}
//int main()
//{
//	LunYu();
//	return 0;
//}

////接收一个整型值（无符号），按照顺序打印它的每一位，例如：
////输入1234，打印 1 2 3 4；
//#include<stdio.h>
//void print(int n)//假设n为1234
//{
//	if (n > 9)//保证n为两位数，1位数直接打印，两位数拆分然后在打印
//		print(n / 10);//
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	print(n);
//	return 0;
//}



////编写一个函数，不允许创建临时变量，求字符串长度
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	if (*str == '\0')//空串直接return 0;
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(str + 1);
//		/*
//		先看第一个元素是不是\0;如果第一个元素不是\0，那么可以确保
//		这个字符串至少有一个元素（这就是1的来源），然后再去判断剩下的字符串
//		剩下的字符串还是从第一个字符开始看起，然后再看剩下的字符串的剩下的字符串
//		同样利用了递归的思想去模拟实现给出库函数的实现与调用
//		*/
//	}
//}
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d", len);
//	return 0;
//}
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	int count = 0;//count是计数器，属于临时变量
//	while (*str != '\0')
//	{
//		count++;
//		str++;//往后继续判断
//	}
//	return count;
//}
//int main()
//{
//	int len = my_strlen("abc");
//	/*
//	这里的字符串"abc"可以理解为数组，就把它近似理解为数组
//	数组要传递的话，并不是把整个数组都传过去，传过去的
//	只是数组的首地址，也就是相当于把a的地址传过去，那么传地址的话
//	用什么接收呢？——用指针接收，用char *接收
//	*/
//	printf("%d", len);
//	return 0;
//}



//求n的阶乘
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int sum = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum * i;
//	}
//	printf("%d", sum);
//	return 0;
//}



//第n个斐波那契数
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
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("%d", ret);
//}


//#include<stdio.h>
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}


//#include<stdio.h>
//int a;
//int main()
//{
//	printf("%d\n", a);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6 };//把数组全部打印出来
//	for (i = 0; i < 6; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//数组的元素个数sizeof(arr)/sizeof(arr[0]);


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d]=%p\n",i, &arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
////数组的创建与初始化
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6 };//初始化
//	char arr[3][5];
//	double arr[6][5];
//	return 0;
//}


////打印一个2行4列的数组
//#include<stdio.h>
//int main()
//{
//	int a[2][4];
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("a[%d][%d]= ", i, j);
//			scanf("%d", &a[i][j]);
//		}
//	}
//	printf("输出二维数组\n");
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d\t", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//二维数组在内存中的存储
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[3][4] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i,j,&arr[i][j]);
//		}
//	}
//	printf("\n");
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a;
//	int b = -12;
//	a = abs(b);
//	printf("%d", a);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	long a;
//	long b = -1234567890L;
//	a = labs(b);
//	printf("%d", a);
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double a;
//	double b = -12.3;
//	a = fabs(b);
//	printf("%lf", a);
//	return 0;
//}

////用abs（）函数计算两个人的年龄差
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a;
//	int b;
//	int differ, ab;//定义变量
//	printf("输入年龄\n");
//	scanf("%d %d", &a, &b);
//	differ = a - b;
//	ab = abs(differ);
//	printf("两个人的年龄差为%d", ab);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double a;
//	double b = 0.5;
//	a = sin(b);
//	printf("%lf", a);
//	return 0;
//}


//冒泡排序
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,3,4,6,8,5,9,2,7,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//将冒泡排序封装成函数
//#include<stdio.h>
//void BubbleSort(int arr[],int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 2,3,6,5,7,4,1,8,10,9 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//将冒泡排序进行优化
//#include<stdio.h>
//void BubbleSort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	int flag = 1;//假设代码是有序的
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
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
//}
//int main()
//{
//	int arr[] = { 2,3,6,5,7,4,1,8,10,9 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d", sizeof(arr));
//	return 0;
//}


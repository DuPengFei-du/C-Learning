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


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int count = 0;
//	(void)scanf("%d", &n);
//	for (int i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}		
//	}
//	printf("%d", count);
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int count = 0;
//	(void)scanf("%d", &n);
//	while (n)
//	{
//		count++;
//		n = n & (n - 1);
//	}
//	printf("%d", count);
//	return 0;
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
//	int a = 3;  //011
//	int b = 5;  //101
//	int c = a ^ b;   //110
//	printf("%d\n", c);
//	return 0;
//}
////结果为6


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
//
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
//int main()
//{
//	int a = 1;
//	printf("%d\n", sizeof(a));  //4
//	printf("%d\n", sizeof(int));   //4
//	return 0;
//}
////printf("%d\n",sizeof a);
////sizeof可以对变量省略括号，不能对类型省略括号


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = ~a;
//	printf("%d\n", b);
//	return 0;
//	//结果是-11
//	//00000000000000000000000000001010  --补码
//	//11111111111111111111111111110101  --按位取反后的补码
//	//11111111111111111111111111110100  --反码
//	//10000000000000000000000000001011  --原码
//}


//#include <stdio.h>
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)   //用指针接收的，大小为4
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)  //这里是一个易错的点，他是用指针接收的
//	//所以大小还是4，与char是没有任何关系的
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)
//	printf("%d\n", sizeof(ch));//(3)
//	test1(arr);
//	test2(ch);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
//// 打印的值是1 2 3 4


//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
////打印的值为1 3 3 4


//#include<stdio.h>
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//};
//int main()
//{
//	struct Stu s = { "张三", 30, "男" };
//	printf("%s\n", s.name);
//	printf("%d\n", s.age);
//	printf("%s\n", s.sex);
//	return 0;
//}


////如果是小写字符，就输出相应的大写字符，如果是大写字符
////就输出相应的小写字符，如果是数字就不输出
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch >= 'A' && ch <= 'Z')
//			putchar(ch + 32);
//		else if (ch >= 'a' && ch <= 'z')
//			putchar(ch - 32);
//		else
//			putchar(ch);
//	}
//}


//数组元素的逆置
//#include<stdio.h>
//#include<string.h>
//void My_Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//void Print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	My_Reverse(arr, sz);
//	Print(arr, sz);
//	return 0;
//}


//逆序字符串
//#include<stdio.h>
//void my_reverse(char* str, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int temp = str[left];
//		str[left] = str[right];
//		str[right] = temp;
//		left++;
//		right--;
//	}
//}
//void Print(char arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%c", arr[i]);
//	}
//}
//int main()
//{
//	char arr[] = "abcedf";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_reverse(arr, sz);
//	Print(arr, sz);
//	return 0;
//}


//打印乘法口诀表，行和列自己指定
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	(void)scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


////获取一个数二进制序列中所有的偶数位和奇数位
////分别输出二进制序列
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	(void)scanf("%d", &n);
//	//偶数位
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf("\n");
//	//奇数位
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	return 0;
//}


///*
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为
//四个嫌疑犯中的一个。以下为4个嫌犯的供词：
//A说:不是我
//B说:是C
//C说:是D
//D说:C在胡说
//已知三个人说了真话，一个人说的是假话
//现在请根据这些信息，写一个程序来确定到底谁是凶手
//*/
//#include<stdio.h>
//int main()
//{
//	char killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer is %c", killer);
//		}
//	}
//	return 0;
//}


/*
5位运动员参加了10m跳水比赛，有人让他们预测比赛结果
A选手说：B第二，我第三;
B选手说，我第二，E第四;
C选手说，我第一，D第二;
D选手说，C最后，我第三;
E选手说，我第四，A第一;
比赛结束后，每位选手都说对了一半，请编程确定比赛的名次
*/


///*
//通过这个题，我们可以知道A,B,C,D,E都可能是第一名到第五名的名词，那么我们可以
//通过把所有的可能罗列出来，然后看那种满足每人都说对了一半的情况
//*/
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1)
//							&& ((b == 2) + (e == 4) == 1)
//							&& ((c == 1) + (d == 2) == 1)
//							&& ((c == 5) + (d == 3) == 1)
//							&& ((e == 4) + (a == 1) == 1))
//						{
//							if (a * b * c * d * e == 120)
//								printf("%d %d %d %d %d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//}


//#include<stdio.h>
//int main()
//{
//	char a = 127;
//	char b = 3;
//	char c = a + b;
//	//00000000000000000000000001111111  --a的32位形式下的存储
//	//00000000000000000000000001000011  --b的32位形式下的存储
//	//但是a和b都是char类型的，char之由一个字节，所以a，b为：
//	//01111111  --a
//	//00000011  --b
//	//字符在算的时候都达不到整形的大小，所以要先把他们提升成整形的大小，然后再进行运算
//	//a，b均为有符号的char类型，所以最高位是符号位
//	//所以需要把a首先补成这个样子，00000000000000000000000001111111
//	//b是同理，b变成了，00000000000000000000000001000011
//	//将a和b进行相加：
//	//00000000000000000000000001111111
//	//00000000000000000000000001000011
//	//00000000000000000000000010000010   ---a和b相加的结果
//	//a+b的结果要存在c里面，只能存在有8个比特位，结果为10000010
//	//对c进行整形提升，要补的是符号位，补完的结果如下所示:
//	//11111111111111111111111110000010 ---再内存中放的是补码，打印的是原码
//	//补码-1是反码
//	//反码为：11111111111111111111111110000001
//	//原码为：10000000000000000000000001111110  --结果为-126
//	printf("%d", c);   //---126
//	return 0;
//}
////无符号数进行提升的时候，只能补0


//#include<stdio.h>
//int main()
//{
//	char a = 0xb6;//11000110
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	system("pause");
//	return 0;
//}
////打印结果为c
////另外两个都发生整形提升了
#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar())!= EOF)
	{
		if (ch >= 'a' && ch <= 'z')
			putchar(ch - 32);
		else if (ch >= 'A' && ch <= 'Z')
			putchar(ch + 32);
		else if (ch >= '0' && ch <= '9')
			continue;
		else
			putchar(ch);
	}
	return 0;
}


//数组元素的逆置
#include<stdio.h>
int main()
{
	char arr[] = "abcdef";
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	while (left <= right)
	{
		char temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
	for (int i = 1; i < sz; i++)
	{
		printf("%c", arr[i]);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int num = 0;
	int count = 0;
	int i = 0;
	(void)scanf("%d", &num);
	for (i = 0; i < 32; i++)
	{
		if (((num >> i) & 1) == 1)
			count++;
	}
	printf("%d\n", count);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	printf("%p\n", &a);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 10;
	printf("%p\n", &a);   //003DF718
	printf("%x\n", &a);   //3df718
	return 0;
}
//%x表示用16进制打印，如果用16进制打印，前面就会少00


#include<stdio.h>
int main()
{
	int a = 1;
	printf("%d\n", sizeof(a));  //4
	printf("%d\n", sizeof(int));   //4
	return 0;
}
//printf("%d\n",sizeof a);
//sizeof可以对变量省略括号，不能对类型省略括号


#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr)); //40  计算的是数组的大小
	return 0;
}


#include <stdio.h>
void test1(int arr[])
{
	printf("%d\n", sizeof(arr));//(2)   //用指针接收的，大小为4
}
void test2(char ch[])
{
	printf("%d\n", sizeof(ch));//(4)  //这里是一个易错的点，他是用指针接收的
	//所以大小还是4，与char是没有任何关系的
}
int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));//(1)
	printf("%d\n", sizeof(ch));//(3)
	test1(arr);
	test2(ch);
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	printf("%d\n", arr[5]);
	printf("%d\n", p[5]);
	printf("%d\n", *(p + 5));
	printf("%d\n", *(arr + 5));
	return 0;
	//p[5]==*(p+5)
	//arr[5]==*(arr+5)==*(5+arr)==5[arr]
}
//这几个打印的结果都一样的


#include<stdio.h>
int main()
{
	char a = 127;
	char b = 3;
	char c = a + b;
	//00000000000000000000000001111111  --a的32位形式下的存储
	//00000000000000000000000001000011  --b的32位形式下的存储
	//但是a和b都是char类型的，char之由一个字节，所以a，b为：
	//01111111  --a
	//00000011  --b
	//字符在算的时候都达不到整形的大小，所以要先把他们提升成整形的大小，然后再进行运算
	//a，b均为有符号的char类型，所以最高位是符号位
	//所以需要把a首先补成这个样子，00000000000000000000000001111111
	//b是同理，b变成了，00000000000000000000000001000011
	//将a和b进行相加：
	//00000000000000000000000001111111
	//00000000000000000000000001000011
	//00000000000000000000000010000010   ---a和b相加的结果
	//a+b的结果要存在c里面，只能存在有8个比特位，结果为10000010
	//对c进行整形提升，要补的是符号位，补完的结果如下所示:
	//11111111111111111111111110000010 ---再内存中放的是补码，打印的是原码
	//补码-1是反码
	//反码为：11111111111111111111111110000001
	//原码为：10000000000000000000000001111110  --结果为-126
	printf("%d", c);   //---126
	return 0;
}
//无符号数进行提升的时候，只能补0


#include<stdio.h>
int main()
{
	char a = 0xb6;//11000110
	short b = 0xb600;
	int c = 0xb6000000;
	if (a == 0xb6)
		printf("a");
	if (b == 0xb600)
		printf("b");
	if (c == 0xb6000000)
		printf("c");
	system("pause");
	return 0;
}
//打印结果为c
//另外两个都发生整形提升了


#include<stdio.h>
int main()
{
	int i = 1;
	int ret = (++i) + (++i) + (++i);
	printf("%d", ret);
	printf("%d", i);
	return 0;
	//不同的编译器，可能会有不同的结果
}
//这段代码的第一个+在执行的时候，第二个+是否执行这是不确定的
//因为依靠操作符的优先级和结合性是无法决定第一个+和都三个前置++的先后顺序的


#include<stdio.h>
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}


//获取一个数二进制序列中所有的偶数位和奇数位
//分别输出二进制序列
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	(void)scanf("%d", &n);
	//偶数位
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d", (n >> i) & 1);
	}
	printf("\n");
	//奇数位
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", (n >> i) & 1);
	}
	return 0;
}


//计算有多少个二进制位不同
#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	int count = 0;
	(void)scanf("%d %d", &m, &n);
	int temp = m ^ n;
	for (int i = 0; i < 32; i++)
	{
		if (((temp >> i) & 1) == 1)
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}


/*
5位运动员参加了10m跳水比赛，有人让他们预测比赛结果
A选手说：B第二，我第三;
B选手说，我第二，E第四;
C选手说，我第一，D第二;
D选手说，C最后，我第三;
E选手说，我第四，A第一;
比赛结束后，每位选手都说对了一半，请编程确定比赛的名次
*/

/*
通过这个题，我们可以知道A,B,C,D,E都可能是第一名到第五名的名词，那么我们可以
通过把所有的可能罗列出来，然后看那种满足每人都说对了一半的情况
*/
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((b == 2) + (a == 3) == 1)
							&& ((b == 2) + (e == 4) == 1)
							&& ((c == 1) + (d == 2) == 1)
							&& ((c == 5) + (d == 3) == 1)
							&& ((e == 4) + (a == 1) == 1))
						{
							if (a * b * c * d * e == 120)
								printf("%d %d %d %d %d\n", a, b, c, d, e);
						}
					}
				}
			}
		}
	}
}


/*
日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为
四个嫌疑犯中的一个。以下为4个嫌犯的供词：
A说:不是我
B说:是C
C说:是D
D说:C在胡说
已知三个人说了真话，一个人说的是假话
现在请根据这些信息，写一个程序来确定到底谁是凶手
*/
#include<stdio.h>
int main()
{
	char killer = 0;
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
		{
			printf("killer is %c", killer);
		}
	}
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
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", strlen(arr));   //未知数，因为我并没有看到\0，所以不知道\0到底在哪
	//所以值是随机值 X
	printf("%d\n", strlen(arr + 0));  //arr此时作为首元素的地址，首元素地址+0还是首元素的地址
	//所以还是随机值X
	printf("%d\n", strlen(*arr));    //传进去的是字符a，小写a的ASCII码值为97
	//所以为错误代码
	printf("%d\n", strlen(arr[1]));  //传的是B，所以还是错误代码
	printf("%d\n", strlen(&arr));    //X
	printf("%d\n", strlen(&arr + 1));  //Y-X=6
	printf("%d\n", strlen(&arr[0] + 1));  //X+1
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
	char arr[] = "abcdef";
	printf("%d\n", strlen(arr));   //6
	printf("%d\n", strlen(arr + 0));  //和上面第一个一样往后数，一共有6个
	printf("%d\n", strlen(*arr));     //error ，错误的传参方式
	printf("%d\n", strlen(arr[1]));   //error ，错误的传参方式
	printf("%d\n", strlen(&arr));     //取出整个数组的地址，往后数，还是6
	printf("%d\n", strlen(&arr + 1)); //随机值，跳过整个数组，已经跳到\0的后面了
	//所以结果是多少是一个未知数
	printf("%d\n", strlen(&arr[0] + 1));  //5
}


#include<stdio.h>
int main()
{
	char* p = "abcdef";
	printf("%d\n", sizeof(p));  //4 p为指针变量，大小为4
	printf("%d\n", sizeof(p + 1)); //4 p是指针变量，+1的大小还是地址，结果为3
	printf("%d\n", sizeof(*p));//1 ，是一个值，值得类型是char类型，所以大小为1
	printf("%d\n", sizeof(p[0])); //1 同上
	printf("%d\n", sizeof(&p));   // 4 取出整个数组的地址 
	printf("%d\n", sizeof(&p + 1));   //4  跳过整个数组，还是地址
	printf("%d\n", sizeof(&p[0] + 1));  //4，还是地址
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

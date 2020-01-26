#define _CRT_SECURE_NO_WARNINGS 1


//写一个函数返回参数二进制中1的个数
//比如 15 00001111 一共有4个1
//程序原型
//int count_one_bits(unsigned int value)  需要返回1的个数
//#include<stdio.h>
//unsigned count_one_bits(unsigned int n)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	unsigned int n = 0;
//	int ret = 0;
//	(void)scanf("%d", &n);
//	ret = count_one_bits(n);
//	printf("%d", ret);
//	return 0;
//}


//#include<stdio.h>
//unsigned count_one_bits(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//			count++;
//		n /= 2;
//	}
//	return count;
//}
//int main()
//{
//	unsigned int n = 0;
//	int ret = 0;
//	(void)scanf("%d", &n);
//	ret = count_one_bits(n);
//	printf("%d", ret);
//	return 0;
//}


//#include<stdio.h>
//unsigned count_one_bits(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	unsigned int n = 0;
//	int ret = 0;
//	(void)scanf("%d", &n);
//	ret = count_one_bits(n);
//	printf("%d", ret);
//	return 0;
//}

/*
如何去判断一个数是不是2^n，如果某个数是2的n次方，那么那个数字的二进制序列中
只有1个1，那个1在第几位上，就是2的几次方
又因为n&(n-1)每执行一次就减少一个1，有几个1就会执行一次。
那么只需要使得n&(n-1)==0，那么说明，n是2的n次方。
*/


//获取一个数二进制序列中所有的偶数位和奇数位
//分别输出二进制序列
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


//编程实现
//两个int(32位)整数m和n二进制表达式中
//有多少个bit不同
//输入例子
// 1999 2299
//输出例子 ：7
//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int a = 0;
//	int count = 0;
//	(void)scanf("%d %d", &m, &n);
//	a = m ^ n;
//	for (int i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//			count++;
//	}
//	printf("%d", count);
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

/*
通过这个题，我们可以知道A,B,C,D,E都可能是第一名到第五名的名词，那么我们可以
通过把所有的可能罗列出来，然后看那种满足每人都说对了一半的情况
*/
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
//							if(a*b*c*d*e==120)
//							printf("%d %d %d %d %d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//}


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
//#include<stdio.h>
//int main()
//{
//	char killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd')==3)
//		{
//			printf("killer is %c",killer);
//		}
//	}
//	return 0;
//}


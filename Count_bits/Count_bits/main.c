#define _CRT_SECURE_NO_WARNINGS 1


//写一个函数返回参数二进制中1的个数
//比如 15 00001111 一共有4个1
//程序原型
//int count_one_bits(unsigned int value)  需要返回1的个数
#include<stdio.h>
unsigned count_one_bits(unsigned int n)
{
	int count = 0;
	for (int i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
		count++;
	}
	return count;
}
int main()
{
	unsigned int n = 0;
	int ret = 0;
	(void)scanf("%d", &n);
	ret = count_one_bits(n);
	printf("%d", ret);
	return 0;
}


#include<stdio.h>
unsigned count_one_bits(unsigned int n)
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
			count++;
		n /= 2;
	}
	return count;
}
int main()
{
	unsigned int n = 0;
	int ret = 0;
	(void)scanf("%d", &n);
	ret = count_one_bits(n);
	printf("%d", ret);
	return 0;
}


#include<stdio.h>
unsigned count_one_bits(unsigned int n)
{
	int count = 0;
	while (n)
	{
		n = n&(n - 1);
		count++;
	}
	return count;
}
int main()
{
	unsigned int n = 0;
	int ret = 0;
	(void)scanf("%d", &n);
	ret = count_one_bits(n);
	printf("%d", ret);
	return 0;
}

/*
如何去判断一个数是不是2^n，如果某个数是2的n次方，那么那个数字的二进制序列中
只有1个1，那个1在第几位上，就是2的几次方
又因为n&(n-1)每执行一次就减少一个1，有几个1就会执行一次。
那么只需要使得n&(n-1)==0，那么说明，n是2的n次方。
*/
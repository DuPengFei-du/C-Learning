/*
题目描述

输入两个整数，求两个整数二进制格式有多少个位不同

输入描述:
两个整数

输出描述:
二进制不同位的个数

示例1
输入
22 33
输出
5

*/


#include<stdio.h>
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	n = n ^ m;
	m = 0;
	while (n > 0)
	{
		if (n & 1)
		{
			m++;
		}
		n = n >> 1;
	}
	printf("%d\n", m);
}
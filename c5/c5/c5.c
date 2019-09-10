#include<stdio.h>
void test()
{
	printf("************\n");
	printf("how do you do\n");
	printf("************\n");
}
int main()
{
	test();
	return 0;
}


//用max函数求两个数中的较大者
#include<stdio.h>
int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a, b, c;
	scanf("%d %d", &a, &b);
	c = max(a, b);
	printf("%d", c);
	return 0;
}


//输入两个实数，用一个函数实现他们的求和
#include<stdio.h>
int sum(int x, int y)
{
	return  x + y;
}
int main()
{
	int a, b, c;
	scanf("%d %d", &a, &b);
	c = sum(a, b);
	printf("%d", c);
	return 0;
}


//输入四个整数，找出其中的最大值
#include<stdio.h>
int main()
{
	int max4(int a, int b, int c, int d);
	int a, b, c, d, max;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	max = max4(a, b, c, d);
	printf("max=%d\n", max);
	return 0;
}

int max4(int a, int b, int c, int d)
{
	int max2(int a, int b);
	int m;
	m = max2(a, b);
	m = max2(m, c);
	m = max2(m, d);
	return(m);
}
int max2(int a, int b)
{
	if (a >= b)
		return a;
	else
		return  b;
}
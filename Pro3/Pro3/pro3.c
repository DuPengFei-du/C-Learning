//8.5
//依次将10个数输入，并求出输入数的最大值
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,89,11,23 };
	int i = 0;
	int max = arr[0];
	for (i = 0; i < 10; i++)
	{
		if (arr[i] > max)
		max = arr[i];
	}
	printf("%d", max);
	return 0;
}


//有三个数a,b,c要求按照大小把他们输出
#include<stdio.h>
int main()
{
	int a, b, c;
	int max = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b && b > c)
	{
		printf("%d %d %d", a, b, c);
	}
	else if (a > c && c > b)
	{
		printf("%d %d %d", a, c, b);
	}
	else if (b > a && a > c)
	{
		printf("%d %d %d", b, a, c);
	}
	else if (b > c && c > a)
	{
		printf("%d %d %d", b, c, a);
	}
	else if (c > a && a > b)
	{
		printf("%d %d %d", c, a, b);
	}
	else if (c > b && b > a)
	{
		printf("%d %d %d", c, b, a);
	}
	return 0;
}


#include<stdio.h>
void Swap(int* px, int* py)
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}
int main(void)
{
	int  a = 1;
	int  b = 2;
	int  c = 3;
	if (a < c)
	{
		Swap(&a, &c);
	}
	if (b < c)
	{
		Swap(&b, &c);
	}
	if (a < b)
	{
		Swap(&a, &b);
	}
	printf("%d %d %d", a, b, c);
	return 0;
}

//求1+100的和
#include<stdio.h>
int main()
{
	int i = 0;
	int sum = 0;
	for (i = 0; i <= 100; i++)
	{
		sum = sum + i;
	}
	printf("%d", sum);
	return 0;
}


//判断一个数n能否同时被3和5整出除
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	if (n % 3 == 0 && n % 5 == 0)
	{
		printf("n可以同时被3和5整除\n");
	}
	else
	{
		printf("不可以\n");
	}
	return 0;
}


//将100-200之间的素数输出
#include<stdio.h>
int main()
{
	int i = 100;
	int j = 2;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j < 200; j++)
		{
			if (i % j == 0)
				break;
		}
		if (i == j)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("count is %d", count);
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	printf("%d", i++);
	return 0;
}
#include<stdio.h>
int main()
{
	int i = 0;
	printf("%d", ++i);
	return 0;
}


#include<stdio.h>
int main()
{
	char c1, c2;
	c1 = 'A';
	c2 = c1 + 32;
	printf("%c\n", c2);
	printf("%d", c2);
	return 0;
}


//给出三角形的三边长，求三角形的面积
//利用海伦公式求三角形的面积
#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, p, s;
	a = 3.67;
	b = 5.43;
	c = 6.21;
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("%lf", s);
	return 0;
}
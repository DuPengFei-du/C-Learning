#include<stdio.h>
void test()
{
	printf("hehe\n");
	test();
}
int main()
{
	test();
	return 0;
}


/*
有五个学生坐在一起时，问第五个学生多少岁，他说比第四个学生大两岁，第四个学生比第三个
学生大两岁，第三个学生比第二个学生大两岁，第二个学生比第一个学生大两岁，第一个学生的
年龄是10岁，这个问题可以理解为有关于递归的函数
*/
#include<stdio.h>
int main()
{
	int age(int n);
	printf("%d", age(5));
	return 0;
}
int age(int n)
{
	int c;
	if (n == 1)
		c = 10;
	else
		c = age(n - 1) + 2;
	return(c);
}


//用递归的方法求出n！
/*
思路：求n！可以用递推方法，即从1开始，乘我，再乘3...一直乘到n
递推的特点是从一个已知的事实（如1！=1）出发，按照一定规律推出下一个事实
如2！=1*2，再从这个新的已知的事实出发，在向下推出一个新的事实..
n!=n*(n-1)

求n的阶乘也可以用递归的方法，如5！=4！*5
n*（n-1）！
*/
#include<stdio.h>
int fac(int n)
{
	int ret = 0;
	if (n < 0)
	{
		printf("error!");
	}
	if (n == 0 || n == 1)
	{
		ret = 1;
	}
	if (n > 1)
		ret = fac(n - 1) * n;
	return(ret);
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = fac(n);
	printf("%d", ret);
	return 0;
}


//求第n个斐波那契数
#include<stdio.h>
int fib(int n)
{
	if (n == 0)
		return 0;
	if (n <= 2)
		return 1;
	if (n > 2)
		return fib(n - 2) + fib(n - 1);
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = fib(n);
	printf("%d", ret);
	return 0;
}



//f(n) = 2 * f(n - 1)
#include<stdio.h>
int jump(int n)
{
	int ret = 0;
	if (n <= 1)
		return 1;
	else
		return 2 * jump(n - 1);
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = jump(n);
	printf("%d", ret);
	return 0;
}
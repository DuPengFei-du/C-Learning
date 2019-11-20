#define  _CRT_SECURE_NO_WARNINGS 1





//非递归算法
//n的阶乘
#include<stdio.h>
int main()
{
	int i = 1;
	int n = 0;
	int sum = 1;
	(void)scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum * i;
	}
	printf("%d", sum);
	return 0;
}



//递归算法
//n的阶乘
#include<stdio.h>
int fac(int n)
{
	if (n < 2)
		return 1;
	else
		return fac(n - 1) * n;
}
int main()
{
	int n = 0;
	int ret = 0;
	(void)scanf("%d", &n);
	ret = fac(n);
	printf("%d", ret);
	return 0;
}


//求阶乘的和
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 1;
	int ret = 1;
	int sum = 0;
	(void)scanf("%d", &n);
	for (n = 1; n <= 10; n++)
	{
		while (i <= n)
		{
			ret = ret * i;
			i++;
		}
	}
	sum = sum + ret;
	printf("%d", sum);
	return 0;
}
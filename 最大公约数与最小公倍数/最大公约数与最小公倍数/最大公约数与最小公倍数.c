#define  _CRT_SECURE_NO_WARNINGS 1



//最大公约数
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	(void)scanf("%d %d", &a, &b);
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	printf("%d", b);
	return 0;
}



//最小公倍数
#include<stdio.h>
int main()
{
	int a = 0, b = 0  , c , x , y , z ;
	(void)scanf("%d %d", &a, &b);
	x = a;
	y = b;
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	z = (x * y) / b;
	printf("%d", b);
	printf("\n");
	printf("%d", z);
	return 0;
}
#include<stdio.h> 
int main()
{
	int a[20][20], m, i, j, t;
	while (scanf("%d", &m) && m)
	{
		t = 1;
		for (i = 1; i <= m; i++)
			for (j = 1; j <= m; j++)
				scanf("%d", &a[i][j]);
		for (i = 1; i <= m; i++)
			for (j = 1; j <= m; j++)
				if (a[i][j] != a[j][i])
					t = 0;

		if (t) printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}

#include<stdio.h>
#include<math.h>

int a(int b)//函数功能：返回一个整形数b的位数
{
	int n = 0;
	do
	{
		b = b / 10;
		n += 1;
	} while (b != 0);
	return (n);
}

int b(int b)//函数功能：返回b的第一位
{
	int i, d;
	i = a(b);
	d = b / pow(10, i - 1);
	return(d);
}

int main()
{
	int c, i, f;
	scanf("%d", &c);
	i = a(c);//i为c的位数
	do//先用b函数输出最高位，再用c-最高位的十减一次方，即得后几位，再循环使用b函数，直至位数为0
	{
		printf("%d ", b(c));
		c = c - b(c) * pow(10, i - 1);
		i -= 1;
	} while (i != 0);
	return 0;
}

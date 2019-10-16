//在屏幕上打印杨辉三角
#include<stdio.h>
int main()
{
	int arr[10][10];
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <10; j++)
		{
			if (j == 0)
				arr[i][j] = 1;
			if (i == j)
				arr[i][j] = 1;//对角线
			if (i >= 2 && j >= 1)
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <=i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int i, j;
	int a[10][10];
	for (i = 0; i < 10; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}
	for (i = 2; i < 10; i++)
	{
		for (j = 1; j < i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}
}


#include<stdio.h>
#define N 7
void YangHui(int a[N][N], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}
	for (i = 2; i < n; i++)
	{
		for (j = 1; j < i; j++)
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
	}
}
int main()
{
	int i, j, n, b[N][N];
	printf("Input n:");
	(void)scanf("%d", &n);
	YangHui(b, n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%4d", b[i][j]);
		}
		printf("\n");
	}
}


//不使用（a+b)/2,求两个数的平均值
#include<stdio.h>
int main()
{
	int left = 0;
	int right = 0;
	(void)scanf("%d %d", &left, &right);
	printf("%d",left + (right - left) / 2);
	return 0;
}


#include<stdio.h>
int main()
{
	char ch = 'w';
	char* pc = &ch; 
	*pc = 'h';
	return 0;
}

#include<stdio.h>
int main()
{
	const char* pstr = "hello world!";
	printf("%s", pstr);
	return 0;
}


#include<stdio.h>
int main()
{
	const char* p1 = "abcdef";
	const char* p2 = "abcdef";
	if (p1 == p2)
	{
		printf("p1==p2\n");
	}
	else
	{
		printf("p1!=p2\n");
	}
	return 0;
}
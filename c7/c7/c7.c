//用选择法对数组中10个整数从小到大排序
#include<stdio.h>
int main()
{
	int i, j, min, temp, a[10];
	for (i = 1; i <= 10; i++)
	{
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);//输入10个数
	}
	printf("\n");
	printf("the orginal numbers ：\n");
	for (i = 1; i <= 10; i++)
		printf("%5d", a[i]);
	printf("\n");
	for (i = 1; i <= 9; i++)
	{
		min = i;
		for (j = i + 1; j <= 10; j++)
			if (a[min] > a[j])
				min = j;
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
	printf("the sorted numbers :\n");
	for (i = 1; i <= 10; i++)
		printf("%5d", a[i]);
	printf("\n");
	return 0;
}


//有一个一维数组，内放置了10个学生的成绩
//写一个函数，当主函数调用这个函数的时候，能求出平均分，最高分和最低分
#include<stdio.h>
float MAX, MIN;
float average(float arr[], int n)
{
	int i = 0;
	float aver, sum = arr[0];
	MAX = MIN = arr[0];
	for (i = 1; i < n; i++)
	{
		if (arr[i] > MAX)
		{
			MAX = arr[i];
		}
		else if (arr[i] < MIN)
		{
			MIN = arr[i];
		}
		sum = sum + arr[i];
	}
	aver = sum / n;
	return(aver);
}
int main()
{
	float average(float arr[], int n);
	float arr[10], ave;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("a[%d]= ", i);
		scanf("%f", &arr[i]);
	}
	for (i = 0; i < 10; i++)
	{
		printf("%f ", arr[i]);
	}
	ave = average(arr, 10);
	printf("\n");
	printf("max=%6.2f\n,min=%6.2f\n,average=%6.2f\n", MAX, MIN, ave);
	return 0;
}


//输入1-5的阶乘值
#include<stdio.h>
int fac(int i)
{
	static int sum = 1;//不释放
	sum = sum * i;
	return(sum);
}
int main()
{
	int i = 1;
	int ret = 1;
	for (i = 1; i <= 5; i++)
	{
		ret = fac(i);
		printf("%d!=%d\n", i, ret);
	}
	return 0;
}


//调用函数求三个整数中的最大值
#include<stdio.h>
int max(int m, int y, int n)
{
	int max = m;
	if (n > m)
		max = n;
	if (y > m)
		max = y;
	return(max);
}
int main()
{
	int a, b, c;
	int ret = 0;
	scanf("%d %d %d", &a, &b, &c);
	ret = max(a, b, c);
	printf("%d", ret);
	return 0;
}


//写两个函数，分别求这两个整数的最大公约数和最小公倍数。
//用主函数调用这两个函数，并输出结果。两个整数由键盘输入。
#include<stdio.h>
int max(int x, int y)
{
	int z;
	while (z = x % y)
	{
		x = y;
		y = z;
	}
	return y;
}
int main()
{
	int a, b;
	int ret1 = 0;
	//int ret2 = 0;
	scanf("%d %d", &a, &b);
	ret1 = max(a, b);
	//ret2 = min(a, b);
	printf("%d ", ret1);
	return 0;
}


//打印100-200之间的素数
#include<stdio.h>
int main()
{
	int i;
	int j;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j <= i - 1; j++)
		{
			if (i % j == 0)
				break;
		}
		if (j == i)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}



//写一个函数来打印素数
#include<stdio.h>
int is_prime(int n)
{
	int j = 0;
	for (j = 2; j < n; j++)
	{
		if (n % j == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int count = 0;
	int i = 100;
	for (i = 100; i < 200; i++)
	{
		if (is_prime(i) == 1)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("%d", count);
	return 0;
}
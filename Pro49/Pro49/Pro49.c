#include<stdio.h>
int main()
{
	printf("Hello World\n");
	return 0;
}



#include<stdio.h>
int n = 100;
int main()
{
	int n = 10;
	printf("%d\n", n);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	(void)scanf("%d %d", &a, &b);
	c = a + b;
	printf("%d\n", c);
	return 0;
}


//在屏幕上打印单引号和双引号
#include<stdio.h>
int main()
{
	printf("%c\n",'\'');
	return 0;
}


#include<stdio.h>
int main()
{
	printf("%s\n","\"");
	return 0;
}


//两个数加法的函数
#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	(void)scanf("%d %d", &a, &b);
	c = Add(a, b);
	printf("%d\n", c);
	return 0;
}


//打印数组中的内容
#include<stdio.h>
int main()
{
	int arr[10] = { 11,12,13,14,15,16,17,18,19,20 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


//条件操作符
#include<stdio.h>
int main()
{
	int a = 10;
	int b = 30;
	int c = 0;
	c = (a > b) ? a : b;
	printf("%d\n", c);
	return 0;
}


//判断一个数是否为奇数
#include<stdio.h>
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	if (n % 2 == 1)
		printf("为奇数");
	else if (n % 2 == 0)
		printf("为偶数");
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 1)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n");
	printf("%d\n",count);
	return 0;
}


#include<stdio.h>
int main()
{
	int day = 0;
	(void)scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday");
		break;
	case 6:
	case 7:
		printf("weekend");
		break;
	default:
		printf("输入错误，请重新输入!");
		break;
	}
}


#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("%d ", i);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		printf("%d ", i);
		i++;
	}
	return 0;
}


//求n的阶乘
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 1;
	int sum = 1;
	(void)scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum * i;
	}
	printf("%d", sum);
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 1;
	int ret = 1;
	int sum = 0;
	int n = 0;
	(void)scanf("%d", &n);
	for (n = 1; n <= 10; n++)
	{
		while (i <= 10)
		{
			ret = ret * i;
			i++;
		}
		sum = sum + ret;
	}
	printf("%d", sum);
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int key = 6;
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标为%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到!");
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	char arr1[] = "###########";
	char arr2[] = "Hello World";
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int left = 0;
	int right = sz - 1;
	while(left<=right)
	{
		arr1[left] = arr2[left];
		arr1[right] = arr2[right];
		left++;
		right--;
	}
	printf("%s", arr1);
	return 0;
}


//求素数
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int count = 0;
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
			count++;
		}
	}
		printf("\n");
		printf("%d", count);
		return 0;
}


#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
				break;
		}
		if (j > sqrt(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n");
	printf("%d", count);
	return 0;
}


//最大公约数
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 1;
	(void)scanf("%d %d", &a, &b);
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	printf("%d ", b);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	(void)scanf("%d %d", &a, &b);
	int temp = a;
	a = b;
	b = temp;
	printf("%d %d", a, b);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	(void)scanf("%d %d", &a, &b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d", a, b);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	(void)scanf("%d %d", &a, &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d %d", a, b);
	return 0;
}
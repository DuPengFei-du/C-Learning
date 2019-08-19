#include<stdio.h>
int main()
{
	int a[] = { 2,4,6,8,10,12,14,16,18,20,22,24 }, * q[4], k;
	for (k = 0; k < 4; k++)
	{
		q[k] = &a[k * 3];
	}
	printf("%d\n", q[3][1]);
	return 0;
}

#include<stdio.h>
int main()
{
	printf("hehe\n");
	printf("hehe\n");
	printf("hehe\n");
	printf("hehe\n");
	printf("hehe\n");
	return 0;
}

#include<stdio.h>
int main()
{
	int num = 0;
	scanf("%d", &num);
	printf("%d", num);
	return 0;
}

#include<stdio.h>
int main()
{
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));//4
	return 0;
}

#include<stdio.h>
int main()
{
	int age = 10;
	age = 20;
	printf("%d", age);
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 1;
	int a, b, c, d, e, average;
	while (i < 50)
	{
		scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
		average = (a + b + c + d + e) / 5;
		printf("%d", average);
		i++;
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int a, b, num;
	scanf("%d %d", &a, &b);
	num = a + b;
	printf("%d", num);
	return 0;
}



//Çó1+...+100µÄºÍ
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

#include<stdio.h>
int main()
{
	int i = 0;
	int sum = 0;
	while (i <= 100)
	{
		sum = sum + i;
		i++;
	}
	printf("%d", sum);
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 1;
	do
	{
		printf("%d ", i++);
	} while (i <= 100);
	return 0;
}

#include<stdio.h>
int main()
{
	int i = 0;
	int sum = 0;
	do
	{
		sum = sum + i;
		i++;
	} while (i <= 100);
	printf("%d", sum);
	return 0;
}

#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		printf("%d ", i);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int i = 0;
	int sum = 0;
	for (i = 1; i <= 100; i++)
	{
		sum = sum + i;
	}
	printf("%d", sum);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
int main()
{
	int i = 1;         //初始化
	while (i <= 10)    //判断
	{
		printf("%d ", i);
		i++;           //调整
	}
	return 0;
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
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			break;
		printf("%d ", i);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;
		printf("%d ", i);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", i);
		i = 5;
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", i);
		i += 5;
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++)
	{
		printf("hehe\n");
		arr[i] = 0;
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i <= 10; i++)
	{
		printf("%d ", i);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	for (; i < 10; i++)
	{
		printf("%d ", i);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	for (; i < 10; i++)
	{
		for (; j < 10; j++)
		{
			printf("hehe\n");
		}
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int x, y;
	for (x = 0, y = 0; x < 2 && y < 5; ++x, ++y)
	{
		printf("hehe\n");
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int x = 0 ;
	int y = 0 ;
	for (x = 0, y = 0; x < 2 , y < 5; ++x, ++y)
	{
		printf("hehe\n");
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)
		k++;
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 1;
	do
	{
		printf("%d ", i);
		i++;
	} while (i <= 10);
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 1;
	do
	{
		if (i == 5)
			break;
		printf("%d ", i);
		i++;
	} while (i <= 10);
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 1;
	do
	{
		if (i == 5)
			continue;
		printf("%d ", i);
		i++;
	} while (i <= 10);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>


int main()
{
	//int n =0;
	int i = 0;
	int ret = 1;
	int j = 0;
	int sum = 0;
	//scanf("%d", &n);
	//1 2 6 = 9
	for(j=1; j<=3; j++)
	{
		ret *= j;
		sum = sum + ret;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}






int main()
{
	//int n =0;
	int i = 0;
	int ret = 1;
	int j = 0;
	int sum = 0;
	//scanf("%d", &n);
	//1 2 6 = 9
	for(j=1; j<=3; j++)
	{
		ret = 1;
		for(i=1; i<=j; i++)
		{
			ret *= i;
		}
		sum = sum + ret;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}

int main()
{
	int i = 1;
	do
	{
		if(i == 5)
			continue;
		printf("%d ", i);
		i++;
	}
	while(i<=10);
	system("pause");
	return 0;
}


int main()
{
	/*for(;;)
	{
	printf("hehe\n");
	}*/
// 	int i = 0;
// 	for(; i<10; i++)
// 	{
// 		printf("%d ", i);
// 	}
	int i = 0;
	int j = 0;
	for(; i<10; i++)
	{
		for(; j<10; j++)
		{
			printf("hehe\n");
		}
	}
	system("pause");
	return 0;
}


int main()
{
	int i = 0;
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};

	for(i=100; i<=200; i++)
	{

	}
	/*for(i=0; i<10; i++)
	{
	arr[i] = 0;
	}*/

	/*int i = 0;
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};

	for(i=0; i<=12; i++)
	{
	printf("hehe\n");
	arr[i] = 0;
	}
	*/
	return 0;
}

int main()
{
	int i = 0;
	for(i=1; i<=10; i++)
	{
		if(i==5)
			continue;
		printf("%d ", i);
		
	}
	system("pause");
	return 0;
}


int main()
{
	int ch = 0;

	while((ch=getchar()) != EOF)
	{
		if(ch<'0' || ch>'9')
			continue;
		putchar(ch);
	}

	system("pause");
	return 0;
}

//
int main()
{
	int ch = 0;
	ch = getchar();
	putchar(ch);
	//
	//EOF - end of file
	//
	/*while((ch=getchar()) != EOF)
	{
		putchar(ch);
	}*/

	system("pause");
	return 0;
}

int main()
{
	int i = 1;//初始化

	while(i<=10)//判断部分
	{
		if(i == 5)
			continue;
		printf("%d ", i);
		i++;//调整部分
	}

	system("pause");
	return 0;
}


int main()
{
	int i = 1;
	while(i<=10)
	{
		if(i == 5)
			break;
		printf("%d ", i);
		i++;
	}
	system("pause");
	return 0;
}

int main()
{
	while(1)
	{
		printf("hehe\n");
	}
	system("pause");
	return 0;
}

int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;
	case 2:n++;
	case 3:
		switch (n)
		{//switch允许嵌套使用
		case 1:	n++;
		case 2:m++;n++;break;
		}
	case 4:m++;break;
	default:break;
	}
	printf("m = %d, n = %d\n", m, n);
//	//4 3-3
//	//5 3-5
//	//2 1
//	//4 4
//	//3 3
	//
	system("pause");
	return 0;
}
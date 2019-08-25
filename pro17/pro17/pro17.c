#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("**********************************\n");
	printf("********欢迎来到猜数字游戏********\n");
	printf("********      1.play      ********\n");
	printf("********      0.exit      ********\n");
	printf("**********************************\n");
}
void game()
{
	//首先生成随机数
	//然后进行猜数字
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;//生成的随机数在1-100之间
	while (1)
	{
		printf("请猜数字\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");

		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择！");
		}
	} while (input);
}

#include<stdio.h>
int main()
{
again:
	printf("hehe\n");
	goto again;
	return 0;
}


//关机程序
#include<stdio.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑将在60s之后关机,如果输入我是猪，则取消关机\n");
	scanf("%s", input);
	if (0 == strcmp(input, "我是猪"))
	{
		system("shutdown -a");
	}
	else
	{
		printf("输入错误，请重新输入\n");
		goto again;
	}
	return 0;
}


//有三个字符串，要求找出其中的最大者
/*
解题思路:可以设一个二维的字符数组str，大小为3x20，即有3行20列（每一行可以容纳20个字符）
每一行存放一个字符串，此二维数组的存储情况如下所示：
str[0]:C h i n a \0 \0 \0 \0 \0 \0 \0 \0 \0 \0 \0 \0 \0 \0 \0
str[1]:J a p a n \0 \0 \0 \0 \0 \0 \0 \0 \0 \0 \0 \0 \0 \0 \0
str[2]:I n d i a \0 \0 \0 \0 \0 \0 \0 \0 \0 \0 \0 \0 \0 \0 \0
如上所述，可以把str[0],str[1],str[2]看作3个一维字符数组（他们各有20个元素），
可以把他们如同一维数组那样进行处理，今天用gets函数分别读入三个字符串，赋给3个一维字符数组
然后经过三次两两比较，就可以得到值最大者，然后把他放在一维字符数组string中.
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[3][20];
	char string[20];
	int i = 0;
	for (i = 0; i < 3; i++)
		//gets(string[i]);
		if (strcmp(str[0], str[1]) > 0)
			strcpy(string, str[0]);
		else
			strcpy(string, str[1]);
	if (strcmp(str[2], string) > 0)
		strcpy(string, str[2]);
	printf("the largest string is %s\n", string);
	return 0;
}


//用筛选法求100之内的素数
/*
所谓筛选法，指的是"埃拉托色尼筛法",采取的方法是，在一张纸上写上1-100 全部的整数
然后逐个判断他们是否为素数，找出一个非素数，就把他挖掉，最后剩下的就是素数
具体做法如下所示：
先把1挖掉，因为1不是素数
用2除它后面的各个数，能把2整除的数挖掉，即就是把2的倍数挖掉
用3除它后面的各个数，把3的倍数全部挖掉
分别用4，5，各数作为除数除这些数后面的各个数。这个过程一直进行到在除数后面的数已经全部被挖掉为止
事实上可以简化，如果需要找到1~n范围内的素数表，只需要进行到除数为根号下n（取其整数即可以）
例如对1~50，只需进行到将7作为除数即可

用计算机解此题，可以定义一个数组，a[1]~a[n]分别代表这1~n个数
如果检查出数组a的某一个元素的值是非素数，就使得它变为0，最后剩下的不为0的就是素数
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i, j, a[101], n;
	for (i = 1; i <= 100; i++)
		a[i] = i;//使得a[1]~a[100]的值为1~100
	a[1] = 0;//先挖掉a[1]
	for (i = 2; i < sqrt(100); i++)
		for (j = i + 1; j <= 100; j++)
		{
			if (a[i] != 0 && a[j] != 0)
				if (a[j] % a[i] == 0)//可以整除，不是素数，挖掉
					a[j] = 0;
		}
	printf("\n");
	for (i = 2, n = 0; i <= 100; i++)
	{
		if (a[i] != 0)
		{
			printf("%5d ", a[i]);
			n++;
		}
		if (n == 10)
		{
			printf("\n");
			n = 0;
		}
	}
	printf("\n");
	return 0;
}


//写一个函数判断一个数是不是素数
#include<stdio.h>
int is_prime(int n)
{
	int i = 0;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}


//写一个函数，判断是否为闰年
#include<stdio.h>
int is_LeapYear(int n)
{
	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
	{
		return 1;
	}
	else
		return 0;
}
int main()
{
	int i = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if (is_LeapYear(i) == 1)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}


//写一个二分查找的函数
#include<stdio.h>
int BinarySearch(int arr[], int sz, int key)
{
	int left = 0;
	int right = sz;
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
			return mid;
		}
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
	int key = 18;
	int ret = 0;
	ret = BinarySearch(arr, sz, key);
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了,下标是%d", ret);
	}
	return 0;
}



//用选择法对10个整数排序
/*
选择排序的思路如下：
设有10个元素，a[1]-a[10],将a[1]与a[2]-a[10]进行比较，若a[1]比a[2]-a[10]都小，则不进行交换，即无任何操作。
若a[2]-a[10]中有一个以上比a[1]小，则将其中最小的一个（假设为a[i]) 与a[1]交换，此时a[1]中存放了10个数中最小的一个
第二轮将a[2]与a[3]-a[10]进行比较，将剩下9个数中的最小的一个a[i]与a[2]进行交换
此时a[2]中存放了10个数中第二小的一个数，依次类推，共计进行9轮比较，就会排好序了
*/
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
			if (a[min] > a[j]) min = j;
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


//求一个3x3矩阵对角线元素的和
#include<stdio.h>
int main()
{
	int arr[3][3], i, j;
	int sum = 0;
	int sum1 = 0;
	int sum2 = 0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			scanf("%d", &arr[i][j]);
	for (i = 0; i < 3; i++)
		sum1 = arr[0][0] + arr[1][1] + arr[2][2];
	for (i = 0; i < 3; i++)
		sum2 = arr[0][2] + arr[1][1] + arr[2][0];
	sum = sum1 + sum2;
	printf("%d\n", sum);
	return 0;
}
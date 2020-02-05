#define _CRT_SECURE_NO_WARNINGS 1


//编写一个函数，实现n的k次方，用递归实现
//#include<stdio.h>
//int my_pow(int n,int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k == 1)
//		return n;
//	else
//		return n * my_pow(n,k-1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int ret = 0;
//	(void)scanf("%d %d", &n,&k);
//	ret = my_pow(n,k);
//	printf("%d", ret);
//	return 0;
//}


//库函数的pow
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int ret = 0;
//	(void)scanf("%d %d", &n, &k);
//	ret = pow(n, k);
//	printf("%d", ret);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//数组元素的逆置
//#include<stdio.h>
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left]= arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Reverse(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = a << 1;
//	//<<左移操作符
//	//左边丢弃，右边补0
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = -1;
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//	//采用的是算数右移
//}


////猜数字游戏的实现
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("***********************\n");
//	printf("**欢迎来到猜数字游戏!**\n");
//	printf("***      1.play      ***\n");
//	printf("***      0.exit      ***\n");
//	printf("***********************\n");
//}
//void game()
//{
//	int ret =0;
//	int guess = 0;
//	ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("请输入猜测的数字:>");
//		(void)scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了！\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了！\n");
//		}
//		else
//		{
//			printf("猜对了！\n");
//			break;
//		}
//	}
//}
//void test()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		(void)scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}
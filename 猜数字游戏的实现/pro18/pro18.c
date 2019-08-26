#include<stdio.h>
#include<time.h>//获取系统时间，通过这个函数，可以拿到当前的时间
#include<stdlib.h>
void menu()
{
	printf("*****************************\n");
	printf("***    1.play       0.exit***\n");
	printf("*****************************\n");
	//写了一个菜单
}
void game()
{
	/*
	1)生成随机数
	RAND_MAX-32767
	用rand（）函数,返回类型为整形 int ret=rand();
	*/
	int guess = 0;
	int ret = 0;
	ret = rand() % 100 + 1;
	//2.猜数字
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
	srand((unsigned int)time(NULL));//time的返回值时time_t;(其实是整形）
	//生成随机数的方式（时间戳）
	//时间戳可以转化为整数去计算
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//玩游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择!\n");
		}
	} while (input);
	return 0;
}
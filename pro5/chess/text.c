
#include"game.h"

void menu()
{
	printf("************************\n");
	printf("*****欢迎来到三子棋*****\n");
	printf("*****    1.play    *****\n");
	printf("*****    0.exit    *****\n");
	printf("************************\n");
}
void game()
{

}

void test()
{
	int input = 0;
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
			printf("输入错误，请重新输入\n");
		}
	}while(input)
}
int main()
{
	test();
	return 0;
}
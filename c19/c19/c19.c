/*
五位运动员参加了10m台跳水比赛，有人让他们预测比赛结果
A选手说，B第二，我第三；
B选手说：我第二，E第四；
C选手说：我第一，D第二；
D选手说：C最后，我第三；
E选手说：我第四,A第一；
比赛结束后，每位选手都说对了一半，请编程确定比赛的名次
思路：
A-E都可能是第一名到第五名的一种，每个人都有可能
那么我就把所有的情况都罗列出来
看那种满足所有人都说对一半的情况
那么就把所有的情况都列举出来
*/
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	//列出所有可能的情况
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						//然后用代码表示每个人所说的话
						if (((b == 2) + (a == 3) == 1) &&
							((b == 2) + (e == 4) == 1) &&
							((c == 1) + (d == 2) == 1) &&
							((c == 5) + (d == 3) == 1) &&
							((e == 4) + (a == 1) == 1))
						{
							if (a * b * c * d * e == 120)
							{
								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
							}
						}
					}
				}
			}
		}
	}
	return 0;
}



/*
日本某地发生一件谋杀案，警察通过排查确定杀人凶手
必为四个嫌犯中的一个，以下为四个嫌犯的供词：
A说：不是我
B说：是C；
C说：是D；
D说，C再胡说
已知现在三个人说的是真话，一个人说的是假话
现咋请根据这些信息，写一个程序来确定发到底谁是凶手
*/
#include<stdio.h>
int main()
{
	char killer = 0;
	for (killer = 'a'; killer < 'd'; killer++)
	{
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
		{
			printf("killer = %c ", killer);
		}
	}
	return 0;
}
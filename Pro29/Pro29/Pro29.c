#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0;
	int j = 1;
	int sum = 0;
	int n = 0;
	/*scanf("%d", n);*/
	for (n = 1; n <=3; n++)
	{
		j = 1;
		for (i = 1; i <= n; i++)
		{
			j = i*j;
		}
		sum = sum + j;
	}
	printf("%d\n", sum);
	return 0;
}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c<= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((b == 2) || (a == 3)) == 1 && ((b == 2) || (e == 4)) == 1 && ((c == 1) || (d == 2)) == 1 && ((c == 5) || (d == 3)) == 1 && ((e == 4) || (a == 1)) == 1)
						{
							if ((a*b*c*d*e) == 120 && (a + b + c + d + e) == 15)
							{
								printf("%d%d%d%d%d\n", a, b, c, d, e);
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int main()
{
	int killer = 0;
	for (killer = 'A'; killer <=' D'; killer++)
	{
		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D')==3)
		{
			printf("kille = %c", killer);
		}
	}
	return 0;
}

int main()
{
	int a = 10;
	printf("%d\n", a += a *= a -= a / 3);
	return 0;
}

int main()
{

	return 0;
}
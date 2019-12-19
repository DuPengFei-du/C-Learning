#include<stdio.h>
#include<Windows.h>

int main()
{
	int i, j, k;
	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			for (k = 0; k < 60; k++)
			{
				//ÇåÆÁ
				system("cls");
				printf("%02d:%02d:%02d", i, j, k);
				Sleep(950);
			}
		}
	}
	return 0;
}
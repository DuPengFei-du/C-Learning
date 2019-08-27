#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[100];
	int i, n;
	while (gets(str))
	{
		n = strlen(str);
		for (i = 0; i < n; i++)
		{
			if (str[i] >= 'A' && str[i] <= 'Y')
			{
				str[i] += 33;
			}
			else if (str[i] == 'Z')
			{
				str[i] = 'a';
			}
			else
			{
				if (str[i] >= 'a' && str[i] <= 'c')
				{
					str[i] = '2';
				}
				if (str[i] >= 'd' && str[i] <= 'f')
				{
					str[i] = '3';
				}
				if (str[i] >= 'g' && str[i] <= 'i')
				{
					str[i] = '4';
				}
				if (str[i] >= 'j' && str[i] <= 'l')
				{
					str[i] = '5';
				}
				if (str[i] >= 'm' && str[i] <= 'o')
				{
					str[i] = '6';
				}
				if (str[i] >= 'p' && str[i] <= 's')
				{
					str[i] = '7';
				}
				if (str[i] >= 't' && str[i] <= 'v')
				{
					str[i] = '8';
				}
				if (str[i] >= 'w' && str[i] <= 'z')
				{
					str[i] = '9';
				}
			}
		}
		puts(str);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && b++ && d++;
	printf("%d %d %d %d", a, b, c, d);
	return 0;
	//������Ϊ1��2��3��4
}


#include<stdio.h>
int main()
{
	int i = 0, a = 1, b = 2, c = 3, d = 4;
	i = a++ && b++ && d++;
	printf("%d %d %d %d", a, b, c, d);
	return 0;
	//������Ϊ2 3 3 5
}
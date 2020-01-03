#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 10;
	char c = 0;

	return 0;
}

int main()
{
	int n = 9;//4
	//0 00000000 00000000000000000001001
	float *pFloat = (float *)&n;
	printf("n的值为：%d\n",n);//9
	//(-1)^0 * 0.00000000000000000001001*2^-126
	printf("*pFloat的值为：%f\n", *pFloat);//0.000000
	*pFloat = 9.0;
//	//9.0
//	//1001.0
//	//1.001*2^3
//	//(-1)^0 * 1.001 * 2^3
//	//01000001000100000000000000000000
//	//
	printf("num的值为：%d\n",n);//9
	printf("*pFloat的值为：%f\n",*pFloat);//9.000000

	system("pause");
	return 0;
}

int main()
{
	float f = 5.5;
	//101.1
	//(-1)^0 * 1.011*2^2
	//
	//S=0
	//M=1.011
	//E=2
	//40b00000
	//0 10000001 01100000000000000000000
	//
	//(-1)^s*M*2^-126
	//
	//
	//(-1)^S * M * 2^E
	//0.5
	//0.1
	//1.0*2^-1
	//(-1)^0*1.0*2^-1
	//

	return 0;
}

#include <stdlib.h>


int Pow(int n, int k)
{
	if(k<1)
		return 1;
	else
		return n*Pow(n, k-1);
}
int main()
{
	int ret = Pow(2, 0);
	printf("%d\n", ret);
	system("pause");
	return 0;
}


int DigitSum(int n)
{
	if(n<10)
		return n;
	else
		return DigitSum(n/10)+n%10;
}

int main()
{
	int ret = DigitSum(1729);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
#include <assert.h>

int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	while(*str)
	{
		count++;
		str++;
	}
	return count;
}
void reverse_string(char * str)
{
	char tmp = *str;
	int len = my_strlen(str);
	*str = *(str+len-1);
	*(str+len-1) = '\0';
	if(my_strlen(str+1)>1)
		reverse_string(str+1);
	*(str+len-1) = tmp;
}
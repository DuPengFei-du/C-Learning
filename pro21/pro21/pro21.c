#include<stdio.h>
void test()
{
	printf("******************\n");
	printf("How do u do\n");
	printf("******************\n");
}
int main()
{
	test();
	return 0;
}



//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ
#include<stdio.h>
void print(int n)
{
	if (n > 9)
		print(n / 10);
	printf("%d ", n % 10);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	print(n);
	return 0;
}


//��д��������������ʱ���������ַ����ĳ���
//�൱��ģ��ʵ��strlen
#include<stdio.h>
int my_strlen(char const* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	int len = my_strlen("abc");
	printf("%d", len);
	return 0;
}


int my_strlen(char const* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
		return 0;
}
int main()
{
	int len = my_strlen("abc");
	printf("%d", len);
	return 0;
}


//��n�Ľ׳�
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 1;
	int sum = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum * i;
	}
	printf("%d", sum);
	return 0;
}

//��n�Ľ׳ˣ����������
#include<stdio.h>
int fac(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * fac(n - 1);
}
int main()
{
	int n = 0;
	int i = 1;
	int sum = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = fac(n);
	}
	printf("%d", sum);
}
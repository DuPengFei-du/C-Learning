#define _CRT_SECURE_NO_WARNINGS 1


//дһ���������ز�����������1�ĸ���
//���� 15 00001111 һ����4��1
//����ԭ��
//int count_one_bits(unsigned int value)  ��Ҫ����1�ĸ���
#include<stdio.h>
unsigned count_one_bits(unsigned int n)
{
	int count = 0;
	for (int i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
		count++;
	}
	return count;
}
int main()
{
	unsigned int n = 0;
	int ret = 0;
	(void)scanf("%d", &n);
	ret = count_one_bits(n);
	printf("%d", ret);
	return 0;
}


#include<stdio.h>
unsigned count_one_bits(unsigned int n)
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
			count++;
		n /= 2;
	}
	return count;
}
int main()
{
	unsigned int n = 0;
	int ret = 0;
	(void)scanf("%d", &n);
	ret = count_one_bits(n);
	printf("%d", ret);
	return 0;
}


#include<stdio.h>
unsigned count_one_bits(unsigned int n)
{
	int count = 0;
	while (n)
	{
		n = n&(n - 1);
		count++;
	}
	return count;
}
int main()
{
	unsigned int n = 0;
	int ret = 0;
	(void)scanf("%d", &n);
	ret = count_one_bits(n);
	printf("%d", ret);
	return 0;
}

/*
���ȥ�ж�һ�����ǲ���2^n�����ĳ������2��n�η�����ô�Ǹ����ֵĶ�����������
ֻ��1��1���Ǹ�1�ڵڼ�λ�ϣ�����2�ļ��η�
����Ϊn&(n-1)ÿִ��һ�ξͼ���һ��1���м���1�ͻ�ִ��һ�Ρ�
��ôֻ��Ҫʹ��n&(n-1)==0����ô˵����n��2��n�η���
*/
#include<stdio.h>
int main()
{
	int a = 5;
	float b = 2.0;
	printf("%lf", a / b);
}

#include<stdio.h>
int main()
{
	int a = 10;
	int b = 3;
	int c = a % b;
	printf("%d", c);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 10;
	int b = a << 1;
	printf("%d", b);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = -1;
	int b = a << 1;
	printf("%d", b);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = -1;
	int b = a >> 1;
	printf("%d", b);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	int c = a & b;
	printf("%d", c);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	int c = a | b;
	printf("%d", c);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	int c = a ^ b;
	printf("%d", c);
	return 0;
}

//����������
#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d", a, b);
	return 0;
}


//��д����ʵ�֣���һ�������洢���ڴ��еĶ������е�1�ĸ���
#include<stdio.h>
int main()
{
	//
	//һ���������洢���ڴ��е��Ƕ�����λ�Ĳ��룬��0��1��ɣ���һ������
	//��λ��1���õ����λ��Ȼ��Ҫ�ˣ��õ����λ֮���ٽ��ſ��ڶ�λ���ͽ��������
	//�����ƶ�һλ���ڶ�λ�����������λ��Ȼ������ͬ���ķ�����һֱ�����ƶ�
	//һֱ�����ƶ��������ƶ�32λ���õ��ڴ��еĶ������е�1�ĸ�����
	//
	//����1��
	int num = 10;
	int count = 0;//��������
	while (num)
	{
		if (num % 2 == 1)
			count++;
		num = num / 2;
	}
	printf("%d", count);
	return 0;
}
//����2��
#include<stdio.h>
int main()
{
	int num = 0;
	int i = 0;
	int count = 0;//��������
	scanf("%d", &num);
	for (i = 0; i < 32; i++)
	{
		if (((num >> i) & 1) == 1)
			count++;
	}
	printf("%d", count);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 10;
	int b = !a;
	printf("%d", b);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 10;
	int* p = &a;
	*p = 20;
	printf("%d", p);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 10;
	printf("%d", sizeof(a));
	printf("\n");
	printf("%d", sizeof(int));
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 10;
	printf("%d", sizeof a);
	return 0;
}

#include<stdio.h>
int main()
{
	int a[10] = { 0 };
	printf("%d", sizeof(a));//��λΪ�ֽ�
	return 0;
}
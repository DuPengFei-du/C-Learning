#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	printf("Hello World\n");
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("hehe\n");
	return 0;
}


#include<stdio.h>
int main()
{
	int num = 0;
	(void)scanf("%d", &num);
	printf("%d", num);
	return 0;
}


//�������͵Ĵ�С
#include<stdio.h>
int main()
{
	printf("%d\n", sizeof(int)); 
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	return 0;
}


#include<stdio.h>
int main()
{
	char ch = 'w';
	short age = 10;
	float weight = 55.5;
}

#include<stdio.h>
int main()
{
	short age = 10;
	age = 20;
	printf("%d", age);
	return 0;
}

#include<stdio.h>
int val = 20;
int main()
{
	int val = 10;
	printf("%d", val);
	return 0;
}

#include<stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	(void)scanf("%d %d", &num1, &num2);
	sum = num1 + num2;
	printf("%d", sum);
	return 0;
}

//ʵ���������ֵļӷ�
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	(void)scanf("%d %d", &a, &b);
	c = a + b;
	printf("%d ", c);
	return  0;
}


#include<stdio.h>
int main()
{
	printf("hehe\n");
	printf("%s", "hehe");
}


#include<stdio.h>
int main()
{
	int num = 10;
	printf("%d", num);
	return 0;
}

#include<stdio.h>
int main()
{
	{
		int num = 10;
	}
	//printf("%d", num);
	return 0;
	//��ʱ�������������num�������в�������printf��䡣
}


//enum  ö�ٳ���
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};


//�ַ���
#include<stdio.h>
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c',0 };
	printf("%s\n", "abc");
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
}



#include<stdio.h>
int main()
{
	printf("hehe\n");
	return 0;
}


#include<stdio.h>
int main()
{
	printf("c:\test\test.c\n");
	return 0;
}


#include<stdio.h>
int main()
{
	printf("c:\\test\\test.c\n");
	return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
	printf("%d\n", 10);
	printf("%d\n", strlen("abc"));
	printf("%d\n", strlen("c:\test\47\test.c"));
	return 0;
}


//�����ƵĻ�ϴ�ӡһ��������
#include<stdio.h>
int main()
{
	printf("%c\n", '\'');
	printf("%s\n", "\"");
	return 0;
}


#include<stdio.h>
int main()
{
	int input = 0;
	printf("Ҫѧϰ�� (1/0)\n");
	(void)scanf("%d", &input);
	if (input == 0)
	{
		printf("����ѧϰ\n");
	}
	else if (input == 1)
	{
		printf("�õ�offer\n");
	}
	return 0;
}


//дһ���������ӷ��ĺ���
#include<stdio.h>
int Add(int x, int y)
{
	int z = x + y;
	return z;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	(void)scanf("%d %d", &a, &b);
	c = Add(a, b);
	printf("%d\n", c);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	(void)scanf("%d %d", &a, &b);
	sum = a + b;
	printf("%d", sum);
}

#include<stdio.h>
int main()
{
	printf("hehe\n");
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d", arr[4]);
	return 0;
}

#include<stdio.h>
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	while (i < 10)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}


#include<stdio.h>
int main()
{
	int a1 = 5 / 2;
	float a2 = 5 / 2;
	float a3 = 5.0 / 2;
	printf("%d\n", a1);
	printf("%f\n", a2);
	printf("%f\n", a3);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 5 % 2;
	printf("%d", a);
	return 0;
}



#include<stdio.h>
int main()
{
	//int a = 5/2;
	//int a = 5/2.0;
	//printf("%d\n", a);
	//int a = 5%2;
	//printf("%d\n", a);
	int a = 15;
	int b = a>>1;
	//a = a<<1;
	printf("%d\n", a);
	printf("%d\n", b);
	//<< ��λ������-�ƶ����Ƕ�����λ
	//ԭ��-����-����
	//00000000000000000000000000001111-ԭ��-����-������ͬ
	//00000000000000000000000000011110
	//
	//-1
	//10000000000000000000000000000001-ԭ��
	//11111111111111111111111111111110-����
	//11111111111111111111111111111111-����
	system("pause");
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


//��λ���
#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	int c = a ^ b;
	printf("%d", c);
	return 0;
}
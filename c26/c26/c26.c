//����ָ�루��һ��ָ�룩��ָ�������ָ��
int arr[5];
int(*p)[5] = &arr;
//ָ�����飨�����飬�����е�ÿ��Ԫ����ָ��)
int* arr;//ÿ��Ԫ��Ϊ����
float* arr;//ÿ��Ԫ��Ϊ������
//����ָ�루ָ������ָ�룩
int my_strlen(const char* str)
{
	;
}
int (*p)(const char *)=my_strlen;
//pΪ����ָ��

//����ָ�����飨����һ��ָ�����飬ÿ��Ԫ���Ǻ���ָ�룩
int(*parr[5])(const char*);
//ָ����ָ�������ָ�루ָ�������ָ��--����ָ�룩
int(*(*parr[5]))(const char*);


//˭д�ĺ���˭ȥ���ã������Ӳ��лص�����
#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 0;
	int b = 0;
	int ret = 0;
	(void)scanf("%d %d", &a, &b);
	ret = Add(a, b);
	printf("%d", ret);
	return 0;
}


#include<stdio.h>
void menu()
{
	printf("*******************\n");
	printf("*****  1.Sum  *****\n");
	printf("*****  2.Sub  *****\n");
	printf("*****  3.Mul  *****\n");
	printf("*****  4.Div  *****\n");
	printf("*******************\n");
}
int Sum(int a, int b)
{
	return a + b;
}
int Sub(int a, int b)
{
	return a - b;
}
int Mul(int a, int b)
{
	return a * b;
}
int Div(int a, int b)
{
	return a / b;
}
void Calc(int(*p)(int, int))
{
	int a = 0;
	int b = 0;
	int ret = 0;
	printf("��������Ӧ������\n");
	(void)scanf("%d %d", &a, &b);
	ret = p(a, b);
	printf("%d\n", ret);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		(void)scanf("%d", &input);
		switch (input)
		{
		case 1:
			Calc(Sum);
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}


//ð������
#include<stdio.h>
int main()
{
	int arr[10] = { 12,32,11,34,56,45,78,98,33,67 };
	int i = 0;
	int j = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz-1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < sz - 1; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


//ð������
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,10,9 };
	int i = 0;
	int j = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


//��1 - 1 / 2 + 1 / 3 - 1 / 4 + �� + 1 / 99 - 1 / 100��ֵ��
#include<stdio.h>
int main()
{
	int j = -1;
	int i = 1;
	double z = 0.0;
	double sum = 0.0;
	for (i = 1; i <= 100; i++)
	{
		j = j * (-1);
		z = j * (1.0 / i);
		sum += z;
	}
	printf("%lf", sum);
	return 0;
}


//����������a,b,c��Ҫ�󰴴�С�����˳�����������
#include<stdio.h>
int main()
{
	int a, b, c;
	(void)scanf("%d %d %d", &a, &b, &c);
	if (a > b && b > c)
	{
		printf("%d %d %d", c, b, a);
	}
	if (a > c && c > b)
	{
		printf("%d %d %d", b, c, a);
	}
	if (b > a && a > c)
	{
		printf("%d %d %d", c, a, b);
	}
	if (b > c && c > a)
	{
		printf("%d %d %d", a, c, b);
	}
	if (c > a && a > b)
	{
		printf("%d %d %d", b, a, c);
	}
	if (c > b && b > a)
	{
		printf("%d %d %d", a, b, c);
	}
	return 0;
}


/*
�Ӽ�������һ��С��1000��������Ҫ�������ƽ����
���ƽ����������������ô���������������
Ҫ�����������ݺ��Ƚ��м���Ƿ�ΪС��1000�������������ǣ���Ҫ����������
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	if (n > 1000)
	{
		printf("�����������������\n");
		(void)scanf("%d", &n);
	}
	else
	{
		printf("%d", (int)sqrt(n));
	}
	return 0;
}


//��һ����������λ����������Ҫ������Ǽ�λ��
#include<stdio.h>
int main()
{
	int n = 0;
	printf("������һ����0-9999�������֣�>\n");
	(void)scanf("%d", &n);
	int ret = 0;
	if (n > 9)
	{
		ret = 2;
	}
	if (n > 99)
	{
		ret = 3;
	}
	if (n > 999)
	{
		ret = 4;
	}
	if(n<9)
	{
		ret = 1;
	}
	printf("%d", ret);
	return 0;
}


//��10������Ԫ�����θ�ֵΪ0��1��2��3��4��5��6��7��8��9, Ҫ���������
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i=0;i<10;i++)
	{
		arr[i] = i;
	}
	for (i = 9; i >= 0; i--)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
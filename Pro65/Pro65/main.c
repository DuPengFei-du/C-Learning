#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
int main()
{
	int day = 0;
	(void)scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday");
		break;
	case 6:
	case 7:
		printf("weekend");
		break;
	}
}


//��������Ϸ��ʵ��
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("************************\n");
	printf("***��ӭ������������Ϸ***\n");
	printf("***      1.play      ***\n");
	printf("***      0.exit      ***\n");
	printf("************************\n");
}
void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;
	while (1)
	{
		printf("����������:>");
		(void)scanf("%d", &guess);
		if (guess > ret)
			printf("�´���\n");
		else if (guess < ret)
			printf("��С�ˣ�\n");
		else
		{
			printf("�¶��ˣ�\n");
			break;
		}
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		(void)scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}


//ģ��ʵ��strlen
#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)
{
	assert(str != NULL);
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen(str + 1);
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
long long Fib(int n)
{
	long long a = 1;
	long long b = 1;
	long long c = 1;
	for (int i = 3; i <= n; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	printf("%lld", Fib(n));
	return 0;
}



#include<stdio.h>
int Add(int a, int b)
{
	return a + b;
}
int main()
{
	int a = 0;
	int c = 0;
	int b = 0;
	(void)scanf("%d %d", &a, &b);
	c = Add(a, b);
	printf("%d", c);
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	while (i < 10)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
int main()
//main���������������Ǻ��������
{
	printf("hehe\n");
	return 0;
}


#include<stdio.h>
int main()
{
	printf("%d\n", sizeof(int));  //4
	printf("%d\n", sizeof(char)); //1
	printf("%d\n", sizeof(short)); //2
	printf("%d\n", sizeof(long));  //4/8
	printf("%d\n", sizeof(long long));  //8
	printf("%d\n", sizeof(float));  //4
	printf("%d\n", sizeof(double));  //8
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


#include<stdio.h>
int main()
{
	int a = (1, 2, 3, 4, 5);
	printf("%d\n", a);
	return 0;
}


#include<stdio.h>
void test()
{
	int n = 1;
	n++;
	printf("%d ", n);
}
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		test();
	}
	return 0;
	//��Ļ�ϻ����10��2
}


#include<stdio.h>
void test()
{
	static int n = 1;
	n++;
	printf("%d ", n);
}
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		test();
	}
	return 0;
	//��Ļ�ϻ����10��2
}

#include<stdio.h>
int main()
{
	char c = 'w';
	int a = 10;
	int* pa = &a;
	char* pc = &c;
	printf("%d\n", sizeof(pa));  //4
	printf("%d\n", sizeof(pc));  //4
	return 0;
}
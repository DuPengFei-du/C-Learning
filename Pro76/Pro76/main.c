#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(int));  //4
//	printf("%d\n", sizeof(char)); //1
//	printf("%d\n", sizeof(short)); //2
//	printf("%d\n", sizeof(long));  //4/8
//	printf("%d\n", sizeof(long long));  //8
//	printf("%d\n", sizeof(float));  //4
//	printf("%d\n", sizeof(double));  //8
//	return 0;
//}
////���͵Ĵ�С��λ�����ֽ�
////������еĵ�λ 
////bit(λ) byte(�ֽ�) kbyte(kb) mb gb tb pb  
////ǰ������λ֮��Ļ��㵥λ��8������ĵ�λ֮�����1024


//#include<stdio.h>
//int main()
//{
//	int num = 10;
//	printf("%d", num);
//	return 0;
//	//�����������num��ֵ�ǿ���������ӡ������
//	//��Ϊnum�Ǿֲ�����������printf���Ҳ����num���������У������ǿ���������ӡ�����ġ�
//}


//#include<stdio.h>
//int main()
//{
//	{
//		int num = 10;
//	}
//	printf("%d", num);
//	return 0;
//	//��ʱ�������������num�������в�������printf��䡣
//}


//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};


//#include<stdio.h>
//int main()
//{
//	printf("c:\\test\\test.c\n");
//	return 0;
//}
////����Ľ��Ϊ
////c:\test\test.c


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	printf("%d\n", 10);
//	printf("%d\n", strlen("abc"));
//	printf("%d\n", strlen("c:\test\47\test.c");
//	return 0;
//	//���У�������printf����������Ϊ13����Ҫ�����������\47
//	//�����еı��ʻ����ڿ������ת���ַ������
//	//\dddҲΪת���ַ�������ddd��ʾ1-3���˽��Ƶ����֣�����������ͳһ�Ŀ���һ���ַ�������˵����Ϊ1.
//	//\xddd  ddd��ʾ3��16��������
//}


//#include<stdio.h>
//int main()
//{
//	int a1 = 5 / 2;
//	float a2 = 5 / 2;
//	float a3 = 5.0 / 2;
//	printf("%d\n", a1);
//	printf("%f\n", a2);
//	printf("%f\n", a3);
//	return 0;
//}
////����ڳ��������������洢����ʲô������û�й�ϵ��
////��Ҫ�ǿ����������Ĳ�����������ʲô���͵ģ������һ���Ǹ����͵ģ��õ��Ľ���ͻ��Ǹ����͵Ľ��


//#include<stdio.h>
//int main()
//{
//	//int a = 5/2;
//	//int a = 5/2.0;
//	//printf("%d\n", a);
//	//int a = 5%2;
//	//printf("%d\n", a);
//	int a = 15;
//	int b = a << 1;
//	//a = a<<1;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	//<< ��λ������-�ƶ����Ƕ�����λ
//	//ԭ��-����-����
//	//00000000000000000000000000001111-ԭ��-����-������ͬ
//	//00000000000000000000000000011110
//	//
//	//-1
//	//10000000000000000000000000000001-ԭ��
//	//11111111111111111111111111111110-����
//	//11111111111111111111111111111111-����
//	system("pause");
//	return 0;
//}
////��ϸ���ǿ��ʼǱ����������


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b) ? a : b;
//	printf("%d", max);
//	return 0;
//}


//#include<stdio.h>
//void test()
//{
//	static int n = 1;   //nΪ�ֲ�����
//	n++;
//	printf("%d ", n);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}
////��ӡ�Ľ����2-11����static���α����������˾Ͳ������ˡ�


//#include<stdio.h>
////�Զ�������
//struct Stu
//{
//	char name[20];   //һ�������������ַ�
//	int age;
//	float score;
//};
//int main()
//{
//	struct Stu s = { "����",20,60.0f };
//	struct Stu* ps = &s;  //�ṹ��ָ��
//	printf("%s %d %f", ps->name, ps->age, ps->score);
//	return 0;
//}


#include<stdio.h>
int main()
{
	int count = 0;
	int j = 0;
	for (int i = 100; i <= 200; ++i)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (j == i)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("%d", count);
	return 0;
}


#include<stdio.h>
#include<math.h>
int main()
{
	int count = 0;
	int j = 0;
	for (int i = 100; i <= 200; ++i)
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
				break;
		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("%d", count);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 1;
	(void)scanf("%d %d", &a, &b);
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	printf("%d", b);
	return 0;
}


#include<stdio.h>
void Print(int n)
{
	if (n > 9)
		Print(n / 10);
	printf("%d ", n % 10);
}
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	Print(n);
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
	//���У�������printf����������Ϊ13����Ҫ�����������\47
	//�����еı��ʻ����ڿ������ת���ַ������
	//\dddҲΪת���ַ�������ddd��ʾ1-3���˽��Ƶ����֣�����������ͳһ�Ŀ���һ���ַ�������˵����Ϊ1.
	//\xddd  ddd��ʾ3��16��������
}


//�����ƵĻ�ϴ�ӡһ��������
#include<stdio.h>
int main()
{
	printf("%c\n", '\'');
	printf("%s\n", "\"");
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
//�Զ�������
struct Stu
{
	char name[20];   //һ�������������ַ�
	int age;
	float score;
};
int main()
{
	struct Stu s = { "����",20,60.0f };
	struct Stu* ps = &s;  //�ṹ��ָ��
	printf("%s %d %f", (*ps).name, (*ps).age, (*ps).score);
	return 0;
}


#include<stdio.h>
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday\n");
		break;
	case 6:
	case 7:
		printf("weekend\n");
		break;
	default:
		printf("ѡ�����\n");
		break;
	}
}


#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		i++;
		if (i == 5)
			continue;
		printf("%d ", i);
	}
	return 0;
}
//��ӡ���Ϊ2��3��4��5��7��8��9��10��11
//continue���ã�continue������ֹ���ε�ѭ��������continue֮�����䲻��ִ�С�


//EOFΪend of file
#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;
}
//��ctrl+z��ͣ������


//����˷��ھ���
#include<stdio.h>
int main()
{
	for (int a = 1; a <= 9; ++a)
	{
		for (int b = 1; b <= a; b++)
		{
			printf("%d*%d=%2d ", a, b, a * b);
		}
		printf("\n");
	}
	return 0;
}


//��ʮ�������е����ֵ
#include<stdio.h>
int main()
{
	int arr[10] = { 12,34,675,32,75,24,86,23,88,16 };
	int max = arr[0];
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 1; i < sz; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d", max);
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	for (; i < 10; i++)
	{
		for (; j < 10; j++)
		{
			printf("hehe\n");
		}
	}
	return 0;
}
//��δ���ô�ӡ���ֻ��10��hehe
//����10��hehe�Ǵ�i=0-- i=9һ������ӡ������
//��i=0ʱ��j��һֱ��9����ӡ��10��hehe֮��j�������Ͳ���������
//����һ��ֻ���ӡ10��hehe


#include<stdio.h>
int my_strlen(const char* str)
{
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen(str + 1);
}
int main()
{
	char arr[] = "abc";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
int my_strlen(const char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return count;
}
int main()
{
	char arr[] = "abc";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
int my_strlen( char* str)
{
	char* ret = str;
	while (*str != '\0')
	{
		str ++ ;
	}
	return str - ret;
}
int main()
{
	char arr[] = "abc";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}
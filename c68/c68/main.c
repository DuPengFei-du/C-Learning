#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
int main()
{
	int a = 10;
	int b = a << 1;
	//<<���Ʋ�����
	//��߶������ұ߲�0
	printf("%d\n", b);
	printf("%d\n", a);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = -1;
	int b = a << 1;
	//�������ڴ��д洢���Ƕ����Ʋ���
	//-1�����ڴ��д洢�����Ǵ洢32��1��32��1Ϊ-1�Ĳ��롣
	//������ԭ������������ͬ
	//������д��ԭ�룬���λΪ����λ�����������λΪ1�������ķ���λΪ1������Ϊ0
	//���룺��ԭ��Ļ����ϣ�����λ����������λ��λȡ�����õ�����
	//����+1�õ�����
	printf("%d\n", b);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	int b = a << 1;
	//<<���Ʋ�����
	//��߶������ұ߲�0
	printf("%d\n", b);
	printf("%d\n", a);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 16;
	int b = a >> 1;
	printf("%d", b);
	return 0;
}
//�����8


#include<stdio.h>
int main()
{
	int a = 3;   //011
	int b = 5;   //101
	int c = a & b;    //001
	printf("%d\n", c);
	return 0;
	//�����1
}


#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	int c = a | b;
	printf("%d\n", c);
	return 0;
}
//���Ϊ7


//������λ��1�ĸ���
#include<stdio.h>
int main()
{
	int num = 0;
	int count = 0;
	(void)scanf("%d", &num);
	for (int i = 0; i < 32; ++i)
	{
		if (((num >> i)& 1) == 1)
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}


#include<stdio.h>
int main()
{
	int n = 0;
	int count = 0;
	(void)scanf("%d", &n);
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n = n / 2;
	}
	printf("%d", count);
	return 0;
}


#include<stdio.h>
int main()
{
	int n = 0;
	int count = 0;
	(void)scanf("%d", &n);
	while (n)
	{
		count++;
		n = n & (n - 1);
	}
	printf("%d", count);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	a = a + 2;
	a += 2;
	printf("%d\n", a);
	return 0;
}
//������������඼��������


#include<stdio.h>
int main()
{
	int a = 10;
	int b = !a;
	printf("%d\n", b);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 3;
	int b = -a;
	printf("%d\n", b);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	printf("%p\n", &a);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 10;
	printf("%p\n", &a);   //003DF718
	printf("%x\n", &a);   //3df718
	return 0;
}
//%x��ʾ��16���ƴ�ӡ�������16���ƴ�ӡ��ǰ��ͻ���00


#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);      //��Ԫ�صĵ�ַ
	printf("%p\n", &arr[0]); //��Ԫ�صĵ�ַ
	printf("%p\n", &arr);    //����ĵ�ַ
	return 0;
}
//������ֵ��Ϊ00FBFCF0


#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", arr + 1);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0] + 1);
	printf("%p\n", &arr);   //����ĵ�ַ
	printf("%p\n", &arr + 1); //����ĵ�ַ��1
	return 0;
}
//����ĵ�ַ��1����������������


#include<stdio.h>
int main()
{
	int a = 1;
	printf("%d\n", sizeof(a));  //4
	printf("%d\n", sizeof(int));   //4
	return 0;
}
//printf("%d\n",sizeof a);
//sizeof���ԶԱ���ʡ�����ţ����ܶ�����ʡ������


#include<stdio.h>
void test(int arr[])
{
	printf("%d\n", sizeof(arr));   //���鴫�δ�����������Ԫ�صĵ�ַ�����Խ����4
	//Ҫ��ָ�����
}
int main()
{
	int arr[10] = { 0 };
	test(arr);
}


#include<stdio.h>
int main()
{
	short a = 10;
	int b = 3;
	printf("%d\n", sizeof(a = b + 5));  //2
	printf("%d\n", a);         //10
	return 0;
}
//ֵ����Ҫע����ǣ�
//sizeof��������������Ǻ�����
//����sizeof�����е�����ֻ��������Ǵ��Σ������еı��ʽ�ǲ��ᱻ����ġ�
//����a��ֵ�ǲ�û�з����ı�ġ�
//��int���͵Ķ�����Ҫ����short�����У��ǵ�Ȼ��short˵����ģ�����sizeof��������ֽ����Ľ����2


#include <stdio.h>
void test1(int arr[])
{
	printf("%d\n", sizeof(arr));//(2)   //��ָ����յģ���СΪ4
}
void test2(char ch[])
{
	printf("%d\n", sizeof(ch));//(4)  //������һ���״�ĵ㣬������ָ����յ�
	//���Դ�С����4����char��û���κι�ϵ��
}
int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));//(1)
	printf("%d\n", sizeof(ch));//(3)
	test1(arr);
	test2(ch);
	return 0;
}


#include <stdio.h>
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;
	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
	return 0;
}
//��ӡ��ֵ��1 2 3 4


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	printf("%d\n", arr[5]);
	printf("%d\n", p[5]);
	printf("%d\n", *(p + 5));
	printf("%d\n", *(arr + 5));
	return 0;
	//p[5]==*(p+5)
	//arr[5]==*(arr+5)==*(5+arr)==5[arr]
}
//�⼸����ӡ�Ľ����һ����


//#include<stdio.h>
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//};
//int main()
//{
//	struct Stu s = { "����", 30, "��" };
//	printf("%s\n", s.name);
//	printf("%d\n", s.age);
//	printf("%s\n", s.sex);
//	return 0;
//}


#include<stdio.h>
int main()
{
	char a = 0xb6;//11000110
	short b = 0xb600;
	int c = 0xb6000000;
	if (a == 0xb6)
		printf("a");
	if (b == 0xb600)
		printf("b");
	if (c == 0xb6000000)
		printf("c");
	system("pause");
	return 0;
}
//��ӡ���Ϊc
//������������������������


#include<stdio.h>
int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));//1
	printf("%u\n", sizeof(+c));//4
	printf("%u\n", sizeof(!c));//4
	//+c�ͣ�c����Ҫ�������㣬��������ͻᷢ��������������ô�ͱ��int������
	//sizeof(int) ,�������4�����ˡ�
	return 0;
}


//��дһ�����򣬿���һֱ���ռ����ַ�
//�����Сд�ַ��������Ӧ��д�ַ�
//����Ǵ�д�ַ����������Ӧ��Сд�ַ�
//��������֣���ô�Ͳ����
#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'a' && ch <= 'z')
			putchar(ch - 32);
		else if (ch >= 'A' && ch <= 'Z')
			putchar(ch + 32);
		else if (ch >= '0' && ch <= '9')
			continue;
		else
			putchar(ch);
	}
	return 0;
}


//��ȡһ�������������������е�ż��λ������λ
//�ֱ��������������
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	(void)scanf("%d", &n);
	//ż��λ
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d", (n >> i) & 1);
	}
	printf("\n");
	//����λ
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", (n >> i) & 1);
	}
	return 0;
}
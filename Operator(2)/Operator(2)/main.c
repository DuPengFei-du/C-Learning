#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
int main()
{
	int a = 1;
	printf("%d\n", sizeof(a));  //4
	printf("%d\n", sizeof(int));   //4
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr)); //40  �����������Ĵ�С
	return 0;
}


#include<stdio.h>
void test(int arr[])   //int *arr
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
	printf("%d\n", sizeof(a = b + 5));
	printf("%d\n", a);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	int b = ~a;
	printf("%d\n", b);
	return 0;
	//�����-11
    //00000000000000000000000000001010  --����
	//11111111111111111111111111110101  --��λȡ����Ĳ���
	//11111111111111111111111111110100  --����
	//10000000000000000000000000001011  --ԭ��
}


#include<stdio.h>
int main()
{
	int a = 10;
	int b = a++;
	printf("%d\n", b);  //10
	printf("%d\n", a);  //11
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	int b = ++a;
	printf("%d\n", b);  //11
	printf("%d\n", a);  //11
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	int* p = a;
	printf("%d\n", a);
	return 0;
	//*p��ʵ����a
}


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


#include<stdio.h>
int main()
{
	int arr1[] = "abcdef";
	if (arr1 == "abcdef")
	{
		printf("hehe\n");
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int len = strlen("abc");   //����ȥ����a�ĵ�ַ
	char* p = "abcdef";       //�ǰ�a�ĵ�ַ����p�е�
}


#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	int c = a && b;
	printf("%d\n", c);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	int c = a || b;
	printf("%d\n", c);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 5;
	int c = a && b;
	printf("%d\n", c);
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


#include <stdio.h>
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++||++b||d++;
	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 1;
	int b = 2;
	int c = (a > b, a = b + 10, a, b = a + 1);
	printf("%d\n", c);
	return 0;
	//�����13�����ű��ʽ
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", arr[5]);
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	printf("%d\n", arr[5]);
	printf("%d\n", p[5]);
	printf("%d\n", *(p+5));
	printf("%d\n", *(arr + 5));
	return 0;
//p[5]==*(p+5)
//arr[5]==*(arr+5)==*(5+arr)==5[arr]
}


#include<stdio.h>
struct Stu
{
	char name[20];
	int age;
	char sex[5];
};
int main()
{
	struct Stu s = { "����", 30, "��" };
	printf("%s\n", s.name);
	printf("%d\n", s.age);
	printf("%s\n", s.sex);
	return 0;
}


#include<stdio.h>
struct Stu
{
	char name[20];
	int age;
	char sex[5];
};
int main()
{
	struct Stu s = { "����", 30, "��" };
	struct Stu* ps = &s;
	printf("%s\n", ps->name);
	printf("%d\n", ps->age);
	printf("%s\n", ps->sex);
	return 0;
}
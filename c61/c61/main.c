#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
int main()
{
	char arr1[] = "abcdef";
	//������һ�����飬�����д����abcdef
	const char* p = "abcdef";
	//���ַ���abcdef����Ԫ�صĵ�ַ����a�ĵ�ַ������p��
	arr1[2] = 'w';
	//�޸������е����ݣ��Ǳ������
	//*(p + 2) = 'w';        //p[2]
	//p��ָ�����һ�������ַ����������ַ����е�ֵ�ǲ����Ա��޸ĵ�
	return 0;
	//����������������ǻ�����ģ���������Ҫԭ�����ڣ�*(p+2)='w'
	//�������ǲ���ȷ��
	//�ַ�ָ�벻������������ַ��ĵ�ַ�������ܴ��һ���ַ�������ʼ��ַ
}


#include<stdio.h>
int main()
{
	int a = 10;
	char c = 'w';
	int* p1 = &a;
	char* p2 = &c;
	int arr[10] = { 0 };
	char ch[5] = { 0 };
	char* arr2[6] = { 0 };
	//����ָ�����ָ�������ָ��
	//arr  ��ʾ������Ԫ�صĵ�ַ
	//&arr[0]��ʾ������Ԫ�صĵ�ַ
	//&arr ��ʾ����ĵ�ַ
	int(*p)[10] = &arr;  //����ĵ�ַ 
	char(*pc)[5] = &ch;
	char* (*pa)[6] = &arr2;
	return 0;
}


#include<stdio.h>
void Print1(int arr[], int sz)
{
	int i = 0;
	for (i = 1; i <= sz; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
}
void Print2(int(*p)[10], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", (*p)[i]);
		//�����ҵ����飬��(*p)�ҵ����飬Ȼ��ȥ���ʵ�i��Ԫ��
		//����������ŵĻ�����ôp�ͻ��Ⱥ�[]���н��
		//��ʵ(*p)�͵�����������Ȼ��[i]�����൱����arr[i];
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Print1(arr, sz);
	Print2(&arr, sz);
	return 0;
}


#include<stdio.h>
void Print1(int arr[3][5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
void Print2(int(*p)[5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			//printf("%d ", (*(p+i))[j]);
			printf("%d ", *(*(p + i) + j));
			//*(p+i)�൱���ҵ��˵�i����Ԫ�صĵ�ַ
			//Ҳ����д��p[i][j]
			//��ʵp���൱��arr
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { 1,2,3,4,5,3,4,5,6,7,4,5,6,7,8 };
	Print1(arr, 3, 5);
	Print2(arr, 3, 5);
	//arr������Ԫ�صĵ�ַ�����ڶ�ά������˵����Ԫ�صĵ�ַ���ǵ�һ�еĵ�ַ
	//�����б��Ǻ���Ҫ��
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[5];          //��������
	int* parr1[10];      //ָ������
	int(*parr2)[10];     //����ָ��
	int(*parr3[10])[5];  //�������ָ������飬���Դ��10��������ָ��
	//������10�����������д洢���������������ָ��
	//5������Ԫ�ص�����ĵ�ַ ������ÿ��Ԫ�ص�������int
}


#include<stdio.h>
void test(int arr[3][5])
{

}
//void test(int arr[][])
//{
//	//���ִ����ǲ���ȷ�ģ�����ʡ���У�������ʡ����
//}
void test(int arr[][5])
{

}
//�ܽ�:��ά���鴫�Σ�������ʽ�����ֻ��ʡ�Ե�һά��[],����ʡ�Եڶ�ά��
//��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ���֪��һ���ж��ٸ�Ԫ��
//�����Ż᷽�����㣬ͬ����һ���ĵ��������������ղ�������ô��ԭģԭ���Ľ��վͿ�����
void test(int(*arr)[5])
{

}
int main()
{
	int arr[3][5];
	test(arr);
}


#include<stdio.h>
void test(int** ptr)
{

}
int main()
{
	int n = 10;
	int* p = &n;
	int** pp = &p;
	test(pp);
	test(&p);
	return 0;
}


#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	printf("%p\n", &Add);   //֤ʵ�˺���Ҳ���е�ַ��
	int (*p)(int x, int y) = &Add;
	int ret = (*p)(2, 3);   //�����ĵ���
	//Ҳ����д���� int ret=p(2,3);
	//�ĸ�*д��д���У�д��������
	//(*p)�����ҵ����������Ȼ�󴫲ν��е���
	//p�Ǻ���ָ��
	return 0;
}


#include<stdio.h>
int main()
{
	void (*pfun1)();   //����ָ�� �������޲Σ�����ֵ����Ϊvoid����
	void* pfun2();    //���������������޲Σ������ķ���ֵ����Ϊvoid*����
}


#include<stdio.h>
int my_strlen(const char* str)
{

}
int main()
{
	int* arr[10];  //����ָ������
	char* arr[5];  //�ַ�ָ������
	int (*ps)(const char*) = &my_strlen;
	int (*ps2)(const char*) = &my_strlen;
	int (*ps3)(const char*) = &my_strlen;
	int (*pArr[3])(const char*) = &my_strlen;   //����ָ������
	//��ź���ָ�������
	return 0;
}

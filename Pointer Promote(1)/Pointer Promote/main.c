#define _CRT_SECURE_NO_WARNINGS 1


//ָ�����
#include<stdio.h>
int main()
{
	char a = 'w';
	char* pc = &a;   //���ʱ��pc��Ϊ�ַ�ָ�룬pc������Ϊchar*
	char arr[10] = "abc";
	char* pa = arr;   //arr��Ϊ�����������������������Ԫ�صĵ�ַ��pa������Ϊchar*
	char* p = "abcdef";  //��ʱpֻ����4���ֽڣ�����abcdef����\0��6���ֽڣ���Ȼ�Ų���
	//��ô��ʱ��p�д�ľ���"abcdef"���׸���ĸa�ĵ�ַ����ַ��ָ����գ��պ�Ϊ4���ֽ�
	//�����������ʽ�Ľ���������ַ�a�ĵ�ַ��
}


#include<stdio.h>
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abcdef";
	if (arr1 == arr2)
		printf("arr1==arr2\n");
	else
		printf("arr1!=arr2\n");
	return 0;
	//��ӡ���Ϊarr1!=arr2
	//ԭ��:��Ϊarr1��arr2�Ὺ������ռ�Ĵ�С����Ȼ����ʾ��������ĸa�ĵ�ַ
	//��������ռ�ĵ�ַ�ǲ�һ���ģ���������ռ���a�ĵ�ַ��ȻҲ���ǲ�һ�����ˡ�
}


#include<stdio.h>
int main()
{
	char* p1 = "abcdef";
	char* p2 = "abcdef";
	if (p1 == p2)
		printf("p1==p2");
	else
		printf("p1!=p2");
	return 0;
	//��ӡ���Ϊp1==p2
	//��Ȼ���ַ���abcdef��ַ������p1��p2���У����������ַ�����һ����
	//����abcdef��������Ԫ��a�ĵ�ַ��ȻҲ��һ������
	//abcdefΪ�����ַ���������˵���ǲ��ܱ��ı�ģ���ʵҲֻ�����һ��abcdef
	//����p1�ĵ�ַ��p2�ĵ�ַ�Ǿ��Բ�һ���ġ�
}


#include<stdio.h>
int main()
{
	char arr1[] = "abcdef";
	//������һ�����飬�����д����abcdef
	char* p = "abcdef";
	//���ַ���abcdef����Ԫ�صĵ�ַ����a�ĵ�ַ������p��
	arr1[2] = 'w';
	//�޸������е����ݣ��Ǳ������
	*(p + 2) = 'w';        //p[2]
	//p��ָ�����һ�������ַ����������ַ����е�ֵ�ǲ����Ա��޸ĵ�
	return 0;
	//����������������ǻ�����ģ���������Ҫԭ�����ڣ�*(p+2)='w'
	//�������ǲ���ȷ��
	//�ַ�ָ�벻������������ַ��ĵ�ַ�������ܴ��һ���ַ�������ʼ��ַ
}


//ָ������  ���ָ�������
#include<stdio.h>
int main()
{
	int arr[10];  //��������
	int* arr1[5];  //ָ�����飬���ָ������飬Ҳ�������ڲ�Ԫ�ص�������ָ������
	char** arr3[5]; //�����ַ�ָ�������
	return 0;
}


//����ָ��
#include<stdio.h>
int main()
{
	int a = 10;
	char c = 'w';
	int* p1 = &a;
	char* p2 = &c;
	int arr[10] = { 0 };
	//����ָ�����ָ�������ָ��
	//arr  ��ʾ������Ԫ�صĵ�ַ
	//&arr[0]��ʾ������Ԫ�صĵ�ַ
	//&arr ��ʾ����ĵ�ַ
	int(*p)[10] = &arr;  //����ĵ�ַ 
	return 0;
}


#include<stdio.h>
void Print1(int arr[], int sz)
{
	int i = 0;
	for (i = 1; i <=sz; i++)
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
		printf("%d ",(*p)[i]);
		//�����ҵ����飬��(*p)�ҵ����飬Ȼ��ȥ���ʵ�i��Ԫ��
		//����������ŵĻ�����ôp�ͻ��Ⱥ�[]���н��
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
void Print2(int(*p)[5], int x,int y)
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


//һά����Ĵ���
#include<stdio.h>
void test(int arr[])
{

}
void test(int arr[10])
{

}
void test(int* arr)
{

}
void test2(int* arr[20])
{

}
void test(int** arr)
{

}
//�����ļ��ִ�����ʽ������ȷ�ģ����Ҫ�����������ʽ���ݣ���ô��ԭģԭ���Ĵ��ݾͿ����ˡ�
//һά�����������ָ�����ʽ����ô���ö���ָ�������ղ������Ϳ����ˡ�
int main()
{
	int arr[10] = { 0 };
	int* arr2[20] = { 0 };
	test(arr);
	test2(arr2);
	return 0;
}


//��ά���鴫��
#include<stdio.h>
void test(int arr[3][5])
{

}
void test(int arr[][])
{
	//���ִ����ǲ���ȷ�ģ�����ʡ���У�������ʡ����
}
void test(int arr[][5])
{

}
//�ܽ�:��ά���鴫�Σ�������ʽ�����ֻ��ʡ�Ե�һά��[],����ʡ�Եڶ�ά��
//��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ���֪��һ���ж��ٸ�Ԫ��
//�����Ż᷽�����㣬ͬ����һ���ĵ��������������ղ�������ô��ԭģԭ���Ľ��վͿ�����
void test(int (*arr)[5])
{

}
int main()
{
	int arr[3][5];
	test(arr);
}
#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
int main()
{
	int a = 1;
	char* pa = (char*)& a;
	if (*pa == 1)
		printf("С��\n");
	else
		printf("���\n");
	return 0;
}


#include<stdio.h>
int CheckSystem()
{
	int a = 1;
	char* pa = (char*)& a;
	return *pa;
}
int main()
{
	int ret = CheckSystem();
	if (ret == 1)
		printf("С��\n");
	else
		printf("���\n");
	return 0;
}


#include<stdio.h>
int CheckSystem()
{
	union Un
	{
		int i;
		char c;
	}u;
	u.i = 1;
	return u.c;
}
int main()
{
	int ret = CheckSystem();
	if (ret == 1)
		printf("С��\n");
	else
		printf("���\n");
	return 0;
}


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
	int arr[10];  //��������
	int* arr1[5];  //ָ�����飬���ָ������飬Ҳ�������ڲ�Ԫ�ص�������ָ������
	char** arr3[5]; //�����ַ�ָ�������
	return 0;
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
void Print(int* p, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	Print(p, sz);
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
int main()
{
	//����1
	(*(void(*)())0)();

	/*
	���ȣ�void(*)()Ϊ����ָ�����ͣ����void(*)()�ڷ���������
	�γ���(void(*)()),���Ƕ�֪����һ�����ͷ��������У�������
	ǿ������ת���ģ�(void(*)())�ַ���0ǰ�棬��˼���ǰ�0ת����
	����ָ�����ͣ�0������������int����ϣ����0���ɺ���ָ�����͵�������
	һ�������ĵ�ַ��������ϣ��0�����ַ���ŵ���һ���޲Σ�����ֵ����
	Ϊvoid�ĺ�����Ȼ�󣬼�Ȼ�Ǹ���ַ����ô�Ҿͽ�����һ��
	�������ϣ�������һ���������á�
	����0λ�ô��ĺ����������õ�����������޲εģ�����ֵ����Ϊvoid������
	*/

	//����2
	void (*signal(int, void(*)(int)))(int);
	/*
	��δ�������������һ����������������signalΪ��������signal�����ĵ�һ������
	Ϊint���ͣ��ڶ�����������Ϊ����ָ�����ͣ����˺����������˲���
	ʣ�µľ��Ǻ����ķ���ֵ�����ˣ���������ķ���ֵ����Ҳ��һ������ָ������
	*/
	/*
	��������Ϊ���������������κ���ָ�����ͣ��������ǿ�����typedef����
	����������������
	typedef void(*pfun_t)(int);
	������������Ҳ���Ա��
	pfun_t signal(int,pfun_t);
	*/
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


int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int (*p)(int, int);   //����ָ��
int (*parray[2])(int, int);  //����ָ������
int(*(*ptr)[2])(int, int) = &parray;//ָ����ָ�������ָ��
//ptr��ָ��


#include<stdio.h>
//1�ų���Աд�Ĵ���
int Add(int x, int y)
{
	return x + y;
}
//2�ų���Աд�Ĵ���
int test(int (*pf)(int, int))
{
	//���2�ų���Ա���������ڲ�����Add�����Ļ����ҿ������������н�Add�����ĵ�ַ���ݸ�2�ų���Աд�Ĵ���
	//��ô2�ų���Աд�Ĵ��룬��Ҫ��Add�����ĵ�ַ���н��գ����ú���ָ��(ָ������ָ��)
	//pfΪָ�����
	pf(2, 4);  //�������ָ����ָ��ĺ�������ʱ�����õĺ����ͳ�Ϊ�ص�����
}
int main()
{
	//1�ų���Ա���е���
	//�Լ�д�Ĵ��룬�Լ�ֱ�ӵ��ã����ֲ�����Ϊ�ص�����
	int ret = Add(2, 3);
	int res = test(Add);
	printf("%d", res);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	(void)scanf("%d %d", &a, &b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d", a, b);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	(void)scanf("%d %d", &a, &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d %d", a, b);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int temp = 0;
	(void)scanf("%d %d", &a, &b);
	temp = a;
	a = b;
	b = temp;
	printf("%d %d", a, b);
	return 0;
}


//��������1�ĸ���
#include<stdio.h>
int main()
{
	int n = 0;
	int count = 0;
	(void)scanf("%d", &n);
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	printf("%d", count);
	return 0;
}


//��������1�ĸ���
#include<stdio.h>
int main()
{
	int n = 0;
	int count = 0;
	(void)scanf("%d", &n);
	for (int i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
			count++;
	}
	printf("%d", count);
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
	int a = -1;
	int b = a >> 1;
	printf("%d\n", b);
	return 0;
	//���õ�����������
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


#include<stdio.h>
int main()
{
	int a = 3;  //011
	int b = 5;  //101
	int c = a ^ b;   //110
	printf("%d\n", c);
	return 0;
}
//���Ϊ6


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
	//printf("%x\n", &a);   //3df718
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
int main()
{
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr)); //40  �����������Ĵ�С
	return 0;
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
	int* p = &a;
	printf("%d\n", a);
	return 0;
	//*p��ʵ����a
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
//��δ����ǲ����ӡ�κν����
//arr1��ʵ����Ԫ�صĵ�ַ�������ǲ�����abcdef��
//������==���ж��ַ����������Ƿ����


#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	int c = a && b;
	printf("%d\n", c);
	return 0;
}
//���Ϊ1���߼���ֻ�����ֵ����


#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	int c = a || b;
	printf("%d\n", c);
	return 0;
}
//���Ϊ1


#include <stdio.h>
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;
	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
	return 0;
}
// ��ӡ��ֵ��1 2 3 4


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
	printf("%d\n", *(p + 5));
	printf("%d\n", *(arr + 5));
	return 0;
	//p[5]==*(p+5)
	//arr[5]==*(arr+5)==*(5+arr)==5[arr]
}
//�⼸����ӡ�Ľ����һ����
//˵��


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
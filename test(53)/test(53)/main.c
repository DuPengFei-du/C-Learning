#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
int main()
{
	int age = 0;
	(void)scanf("%d", &age);
	if (age < 18)
		printf("δ����\n");
	return 0;
}


#include<stdio.h>
int main()
{
	int age = 0;
	(void)scanf("%d", &age);
	if (age < 18)
		printf("δ����\n");
	else
		printf("����\n");
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
		if (b == 2)
			printf("hehe\n");
		else
			printf("haha\n");
	return 0;
}
//��δ���ʲô�������ӡ �ڶ���else���ڱ������������͵ڶ���if����
//���Դ���ʲô�������ӡ��û�з��ŵ�������


#include<stdio.h>
int main()
{
	int age = 10;
	if (age == 5)
		printf("age==5\n");
	return 0;
}
//��Ļ��ʲô�������ӡ����Ϊage��=5��


#include<stdio.h>
int main()
{
	int age = 10;
	if (age = 5)
		printf("age==5\n");
	return 0;
}
//ƵĻ�ϻ��ӡage==5����Ϊ��5��ֵ����age������if��������������ֵ����ģ����Իش�ӡҪ�����Ϣ


#include<stdio.h>
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	if (n % 2 == 1)
		printf("����\n");
	else
		printf("ż��\n");
	return 0;
}


#include<stdio.h>
int main()
{
	int count = 0;
	for (int i = 100; i <= 200; i++)
	{
		if (i % 2 == 1)
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
	int day = 0;
	(void)scanf("%d", &day);
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
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;
	case 2:n++;
	case 3:
		switch (n)
		{//switch����Ƕ��ʹ��
		case 1:	n++;
		case 2:m++; n++;	break;
		}
	case 4:m++; break;
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n);
	system("pause");
	return 0;
}
//�����m=5��n=3��


#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		printf("%d ", i);
		i++;
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			break;
		printf("%d ", i);
		i++;
	}
	return 0;
}
//��ӡ���Ϊ1��2��3��4
//break���õ�����ѭ����ֹͣ���ڵ�����ѭ�������õ���ֹѭ��


#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			continue;
		printf("%d ", i);
		i++;
	}
	return 0;
}
//��ӡ�����1��2��3��4��4��4��4��4...��ѭ��


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


#include<stdio.h>
int main()
{
	int count = 0;
	int j = 0;
	for (int i = 100; i <= 200; i++)
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
	for (int i = 100; i <= 200; i++)
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
	for (int a = 1; a <= 9; a++)
	{
		for (int b = 1; b <= a; b++)
		{
			printf("%d*%d=%2d ", a, b, a * b);
		}
		printf("\n");
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		{
			printf("%d ", i);
			count++;
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
	int temp = 0;
	(void)scanf("%d %d", &a, &b);
	temp = a;
	a = b;
	b = temp;
	printf("%d %d", a, b);
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
//��������λ�������ͬΪ0������Ϊ1��
//����ܽ�����������������͵�����
//���������㷨�����������������
//��δ���Ŀɶ���Ҳ�Ƚϲһ��ʼ�ǿ�������


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
//�������ַ�����������������⣬���a��b�ر��Ļ�����a+b��ֵ����a����ͻ������
//�����͵ò�����Ҫ�Ľ����


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
	char* pa = arr;   //arr��Ϊ������������������������Ԫ�صĵ�ַ��pa������Ϊchar*
	char* p = "abcdef";  //��ʱpֻ����4���ֽڣ�����abcdef����\0��6���ֽڣ���Ȼ�Ų���
	//��ô��ʱ��p�д�ľ���"abcdef"���׸���ĸa�ĵ�ַ����ַ��ָ����գ��պ�Ϊ4���ֽ�
	//������������ʽ�Ľ���������ַ�a�ĵ�ַ��
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
#include<stdlib.h>
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void Swap(char* buf1, char* buf2, int width)
{
	for (int i = 0; i < width; i++)
	{
		char temp = *buf1;
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2++;
	}
}
void My_BubblSort(int* arr, int sz, int width, int (*cmp_int)(const void* e1, const void* e2))
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (cmp_int((char*)arr + j * width,(char*)arr + (j + 1) * width) > 0)
			{
				Swap((char*)arr + j * width, (char*)arr + (j + 1) * width, width);
			}
		}
	}
}
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	My_BubblSort(arr, sz, sizeof(arr[0]), cmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
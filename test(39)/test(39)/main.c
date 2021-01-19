#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
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
void My_BubbleSort(int* arr, int sz, int width, int (*cmp_int)(const void* e1, const void* e2))
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (cmp_int((char*)arr + j * width, (char*)arr + (j + 1) * width) > 0)
			{
				Swap((char*)arr + j * width, (char*)arr + (j + 1) * width,width);
			}
		}
	}
}
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	My_BubbleSort(arr, sz, sizeof(arr[0]), cmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));//16,a��Ϊ������������������sizeof�ڲ�����ʾ������������Ĵ�С�����Ϊ4*4=16
	printf("%d\n", sizeof(a + 0)); //4����ʱa��û�е���������sizeof�ڲ�������a��ʱ��ʾ������Ԫ�صĵ�ַ
	//a��ʾ��Ԫ�صĵ�ַ��a+0����ʾ������Ԫ�صĵ�ַ��ֻҪ�ǵ�ַ������4���ֽ�
	printf("%d\n", sizeof(*a)); //4��*a��ʾ����Ԫ�ص�ֵ����Ԫ�ص�ֵΪ1������Ϊint��sizeof(int)=4
	printf("%d\n", sizeof(a + 1));//4 a��ʾ��Ԫ�صĵ�ַ��a+1��ʾ���ǵڶ���Ԫ�صĵ�ַ��ֻҪ�ǵ�ַ
	//�������4
	printf("%d\n", sizeof(a[1]));//4 a[1]��ʾ���ǵ�2��Ԫ�ص�ֵ��ֵΪint���ͣ����Դ���СΪ4
	printf("%d\n", sizeof(&a));  //4 &a��ȡ��������������ĵ�ַ��ֻҪ�ǵ�ַ���������4���ֽ�
	printf("%d\n", sizeof(*&a)); // 16 �����Ҫע�⣺
	//�ȶ�a����&��ȥ������������ĵ�ַ���ڶ������ַ���н����õĲ���
	//���ҵ����������飬���Դ�СΪ16��*&a���൱��a����ʵ����sizeof(a)��Ϊ��������Ĵ�С
	printf("%d\n", sizeof(&a + 1)); //4 &a+1����������������Ĵ�С��Ȼ�󣬻���һ����ַ�����Խ������4
	printf("%d\n", sizeof(&a[0])); //4 ��Ȼ��һ����ַ
	printf("%d\n", sizeof(&a[0] + 1)); //4 ���ǵ�ַ
}


#include<stdio.h>
int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr)); //arr��Ϊ����������sizeof�ڲ���Ҫ���������������Ĵ�С
	//�����д�ʱ��û�з���\0������һ����6��Ԫ�أ�ÿ��Ԫ�صĴ�С��һ���ֽ�
	//������������Ĵ�СΪ6���ֽ�
	printf("%d\n", sizeof(arr + 0));  //4 ��ʱarr��Ϊ��Ԫ�صĵ�ַ��arr+0���Ǳ�ʾ��Ԫ�صĵ�ַ
	//ֻҪ�ǵ�ַ����С����4
	printf("%d\n", sizeof(*arr));     //1  arr��Ϊ��Ԫ�صĵ�ַ�����н����ã�Ȼ��õ���
	//��Ԫ�ص�ֵ��ֵΪchar�͵ģ���СΪ1���ֽ�
	printf("%d\n", sizeof(arr[1]));   //1 �ڶ���Ԫ�ص�ֵ
	printf("%d\n", sizeof(&arr));     //4  &arrȡ����������ĵ�ַ
	printf("%d\n", sizeof(&arr + 1));//4  �����������飬����һ����ַ
	printf("%d\n", sizeof(&arr[0] + 1));  //4
}


#include<stdio.h>
int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", strlen(arr));   //δ֪������Ϊ�Ҳ�û�п���\0�����Բ�֪��\0��������
	//����ֵ�����ֵ X
	printf("%d\n", strlen(arr + 0));  //arr��ʱ��Ϊ��Ԫ�صĵ�ַ����Ԫ�ص�ַ+0������Ԫ�صĵ�ַ
	//���Ի������ֵX
	printf("%d\n", strlen(*arr));    //����ȥ�����ַ�a��Сдa��ASCII��ֵΪ97
	//����Ϊ�������
	printf("%d\n", strlen(arr[1]));  //������B�����Ի��Ǵ������
	printf("%d\n", strlen(&arr));    //X
	printf("%d\n", strlen(&arr + 1));  //Y-X=6
	printf("%d\n", strlen(&arr[0] + 1));  //X+1
}


#include<stdio.h>
int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));  //48 �������飬��СΪ 48
	printf("%d\n", sizeof(a[0][0]));  //4 ��һ��Ԫ�صĴ�С
	printf("%d\n", sizeof(a[0]));     //16 ��һ�е������������������ڲ���
	//��ʾ��һ�еĴ�С
	printf("%d\n", sizeof(a[0] + 1));  //4 a[0]�����Ԫ�صĵ�ַ�����Դ�С����4
	printf("%d\n", sizeof(*(a[0] + 1)));  //4 ��ָ�Ĵ�С��ֵ������Ϊint
	printf("%d\n", sizeof(a + 1));  //4 a�Ƕ�ά�������������aΪ��Ԫ�صĵ�ַ����Ԫ�صĵ�ַΪ��һ�еĵ�ַ
	//��һ�еĵ�ַ��1���ǵڶ��еĵ�ַ ��ֻҪ�ǵ�ַ����С����4 
	printf("%d\n", sizeof(*(a + 1))); //16 �Եڶ��еĵ�ַ���н����õĲ������ҵ��˵ڶ��е�����
	//���Դ�СΪ16
	printf("%d\n", sizeof(&a[0] + 1)); //4 ���ǵ�ַ ȡ�����ǵڶ��еĵ�ַ
	printf("%d\n", sizeof(*(&a[0] + 1)));  //16 �ҳ��˵ڶ��е�����Ԫ��
	printf("%d\n", sizeof(*a));  //16 ��һ�н�����
	printf("%d\n", sizeof(a[3]));  //16 //��ȻԽ���ˣ����ǲ���Ӱ�죬�������һ�еĴ�С
}


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	(void)scanf("%d %d", &a, &b);
	c = a + b;
	printf("%d", c);
	return 0;
}


#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	(void)scanf("%d %d", &a, &b);
	c = Add(a, b);
	printf("%d", c);
	return 0;
}


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
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
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
//���͵Ĵ�С��λ�����ֽ�
//������еĵ�λ 
//bit(λ) byte(�ֽ�) kbyte(kb) mb gb tb pb  
//ǰ������λ֮��Ļ��㵥λ��8������ĵ�λ֮�����1024


#include<stdio.h>
int main()
{
	int num = 10;
	printf("%d", num);
	return 0;
	//�����������num��ֵ�ǿ���������ӡ������
	//��Ϊnum�Ǿֲ�����������printf���Ҳ����num���������У������ǿ���������ӡ�����ġ�
}


#include<stdio.h>
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c',0 };
	printf("%s\n", "abc");
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
	//���ִ�ӡ�Ľ������abc
	//���arr2���治��0�Ļ�����ô��ӡ����ͻ�����abc�ĺ��滹����������̵��ַ�
	//��Ϊ�������0�Ļ����ַ����ͻᲢû�н�����ֻ�м���0����\0�Ż�ֹͣ��ӡ
	//�����̱������ʵ������ʵ��0xcccccc
	//�ɴ˿��Կ���\0���ַ�����˵�Ƿǳ���Ҫ��
	//�ַ�����\0��Ҫ�Ľ�����־�ķ��ţ�
}


#include<stdio.h>
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	printf("%s\n", "abc");
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
	//���ִ�ӡ�Ľ������abc
	//���arr2���治��0�Ļ�����ô��ӡ����ͻ�����abc�ĺ��滹����������̵��ַ�
	//��Ϊ�������0�Ļ����ַ����ͻᲢû�н�����ֻ�м���0����\0�Ż�ֹͣ��ӡ
	//�����̱������ʵ������ʵ��0xcccccc
	//�ɴ˿��Կ���\0���ַ�����˵�Ƿǳ���Ҫ��
	//�ַ�����\0��Ҫ�Ľ�����־�ķ��ţ�
}


#include<stdio.h>
int main()
{
	printf("c:\test\test.c\n");
	return 0;
}
//��������������Ϊ
//c:      est     est.c
//��Ҫ��ӦΪ��������\tҲ������һ��ת���ַ���ʹ�ã������Ҫ�����printf���������һ���Ķ�������ô��\t��ǰ���ڼ���һ��\������


#include<stdio.h>
int main()
{
	printf("c:\\test\\test.c\n");
	return 0;
}
//����Ľ��Ϊ
//c:\test\test.c


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
	printf("%d", arr[4]);
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
//����ڳ��������������洢����ʲô������û�й�ϵ��
//��Ҫ�ǿ����������Ĳ�����������ʲô���͵ģ������һ���Ǹ����͵ģ��õ��Ľ���ͻ��Ǹ����͵Ľ��


#include<stdio.h>
int main()
{
	int a = 5 % 2;
	printf("%d", a);
	return 0;
}
//�����ȡģ���㣬��һ����Ҫ�ر�ע�⣺
//ȡģ������������ߵĲ����������������������������������ô�ͻ����


#include<stdio.h>
int main()
{
	//int a = 5/2;
	//int a = 5/2.0;
	//printf("%d\n", a);
	//int a = 5%2;
	//printf("%d\n", a);
	int a = 15;
	int b = a << 1;
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
	//���Ϊ1����λ��İ�λ�ǰ������ƣ���ͬ��Ϊ1����ͬ��Ϊ0
}


#include<stdio.h>
int main()
{
	int a = 10;
	int b = ++a;
	printf("%d\n", a);   //11
	printf("%d\n", b);   //11
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int max = 0;
	max = (a > b) ? a : b;
	printf("%d", max);
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
	static int n = 1;   //nΪ�ֲ�����
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
}
//��ӡ�Ľ����2-11����static���α����������˾Ͳ������ˡ�


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
void My_BubbleSort(int* arr, int sz, int width, int (*cmp_int)(const void* e1, const void* e2))
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (cmp_int((char*)arr + j * width, (char*)arr + (j + 1) * width) > 0)
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
	My_BubbleSort(arr, sz, sizeof(arr[0]), cmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
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
	//int res = test(Add);
	printf("%d", res);
	return 0;
}


#include<stdio.h>
int main()
{
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));//16,a��Ϊ������������������sizeof�ڲ�����ʾ������������Ĵ�С�����Ϊ4*4=16
	printf("%d\n", sizeof(a + 0)); //4����ʱa��û�е���������sizeof�ڲ�������a��ʱ��ʾ������Ԫ�صĵ�ַ
	//a��ʾ��Ԫ�صĵ�ַ��a+0����ʾ������Ԫ�صĵ�ַ��ֻҪ�ǵ�ַ������4���ֽ�
	printf("%d\n", sizeof(*a)); //4��*a��ʾ����Ԫ�ص�ֵ����Ԫ�ص�ֵΪ1������Ϊint��sizeof(int)=4
	printf("%d\n", sizeof(a + 1));//4 a��ʾ��Ԫ�صĵ�ַ��a+1��ʾ���ǵڶ���Ԫ�صĵ�ַ��ֻҪ�ǵ�ַ
	//�������4
	printf("%d\n", sizeof(a[1]));//4 a[1]��ʾ���ǵ�2��Ԫ�ص�ֵ��ֵΪint���ͣ����Դ���СΪ4
	printf("%d\n", sizeof(&a));  //4 &a��ȡ��������������ĵ�ַ��ֻҪ�ǵ�ַ���������4���ֽ�
	printf("%d\n", sizeof(*&a)); // 16 �����Ҫע�⣺
	//�ȶ�a����&��ȥ������������ĵ�ַ���ڶ������ַ���н����õĲ���
	//���ҵ����������飬���Դ�СΪ16��*&a���൱��a����ʵ����sizeof(a)��Ϊ��������Ĵ�С
	printf("%d\n", sizeof(&a + 1)); //4 &a+1����������������Ĵ�С��Ȼ�󣬻���һ����ַ�����Խ������4
	printf("%d\n", sizeof(&a[0])); //4 ��Ȼ��һ����ַ
	printf("%d\n", sizeof(&a[0] + 1)); //4 ���ǵ�ַ
}


#include<stdio.h>
int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr)); //arr��Ϊ����������sizeof�ڲ���Ҫ���������������Ĵ�С
	//�����д�ʱ��û�з���\0������һ����6��Ԫ�أ�ÿ��Ԫ�صĴ�С��һ���ֽ�
	//������������Ĵ�СΪ6���ֽ�
	printf("%d\n", sizeof(arr + 0));  //4 ��ʱarr��Ϊ��Ԫ�صĵ�ַ��arr+0���Ǳ�ʾ��Ԫ�صĵ�ַ
	//ֻҪ�ǵ�ַ����С����4
	printf("%d\n", sizeof(*arr));     //1  arr��Ϊ��Ԫ�صĵ�ַ�����н����ã�Ȼ��õ���
	//��Ԫ�ص�ֵ��ֵΪchar�͵ģ���СΪ1���ֽ�
	printf("%d\n", sizeof(arr[1]));   //1 �ڶ���Ԫ�ص�ֵ
	printf("%d\n", sizeof(&arr));     //4  &arrȡ����������ĵ�ַ
	printf("%d\n", sizeof(&arr + 1));//4  �����������飬����һ����ַ
	printf("%d\n", sizeof(&arr[0] + 1));  //4
}


#include<stdio.h>
int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", strlen(arr));   //δ֪������Ϊ�Ҳ�û�п���\0�����Բ�֪��\0��������
	//����ֵ�����ֵ X
	printf("%d\n", strlen(arr + 0));  //arr��ʱ��Ϊ��Ԫ�صĵ�ַ����Ԫ�ص�ַ+0������Ԫ�صĵ�ַ
	//���Ի������ֵX
	printf("%d\n", strlen(*arr));    //����ȥ�����ַ�a��Сдa��ASCII��ֵΪ97
	//����Ϊ�������
	printf("%d\n", strlen(arr[1]));  //������B�����Ի��Ǵ������
	printf("%d\n", strlen(&arr));    //X
	printf("%d\n", strlen(&arr + 1));  //Y-X=6
	printf("%d\n", strlen(&arr[0] + 1));  //X+1
}


#include<stdio.h>
int main()
{
	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr)); //7 ��������һ��\0������Ϊ7
	printf("%d\n", sizeof(arr + 0));  //4 ��Ԫ�ص�ַ�����Ի��ǵ�ַ
	printf("%d\n", sizeof(*arr));  //1 ��Ԫ�ص�ֵ����char�͵ģ���СΪ1
	printf("%d\n", sizeof(arr[1])); //1 
	printf("%d\n", sizeof(&arr)); // 4 ȡ����������ĵ�ַ
	printf("%d\n", sizeof(&arr + 1)); //4 ������������
	printf("%d\n", sizeof(&arr[0] + 1)); //4 
}
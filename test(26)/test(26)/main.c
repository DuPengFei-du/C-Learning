#define _CRT_SECURE_NO_WARNINGS 1



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
	int b = a++;
	printf("%d\n", b);  //10
	printf("%d\n", a);  //11
	return 0;
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


#include <stdio.h>
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ || ++b || d++;
	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
	return 0;
}
//��ӡ��ֵΪ1 3 3 4


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
	char a = 127;
	char b = 3;
	char c = a + b;
	//00000000000000000000000001111111  --a��32λ��ʽ�µĴ洢
	//00000000000000000000000001000011  --b��32λ��ʽ�µĴ洢
	//����a��b����char���͵ģ�char֮��һ���ֽڣ�����a��bΪ��
	//01111111  --a
	//00000011  --b
	//�ַ������ʱ�򶼴ﲻ�����εĴ�С������Ҫ�Ȱ��������������εĴ�С��Ȼ���ٽ�������
	//a��b��Ϊ�з��ŵ�char���ͣ��������λ�Ƿ���λ
	//������Ҫ��a���Ȳ���������ӣ�00000000000000000000000001111111
	//b��ͬ��b����ˣ�00000000000000000000000001000011
	//��a��b������ӣ�
	//00000000000000000000000001111111
	//00000000000000000000000001000011
	//00000000000000000000000010000010   ---a��b��ӵĽ��
	//a+b�Ľ��Ҫ����c���棬ֻ�ܴ�����8������λ�����Ϊ10000010
	//��c��������������Ҫ�����Ƿ���λ������Ľ��������ʾ:
	//11111111111111111111111110000010 ---���ڴ��зŵ��ǲ��룬��ӡ����ԭ��
	//����-1�Ƿ���
	//����Ϊ��11111111111111111111111110000001
	//ԭ��Ϊ��10000000000000000000000001111110  --���Ϊ-126
	printf("%d", c);   //---126
	return 0;
}
//�޷���������������ʱ��ֻ�ܲ�0


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
}


#include<stdio.h>
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void Swap(char* buf1, char* buf2,int width)
{
	for (int i = 0; i < width ; i++)
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
		printf("%d ", arr[i]);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	//����Ҳ��һ���Զ�������
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));                //40
	printf("%d\n", sizeof(int[10]));          //40
	int a = 10;
	sizeof(int);  //���Ե�
	sizeof(a);    //���Ե�
	//��ô�������ˣ������������ʲô�أ�
	//��������ͣ���������ȥ��������ʣ�µĲ���
	//������������������� int arr[10],��ô��������;���int [10]
}


#include<stdio.h>
int main()
{
	int a = 0x11223344;
	//0x11223344����a�����Ǹոպõ�
	//��Ϊ11��һ���ֽڣ�22��һ���ֽڣ�33��һ���ֽڣ�44��һ���ֽ�
	//ͨ�����ӿ���ת����16���ƣ��۲쵽a��ֵΪ0x11223344
	//ͨ���ڴ濴������&a�����Թ۲쵽��a��ʾΪ44332211
	return 0;
}


#include<stdio.h>
int main()
{
	//����˵������һ��1-1�Ľ���Ƕ���
	//�����ź����ǣ���������������
	//����ֻ�ðѼ���ת��Ϊ�ӷ�����ʽ
	//1 - 1;
	1 + (-1);
	//�����ԭ��������Ļ�
	// 1��ԭ��
	//00000000000000000000000000000001
	//-1��ԭ��
	//10000000000000000000000000000001
	//��������ӵĽ��Ϊ
	//10000000000000000000000000000010
	//�������ԭ��ֱ����ӵĻ��������Ϊ-2������Ȼ�ǲ���ȷ��
	//���Կ�ѧ�����Ƴ��˲���ĸ���
	//�ò��������ʱ�򣬿��������ȷ�Ľ��
}


#include<stdio.h>
struct Stu
{
	char name[20];
	int age;
};
union Un
{
	int i;
	char c;
};    //����������
int main()
{
	union Un u = { 0 };   //uΪ���������
	printf("%d\n", sizeof(u));   //���Ϊ4
	printf("%p\n", &u);
	printf("%p\n", &(u.i));
	printf("%p\n", &(u.c));
	//�����ĵ�ַ��һģһ���ģ�˵��i��cռ��ͬһ��ռ�
	//�����������ֽй����壬���������˼�����ҵĳ�ԱҪ����ͬһ��ռ�
	//��ô�Ҹ�i����Ŷ���c�ͻᷢ���仯
	//�Ҹ�c����Ŷ�����iҲ�ᷢ���仯
	//c��iռ���ĸ��ֽ��еĵ�һ���ֽڣ���Ҳ����˴�С���㷨����һ�ֽⷨ����
	return 0;
}


#include<stdio.h>
int main()
{
	int n = 9;
	//9�����ڴ��У��洢��ʱ���Ĳ���
	//00000000000000000000000000001001
	float* pFloat = (float*)& n;
	//Ҫ��һ�����Σ�ת�����һ�������ͣ���ô���ھ���ת��һ��
	//0 00000000 00000000000000000001001
	//����Ϊ���������͵Ĵ洢��EȫΪ0���������������һ�����޽ӽ���0������ �����Դ�ӡ�Ľ��Ϊ0.000000
	printf("n��ֵΪ:%d\n", n);
	//�����ε���ʽ���룬�������ε���ʽȡ������ô�����Ȼ���������ˣ�����˵���Ϊ9;
	printf("*pFloat��ֵΪ:%f\n", *pFloat);
	//Ҫ��һ�����Σ�ת�����һ�������ͣ���ô���ھ���ת��һ��
	//0 00000000 00000000000000000001001
	//����Ϊ���������͵Ĵ洢��EȫΪ0���������������һ�����޽ӽ���0������ �����Դ�ӡ�Ľ��Ϊ0.000000
	*pFloat = 9.0;
	printf("n��ֵΪ:%d\n", n);
	//�Ը���������ʽ���ȥ���Ը���������ʽ������
	//�Ƚ�9д�ɶ����Ƶ���ʽ
	//1001.0
	//1.001*2^3;
	//0 100000010 00100000000000000000000  --����
	//������ԭ����������ͬ
	//���Խ��Ϊ010000001000100000000000000000000  --���Ϊ1091567616
	printf("*pFloat��ֵΪ:%f\n", *pFloat);
	//�Ը�������ʽ���ȥ�����Ը����ǽ���ó���������ǲ���仯��
	//���Ϊ9.000000
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


#include<stdio.h>
int main()
{
	char arr[] = "abcdef";
	printf("%d\n", strlen(arr));   //6
	printf("%d\n", strlen(arr + 0));  //�������һ��һ����������һ����6��
	printf("%d\n", strlen(*arr));     //error ������Ĵ��η�ʽ
	printf("%d\n", strlen(arr[1]));   //error ������Ĵ��η�ʽ
	printf("%d\n", strlen(&arr));     //ȡ����������ĵ�ַ��������������6
	printf("%d\n", strlen(&arr + 1)); //���ֵ�������������飬�Ѿ�����\0�ĺ�����
	//���Խ���Ƕ�����һ��δ֪��
	printf("%d\n", strlen(&arr[0] + 1));  //5
}


#include<stdio.h>
int main()
{
	char* p = "abcdef";
	printf("%d\n", sizeof(p));  //4 pΪָ���������СΪ4
	printf("%d\n", sizeof(p + 1)); //4 p��ָ�������+1�Ĵ�С���ǵ�ַ�����Ϊ3
	printf("%d\n", sizeof(*p));//1 ����һ��ֵ��ֵ��������char���ͣ����Դ�СΪ1
	printf("%d\n", sizeof(p[0])); //1 ͬ��
	printf("%d\n", sizeof(&p));   // 4 ȡ����������ĵ�ַ 
	printf("%d\n", sizeof(&p + 1));   //4  �����������飬���ǵ�ַ
	printf("%d\n", sizeof(&p[0] + 1));  //4�����ǵ�ַ
}


#include<stdio.h>
int main()
{
	char* p = "abcdef";
	printf("%d\n", strlen(p));   //6 pΪa�ĵ�ַ����a�����м�������
	printf("%d\n", strlen(p + 1));  //5
	printf("%d\n", strlen(*p));  //error
	printf("%d\n", strlen(p[0]));  //error
	printf("%d\n", strlen(&p));    //δ֪�� &p��p�д������û��ʲôֱ�ӵĹ�ϵ
	printf("%d\n", strlen(&p + 1)); //δ֪��
	printf("%d\n", strlen(&p[0] + 1)); //5 ȡ����b�ĵ�ַ�����Ϊ5 
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
	int count = 0;
	int n = 0;
	(void)scanf("%d", &n);
	for (int i = 0; i < 32; i++)
	{
		if(((n >> i) & 1) == 1)
		{
			count++;
		}
	}
	printf("%d",count);
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
	int b = a >> 1;
	printf("%d\n", b);
	return 0;
	//���õ�����������
}


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
	int b = !a;
	printf("%d\n", b);
	return 0;
}


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
	int* p = arr;
	printf("%d\n", arr[5]);
	printf("%d\n", p[5]);
	printf("%d\n", *(p + 5));
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
int main()
{
	char a = 127;
	char b = 3;
	char c = a + b;
	//00000000000000000000000001111111  --a��32λ��ʽ�µĴ洢
	//00000000000000000000000001000011  --b��32λ��ʽ�µĴ洢
	//����a��b����char���͵ģ�char֮��һ���ֽڣ�����a��bΪ��
	//01111111  --a
	//00000011  --b
	//�ַ������ʱ�򶼴ﲻ�����εĴ�С������Ҫ�Ȱ��������������εĴ�С��Ȼ���ٽ�������
	//a��b��Ϊ�з��ŵ�char���ͣ��������λ�Ƿ���λ
	//������Ҫ��a���Ȳ���������ӣ�00000000000000000000000001111111
	//b��ͬ��b����ˣ�00000000000000000000000001000011
	//��a��b������ӣ�
	//00000000000000000000000001111111
	//00000000000000000000000001000011
	//00000000000000000000000010000010   ---a��b��ӵĽ��
	//a+b�Ľ��Ҫ����c���棬ֻ�ܴ�����8������λ�����Ϊ10000010
	//��c��������������Ҫ�����Ƿ���λ������Ľ��������ʾ:
	//11111111111111111111111110000010 ---���ڴ��зŵ��ǲ��룬��ӡ����ԭ��
	//����-1�Ƿ���
	//����Ϊ��11111111111111111111111110000001
	//ԭ��Ϊ��10000000000000000000000001111110  --���Ϊ-126
	printf("%d", c);   //---126
	return 0;
}
//�޷���������������ʱ��ֻ�ܲ�0


#include<stdio.h>
int main()
{
	int i = 1;
	int ret = (++i) + (++i) + (++i);
	printf("%d", ret);
	printf("%d", i);
	return 0;
	//��ͬ�ı����������ܻ��в�ͬ�Ľ��
}
//��δ���ĵ�һ��+��ִ�е�ʱ�򣬵ڶ���+�Ƿ�ִ�����ǲ�ȷ����
//��Ϊ���������������ȼ��ͽ�������޷�������һ��+�Ͷ�����ǰ��++���Ⱥ�˳���


#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'A' && ch <= 'Z')
		{
			putchar(ch + 32);
		}
		else if (ch >= 'a' && ch <= 'z')
		{
			putchar(ch - 32);
		}
		else if (ch >= '0' && ch <= '9')
			continue;
	}
	return 0;
}


//��ӡ�˷��ھ��������������Լ�ָ��
#include<stdio.h>
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0 ; j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}


//�����ַ���
#include<stdio.h>
void Reverse(char arr[],int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}
int main()
{
	char arr[] = "hello world";
	int sz = sizeof(arr) / sizeof(arr[0]);
	Reverse(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%c", arr[i]);
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


//���ʵ��
//����int(32λ)����m��n�����Ʊ��ʽ��
//�ж��ٸ�bit��ͬ
//��������
// 1999 2299
//������� ��7
#include<stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int a = 0;
	int count = 0;
	(void)scanf("%d %d", &m, &n);
	a = m ^ n;
	for (int i = 0; i < 32; i++)
	{
		if (((a >> i) & 1) == 1)
			count++;
	}
	printf("%d", count);
	return 0;
}


/*
5λ�˶�Ա�μ���10m��ˮ����������������Ԥ��������
Aѡ��˵��B�ڶ����ҵ���;
Bѡ��˵���ҵڶ���E����;
Cѡ��˵���ҵ�һ��D�ڶ�;
Dѡ��˵��C����ҵ���;
Eѡ��˵���ҵ��ģ�A��һ;
����������ÿλѡ�ֶ�˵����һ�룬����ȷ������������
*/

/*
ͨ������⣬���ǿ���֪��A,B,C,D,E�������ǵ�һ���������������ʣ���ô���ǿ���
ͨ�������еĿ������г�����Ȼ����������ÿ�˶�˵����һ������
*/
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((b == 2) + (a == 3) == 1)
							&& ((b == 2) + (e == 4) == 1)
							&& ((c == 1) + (d == 2) == 1)
							&& ((c == 5) + (d == 3) == 1)
							&& ((e == 4) + (a == 1) == 1))
						{
							if (a * b * c * d * e == 120)
								printf("%d %d %d %d %d\n", a, b, c, d, e);
						}
					}
				}
			}
		}
	}
}


/*
�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ
�ĸ����ɷ��е�һ��������Ϊ4���ӷ��Ĺ��ʣ�
A˵:������
B˵:��C
C˵:��D
D˵:C�ں�˵
��֪������˵���滰��һ����˵���Ǽٻ�
�����������Щ��Ϣ��дһ��������ȷ������˭������
*/
#include<stdio.h>
int main()
{
	char killer = 0;
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
		{
			printf("killer is %c", killer);
		}
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
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


//ģ��ð������
#include<stdio.h>
void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char temp = *buf1;
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2++;
	}
}
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void my_bubblesort(int arr[], int sz, int width, int (cmp_int)(const void* e1, const void* e2))
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (cmp_int((char*)arr + j * width, (char*)arr + (j + 1) * width) > 0)
				Swap((char*)arr + j * width, (char*)arr + (j + 1) * width,width);
		}
	}
}
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int width = sizeof(arr[0]);
	my_bubblesort(arr, sz, width, cmp_int);
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
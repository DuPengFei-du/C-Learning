#define _CRT_SECURE_NO_WARNINGS 1



//ָ��
#include<stdio.h>
int main()
{
	int a = 10;  //���ڴ��п���һ���ռ�
	int* p = &a; //�������ǶԱ���aȡ�����ĵ�ַ������ʹ��&������
	//��a�ĵ�ַ���ڱ���p�У�p����һ��ָ�������
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;  //�ĸ��ֽ��ĸ��ֽ�ȥ�ı�
	for (int i = 0; i < 10; i++)
	{
		*(p + i) = 0;
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	char* p = arr;  //һ���ֽ�һ���ֽ�ȥ�ı�
	for (int i = 0; i < 10; i++)
	{
		*(p + i) = 0;
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 10;
	int* pa = &a;
	char* pc = &a;
	printf("%p\n", pa);
	printf("%p\n", pc);
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	return 0;
}


#include<stdio.h>
int main()
{
	double d[10] = { 0 };
	double* pd = d;
	printf("%p\n", pd);
	printf("%p\n", pd+4);
	//��4ʵ�����Ǽ���32����Ϊ4*8=32
	return 0;
}


#include<stdio.h>
#define a 5
int main()
{
	float values[a];
	float* vp;
	for (vp = &values[0]; vp < &values[a];)
	{
		*vp++ = 0;
	}
	return 0;
}
//�����ǽ�ǰ���Ԫ�ص�ֵ�����0


#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%d\n", &arr[9] - &arr[0]);
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%d\n", &arr[0] - &arr[9]);
	return 0;
}


#include<stdio.h>
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "Hello World";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


//�ݹ�д��
#include<stdio.h>
int my_strlen(char* str)
{
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen(str + 1);
}
int main()
{
	char arr[] = "Hello World";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}
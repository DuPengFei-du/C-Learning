/*int* float* char*----ָ������
����ָ��Ĵ�С�����ĸ��ֽ�
ָ�������ڱ������õ�ʱ��������������ж���Ȩ��
*/

#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = 10;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*p = 20;
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%d", &arr[9] - &arr[0]);
	return 0;
}

#include<stdio.h>
int my_strlen(char* str)
{
	char* cp = str;
	while (*cp != '\0')
	{
		cp++;
	}
	return cp - str;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);//��Ԫ�ص�ַ
	printf("%p\n", &arr[0]);//��Ԫ�ص�ַ
	printf("%p\n", &arr);//����ĵ�ַ
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int* p = arr;
	for (i = 0; i < 10; i++)
	{
		printf("%p->%p\n", &arr[i], p + i);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int* p = arr;
	for (i = 0; i < 10; i++)
	{
		arr[i] = 10;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 10;
	int* pa = &a;//pa��Ϊһ��ָ���������Ȼ�Ǳ������Ϳ���ȡpa�ĵ�ַ
	int** ppa = &pa;//ȡpa�ĵ�ַ����ʱ���ppaΪ����ָ���������Ȼ����ȡppa�ĵ�ַ
	int*** pppa = &ppa;//����ָ���Ѿ������ˣ���Ҫ�ڼ�������ȡ��ַ��
}

#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr2[5] = { &a,&b,&c };
	printf("%d", *(arr2[1]));
	return 0;
}
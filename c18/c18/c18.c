//ģ��ʵ��strlen
#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)
{
	if (*str == 0)
	{
		return 0;
	}
	else
		return 1 + my_strlen(str + 1);
}
int main()
{
	char arr[20] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}

#include<stdio.h>
int main()
{
	char arr[20] = "abcdef";
	int len = strlen(arr);
	printf("%d", len);
	return 0;
}


//�ü�����ʵ��strlen
#include<stdio.h>
int my_strlen(const char* str)
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
	char arr[20] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


//�Ż�ģ��ʵ��strlen�Ĵ���
#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)
{
	int count = 0;
	assert(str != '\0');
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[20] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello word";
	strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


//дһ���������ز�����������1�ĸ���
//�����еĸ���
#include<stdio.h>
int count_one_bit(int n)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int n = 0;
	int ret = 0;
	(void)scanf("%d", &n);
	ret = count_one_bit(n);
	printf("%d", ret);
	return 0;
}


#include<stdio.h>
int count_one_bit(int n)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int n = 0;
	int ret = 0;
	(void)scanf("%d", &n);
	ret = count_one_bit(n);
	printf("%d", ret);
	return 0;
}


//��ȡһ�������������е�ż��λ������λ���ֱ��������������
#include<stdio.h>
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	int i = 0;
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d", (n >> i) & 1);
	}
	printf("\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", (n >> i) & 1);
	}
}


//���һ��������ÿһλ
#include<stdio.h>
int print(int n)
{
	if (n > 9)
		print(n / 10);
	printf("%d ", n % 10);
	return n;
}
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	print(n);
	return 0;
}


/*
���ʵ�֣�
����int��32λ������m��n�Ķ����Ʊ��ʽ��
�ж��ٸ�Ϊ��ͬ
˼·�����������������32������λͨ��ѭ���ǿ��Եõ���
Ȼ��ͨ��������Ĺ����ǣ���ͬΪ0������Ϊ1��
���Կ��Լ�������1�ĸ������Ϳ��Եó������������ж��ٸ�����λ�ǲ�һ������
*/
#include<stdio.h>
int count_one_bit(int n)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int m = 1999;
	int n = 2299;
	int temp = m ^ n;
	int ret = 0;
	ret = count_one_bit(temp);
	printf("%d", ret);
	return 0;
}
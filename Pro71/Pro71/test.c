#define _CRT_SECURE_NO_WARNINGS 1



//��������ʱ�����������������ֵ�ֵ
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


//��������1�ĸ���
#include<stdio.h>
int main()
{
	int count = 0;
	int n = 0;
	(void)scanf("%d", &n);
	while (n)
	{
		count++;
		n = n & (n - 1);
	}
	printf("%d", count);
	return 0;
}


#include<stdio.h>
int main()
{
	int n = 0;
	int count = 0;
	(void)scanf("%d", &n);
	for (int i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
		{
			count++;
		}
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
	int b = a >> 1;
	printf("%d\n", b);
	return 0;
	//���õ�����������
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
	int a = 10;
	printf("%p\n", &a);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	printf("%p\n", &a);   //003DF718
	printf("%x\n", &a);   //3df718
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
	char arr1[10] = "abcdef";
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
	int a = 0;
	int b = 5;
	int c = a && b;
	printf("%d\n", c);
	return 0;
}
//���Ϊ0


#include <stdio.h>
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;
	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
	return 0;
}
// ��ӡ��ֵ��1 2 3 4


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
#include<string.h>
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abc";
	if (strlen(arr2) - strlen(arr1)>0)
		printf("arr2>arr1");
	else
		printf("arr2<arr1");
	return 0;
}


#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)
{
	int count = 0;
	assert(str);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "hello world";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)
{
	assert(str);
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen(str + 1);
}
int main()
{
	char arr[] = "hello world";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)
{
	assert(str);
	return !(*str) ? 0 : 1 + my_strlen(str + 1);
}
int main()
{
	char arr[] = "hello world";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}


#include<stdio.h>
#include<assert.h>
int my_strlen(char* str)
{
	assert(str);
	char* x = str;
	while (*str++ != '\0')
	{
		;
	}
	return str - x - 1;
}
int main()
{
	char arr[] = "hello world";
	int len = my_strlen(arr);
	printf("%d", len); 
	return 0;
}


/*
��дһ�����򣬿���һֱ���ռ����ַ�
�����Сд�ַ��������Ӧ��д�ַ�
����Ǵ�д�ַ����������Ӧ��Сд�ַ�
��������֣���ô�Ͳ����
*/
#include<stdio.h>
int main()
{
	int ch = 0;
	while (ch = getchar() != EOF)
	{
		if (ch >= 'a' && ch <= 'z')
		{
			putchar(ch - 32);
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			putchar(ch + 32);
		}
		else
		{
			putchar(ch);
		}
	}
}


//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
#include<stdio.h>
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	for (int a = 1; a <= n; a++)
	{
		for (int b = 1; b <= a; b++)
		{
			printf("%d*%d=%2d ", a, b, a * b);
		}
		printf("\n");
	}
	return 0;
}


//�����ַ���
#include<stdio.h>
void my_reverse(char* str, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int temp = str[left];
		str[left] = str[right];
		str[right] = temp;
		left++;
		right--;
	}
}
void Print(char arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%c", arr[i]);
	}
}
int main()
{
	char arr[] = "hello world";
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_reverse(arr, sz);
	Print(arr, sz);
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


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = { 'a','b','c' };
	strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[3] = { 0 };
	char arr2[] = { 'a','b','c' };
	strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
	char *p="hello world"
	char arr2[] = { 'a','b','c' };
	strcpy(p, arr2);
	printf("%s\n", p);
	return 0;
}


//strcpy������ģ��ʵ��
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* source)
{
	char* ret = dest;
	assert(dest);
	assert(source);
	while (*dest++ = *source++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "Hello world";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = "Hello";
	char arr2[] = " world";
	strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}


ģ��ʵ��strcat
#include<stdio.h>
#include<assert.h>
char* my_strcat(char* dest, const char* source)
{
	char* ret = dest;
	assert(dest);
	assert(source);
	while (*dest != '\0')
	{
		dest++;
	}
	while (*dest++ = *source++)
	{
		;
	}
	return ret;

}
int main()
{
	char arr1[20] = "Hello";
	char arr2[] = " world";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}
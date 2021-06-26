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
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)
{
	assert(str);
	int count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
#include<assert.h>
int my_strlen(char* str)
{
	assert(str);
	char* ret = str;
	while (*str)
	{
		str++;
	}
	return str - ret;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* source)
{
	assert(dest);
	assert(source);
	char* ret = dest;
	while (*dest++ = *source++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "abcdef";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<assert.h>
char* my_strcat(char* dest, const char* source)
{
	assert(dest);
	assert(source);
	char* ret = dest;
	while (*dest)
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
	char arr1[20] = "ABC";
	char arr2[] = "abcdef";
	my_strcat(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<assert.h>
#include<string.h>
char* my_strncpy(char* dest, const char* source,size_t count)
{
	assert(dest);
	assert(source);
	int sz = 0;
	char* ret = dest;
	if (strlen(source) < count)
	{
		sz = count - strlen(source);
		count = strlen(source);
	}
	while (count--)
	{
		*dest++ = *source++;
	}
	while (sz--)
	{
		*dest = '\0';
	}
	return ret;
}
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "abcdef";
	my_strncpy(arr1, arr2,10);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<assert.h>
#include<string.h>
int my_strcmp(char* str1, const char* str2)
{
	assert(str1);
	assert(str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}
	return *str1 - *str2;
}
int main()
{
	char arr1[20] = "ABC";
	char arr2[] = "abcdef";
	int ret = my_strcmp(arr1, arr2);
	printf("%d", ret);
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


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "abcdef";
	strcpy(arr1, arr2);
	printf("%s", arr1);
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


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "bdefetfsf";
	char arr2[] = "abc";
	int ret = strcmp(arr1, arr2);
	printf("%d", ret);
	return 0;
}


#include<stdio.h>
#include<assert.h>
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	if (*str1 > * str2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
int main()
{
	char arr1[] = "bedfwseg";
	char arr2[] = "abc";
	int ret = my_strcmp(arr1, arr2);
	printf("%d", ret);
	return 0;
}


//strncat��ֻ����������һ��\0�Ϳ�����
#include<stdio.h>
#include<assert.h>
char* my_strncat(char* str1, char* str2,int n)
{
	assert(str1);
	assert(str2);
	char* ret = str1;
	while (*str1)
	{
		str1++;
	}
	while (n--)
	{
		*str1++ = *str2++;
	}
	*str1 = '\0';
	return ret;
}
int main()
{
	char arr1[20] = "AB";
	char arr2[] = "abcdef";
	my_strncat(arr1, arr2, 3);
	printf("%s", arr1);
	return 0;
}


//�ַ����ȽϺ���
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[30] = "hello world";
	char arr2[] = "change world";
	int ret = strncmp(arr1, arr2, 3);
	printf("%d", ret);
	return 0;
}


#include<stdio.h>
#include<assert.h>
int my_strncmp(const char* src1, const char* src2, int n)
{
	assert(src1);
	assert(src2);
	while ((src1 != NULL) && (src2 != NULL) && (n != 0))
	{
		if ((*src1 - *src2) > 0)
			return 1;
		if ((*src1 - *src2) < 0)
			return -1;
		src1++;
		src2++;
		n--;
	}
	if (*src1 == 0)
		return -1;
	if (*src2 == 0)
		return 1;
	return 0;
}
int main()
{
	char arr1[30] = "hello world";
	char arr2[] = "change world";
	int ret = my_strncmp(arr1, arr2, 3);
	printf("%d", ret);
	return 0;
}


int my_strncmp(char* str1, char* str2, int len)
{
	assert(str1);
	assert(str2);

	while (*str1 && *str2 && len--)
	{
		if (str1 == str2)
		{
			str1++;
			str2++;
		}
		else
			break;
	}
	//return *str1-*str2;
	if (*str1 == *str2)
		return 0;
	if (*str1 > * str2)
		return 1;
	else
		return -1;
}
int main()
{
	char* str = "nihao";
	char* str1 = "niha";
	int ret = my_strncmp(str, str1, 3);
	printf("%d ", ret);
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
	int a = 3;  //011
	int b = 5;  //101
	int c = a ^ b;   //110
	printf("%d\n", c);
	return 0;
}


#include<stdio.h>
int main()
{
	int num = 0;
	int count = 0;
	int i = 0;
	(void)scanf("%d", &num);
	for (i = 0; i < 32; i++)
	{
		if (((num >> i) & 1) == 1)
			count++;
	}
	printf("%d\n", count);
	return 0;
}


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
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr)); //40  �����������Ĵ�С
	return 0;
}


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
	printf("%d\n", arr[5]);
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
		printf("c\n");
	return 0;
}
//��ӡ���Ϊc
//������������������������


#include<stdio.h>
int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));//1
	printf("%u\n", sizeof(+c));//4
	printf("%u\n", sizeof(!c));//1
	//+c�ͣ�c����Ҫ�������㣬��������ͻᷢ��������������ô�ͱ��int������
	//sizeof(int) ,�������4�����ˡ�
	return 0;
}


#include<stdio.h>
int fun()
{
	static int count = 1;
	return ++count;
}
int main()
{
	int answer;
	answer = fun() - fun() * fun();
	printf("%d\n", answer);
	return 0;
}
//��vs�ϵ�������Ϊ-10  2-3*4=-10


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
		{
			putchar(ch);
		}
		else
			continue;
	}
	return 0;
}


//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
#include<stdio.h>
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i * j);
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
	char arr[] = "abcedf";
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_reverse(arr, sz);
	Print(arr, sz);
	return 0;
}
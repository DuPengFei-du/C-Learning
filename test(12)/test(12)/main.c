#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello world";
	strcpy(arr1, arr2);
	printf("%s", arr1);
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
	char arr2[] = "hello world";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<math.h>
int main()
{
	int n = 0;
	int k = 0;
	double ret = 0;
	(void)scanf("%d %d", &n, &k);
	ret = pow(n, k);
	printf("%lf", ret);
	return 0;
}


#include<stdio.h>
int Max(int x, int y)
{
	return x > y ? x : y;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	(void)scanf("%d %d", &a, &b);
	c = Max(a, b);
	printf("%d", c);
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
	(void)scanf("%d %d", &a, &b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d", a, b);
	return 0;
}


#include<stdio.h>
int is_prime(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int n = 0;
	int ret = 0;
	(void)scanf("%d", &n);
	ret = is_prime(n);
	if (ret == 1)
		printf("����\n");
	else
		printf("��������\n");
	return 0;
}


#include<stdio.h>
int is_leapyear(int n)
{
	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
		return 1;
	return 0;
}
int main()
{
	int n = 0;
	int ret = 0;
	(void)scanf("%d", &n);
	ret = is_leapyear(n);
	if (ret == 1)
		printf("����\n");
	else
		printf("��������\n");
	return 0;
}


#include<stdio.h>
void Print(int n)
{
	if (n > 9)
		Print(n / 10);
	printf("%d ", n % 10);
}
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	Print(n);
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
	char arr[] = "ABCDEF";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
int main()
{
	char arr1[] = "hello world";
	memset(arr1, 'x', 5);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
void Swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
int main()
{
	int a = 0;
	int b = 0;
	(void)scanf("%d %d", &a, &b);
	Swap(&a, &b);
	printf("%d %d", a, b);
	return 0;
}


#include<stdio.h>
void BinarySearch(int arr[], int sz)
{
	int key = 7;
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < key)
			left = mid + 1;
		else if (arr[mid] > key)
			right = mid - 1;
		else
		{
			printf("�ҵ���,�±���:%d", mid);
			break;
		}
	}
	if (left > right)
		printf("�Ҳ���\n");
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	BinarySearch(arr, sz);
	return 0;
}


#include<stdio.h>
int main()
{
	int len = strlen("abcdef");
	printf("%d\n", len);
	printf("%d\n", strlen("abcdef"));
	return 0;
}
//��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���


#include<stdio.h>
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
	return 0;
}
//��ӡ�Ľ��Ϊ4 3 2 1
//printf�����ķ���ֵ���ַ��ĸ���


int fac(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * fac(n - 1);
}
#include<stdio.h>
int main()
{
	int n = 0;
	int c = 0;
	(void)scanf("%d", &n);
	c = fac(n);
	printf("%d\n", c);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 1;
	int b = 1;
	int c = 1;
	int n = 0;
	(void)scanf("%d", &n);
	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	printf("%d", c);
	return 0;
}
//���ܻ����
//���Էǵݹ��ٶ���ʮ�ֿ�ģ����ǿ��ܻ����һЩ����


#include<stdio.h>
int main()
{
	int arr1[10];
	char arr2[5];
	return 0;
}
//[]�б����ǳ������߳������ʽ����Ȼ�ͻᱨ��


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5 };
	return 0;
}
//û�б���ֵ��Ԫ����Ĭ��ΪΪ0
//ͨ�����Ӵ�������


#include<stdio.h>
int main()
{
	char arr1[] = { 'a','b','c' };
	char arr2[] = "abc";
	printf("%s", arr1);
	printf("%s", arr2);
	return 0;
}
//������������ǲ�һ����
//arr1�ǲ����Կ�������ģ���Ϊ��û��\0��\0���ַ����Ľ�����־
//���û��\0�ǲ����Կ����ַ�����
//arr2�ǿ��Կ����ַ����ģ�c���滹��һ�����ص�\0


#include<stdio.h>
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("&arr[%d]=%p\n", i, &arr[i]);
	}
	return 0;
}
//ÿ��Ԫ�ص�ַ֮����ֵ��4
//����Ϊʲô��4����Ϊ����һ�����ε����飬ÿ��Ԫ��ռ��4���ֽڡ�


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;  //�õ�����Ԫ�صĵ�ַ
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%p===%p\n", &arr[i], p + i);
	}
	return 0;
}
//��������˵����p+iΪ�±�Ϊi��Ԫ�صĵ�ַ
//*(p + i)Ϊ�±�Ϊi��Ԫ�ص�ֵ


#include<stdio.h>
int main()
{
	int arr[3][4] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int i = 0;
	int j = 0;
	int* p = &arr[0][0];
	for (i = 0; i < 12; i++)
	{
		printf("%d ", *(p + i));
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i, sz - i; i++)
	{
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


#include<stdio.h>
struct Stu
{
	//��Ա����
	char name[20];
	int age;
	float score;
}s1, s2;
//s1,s2Ϊ������ȫ�ֵĽṹ�����
int main()
{
	return 0;
}


#include<stdio.h>
struct Stu
{
	//��Ա����
	char name[20];
	int age;
	float score;
};
int main()
{
	struct Stu s;
	//s ��s1��s2һ�������Ǳ�����ֻ������s1��s2��ȫ�ֵ�
	//������s1��s2��������������һ�������ǲ��õ�
	return 0;
}


#include<stdio.h>
struct
{
	//��Ա����
	char name[20];
	int age;
	float score;
}s;
int main()
{
	return 0;
}


#include<stdio.h>
struct
{
	//��Ա����
	char name[20];
	int age;
	float score;
}s;
struct
{
	//��Ա����
	char name[20];
	int age;
	float score;
}*ps;
int main()
{
	ps = &s;
	return 0;
}


#include<stdio.h>
struct Node
{
	int value;
	struct Node* next;
};
int main()
{
	return 0;
}


#include<stdio.h>
struct Point
{
	int x;
	int y;
};
struct Point p2;
int main()
{
	struct Point p1;
	return 0;
}


#include<stdio.h>
struct Point
{
	int x;
	int y;
};
struct Point p2 = { 2,3 };
int main()
{
	struct Point p1 = { 3,4 };
	return 0;
}


#include<stdio.h>
struct S
{
	char c1;
	int a;
	char c2;
};
struct S2
{
	int a;
	char c1;
	char c2;
};
int main()
{
	printf("%d\n", sizeof(struct S));
	printf("%d\n", sizeof(struct S2));
	return 0;
}
//���Ϊ12 �� 8 


size_t offsetof(structName, memberName);
//ͷ�ļ�Ϊ<stddef.h>


#include<stdio.h>
#include<stddef.h>
struct S2
{
	int a;
	char c1;
	char c2;
};
int main()
{
	printf("%d\n", offsetof(struct S2, c1));
	printf("%d\n", offsetof(struct S2, a));
	printf("%d\n", offsetof(struct S2, c2));
	return 0;
}


#include<stdio.h>
struct S
{
	char c1;
	int a;
	char c2;
};
#define my_offsetof(s_type,member) (int)&(((s_type*)0)->member)
//��0��ַǿ������ת����һ���ṹ��ָ�룬Ȼ��ȥ���ʳ�Ա��Ȼ��ȡ��ַ��֮��
//�����þͿ�����
int main()
{
	printf("%d\n", my_offsetof(struct S, c1));
	printf("%d\n", my_offsetof(struct S, a));
	printf("%d\n", my_offsetof(struct S, c2));
	return 0;
}


#include<stdio.h>
struct S3
{
	double d;
	char c;
	int i;
};
//16
struct S4
{
	char c1;
	struct S3 s3;
	double d;
};
//32
//��8��ʼ�Žṹ��3���ӱ�����ʼ��
int main()
{
	printf("%d\n", sizeof(struct S4));
	return 0;
}


#include<stdio.h>
#pragma pack(2)  //����Ĭ�϶�����Ϊ2
struct S
{
	int a;   //4 
	char c1;   //1 
	char c2;   //1 
	//һ��6���ֽڴ�С
};
int main()
{
	printf("%d\n", sizeof(struct S));
	return 0;
}
//��СΪ6


#include<stdio.h>
#define my_offsetof(s_type,m) (int)&(((s_type*)0)->m)
struct S
{
	int a;
	char b;
	char c;
};
int main()
{
	printf("%d\n", my_offsetof(struct S,a));
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
	int n = 0;
	int count = 0;
	(void)scanf("%d", &n);
	for (int i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
			count++;
	}
	printf("%d", count);
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
	int a = 3;
	int b = -a;
	printf("%d\n", b);
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);      //��Ԫ�صĵ�ַ
	printf("%p\n", &arr[0]); //��Ԫ�صĵ�ַ
	printf("%p\n", &arr);    //����ĵ�ַ
	return 0;
}
//������ֵ��ͬ


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
	i = a++ || ++b || d++;
	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
	return 0;
}
//��ӡ��ֵΪ1 3 3 4


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
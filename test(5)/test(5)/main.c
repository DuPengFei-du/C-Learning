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
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
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
	printf("%p\n", pd + 4);
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
//�����9����Ϊ����֮����9��Ԫ��


#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%d\n", &arr[0] - &arr[9]);
	return 0;
}
//���Ϊ-9����Ϊ��С��ַ-���ַ
//����ľ���ֵΪ����֮��Ԫ�صĸ���


//�����ַ����ĳ���
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


//�����ַ����ĳ���
#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)
{
	assert(str);
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
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


//�����ַ����ĳ���
#include<stdio.h>
#include<assert.h>
int my_strlen(char* str)
{
	assert(str);
	char* ret = str;
	while (*str != '\0')
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
int main()
{
	int arr[10] = { 0 };
	printf("%p\n", &arr[0]);   //������Ԫ�صĵ�ַ
	printf("%p\n", arr);       //������Ԫ�صĵ�ַ
	printf("%p\n", &arr);      //����ĵ�ַ
	return 0;
}
//���������������ʾ��������
//&arr  //��������ʾ�����������飬ȡ����������ĵ�ַ
//sizeof(arr)  //��������ʾ�����������飬���������������Ĵ�С
//����֮�⣬����������������Ԫ�صĵ�ַ


//ָ������
//ָ������������
//ָ��������ŵ���ָ��
#include<stdio.h>
int main()
{
	int arr[10];  //�������� 
	char ch[5];   //�ַ�����
	int* arr2[6];
	char* arr[3];
	return 0;
}


//ָ�����������
//ָ�������п��Էźö���˵ĵ�ַ
#include<stdio.h>
int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	int e = 5;
	int* arr[5] = { &a,&b,&c,&d,&e };
	printf("%d", *arr[4]);  //��ӡ�Ľ��Ϊe��ֵ��Ϊ5
	return 0;
}


#include<stdio.h>
int main()
{
	char* arr1[5];   //sizeof(arr1)   ��СΪ20
	int* arr2[5];    //sizeof(arr2)   ��СΪ20
}


#include<stdio.h>
int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int* ptr = (int*)(&a + 1);  //��1�������������飬ǿ��ת������int* 
	printf("%d,%d", *(a + 1), *(ptr - 1));  //-1��ǰŲ��һ����ָ��5�ĵ�ַ��������֮��
	//�õ��ľ���5��ֵ
	return 0;
	//���Ϊ2 5
}


struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
//����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
//�ṹ���СΪ20���ֽ�
int main()
{
	p = (struct Test*)0x100000;
	//�������Ҫ����ĵ�����ָ��+1��Ȩ�޵����ж��
	//ָ���Ȩ���Ǻ�ָ�������������ص�
	printf("%p\n", p + 0x1);
	//p��Ϊһ��ָ�������p�Ĵ�С��20���ֽڣ���ô���ڴ˴���˵��p+1�������ܹ����ʵ�Ȩ�޾���20���ֽ�
	//����p+1���ӵľ���20���ֽڣ�0x��16���ƣ�20��16�����¾���14������ΪpΪ0x100000,������+14�Ľ����
	//0x100014
	printf("%p\n", (unsigned long)p + 0x1);
	//�˴�p��ǿ������ת���������Σ�����p+1�ڴ˴�����p+1�����������㣬���Խ��Ϊ
	//0x100001
	printf("%p\n", (unsigned int*)p + 0x1);
	//�˴�p��ǿ������ת������ָ�����ͣ�����ָ��+1��ӵ�е�Ȩ����4���ֽڣ���ô��p+1�Ľ����
	//0x100014
	return 0;
}


#include<stdio.h>
int main()
{
	int a[4] = { 1, 2, 3, 4 };
	int* ptr1 = (int*)(&a + 1);
	int* ptr2 = (int*)((int)a + 1);
	printf("%x,%x", ptr1[-1], *ptr2);
	return 0;
}


#include <stdio.h>
int main()
{
	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
	int* p;
	p = a[0];
	printf("%d", p[0]);
	return 0;
	//��ӡ�Ľ����1������ĵ��Ƕ��ű��ʽ�����ö��ű��ʽ��������г�ʼ��
}


#include<stdio.h>
int main()
{
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	return 0;
}


#include<stdio.h>
int main()
{
	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* ptr1 = (int*)(&aa + 1);
	//&����������������������飬���������1��λ��������10�ĺ���
	//Ȼ����-1��λ��������10��Ȼ���ٽ����þ͵õ�10λ�ô���ֵ
	//���Խ����Ϊ10
	int* ptr2 = (int*)(*(aa + 1));
	//��Ԫ�صĵ�ַ��1��λ�������˵ڶ��У�Ȼ����н����ã��൱���õ��˵ڶ���
	//Ҳ�����õ���6�ĵ�ַ��Ȼ��-1������5�ĵ�ַ����Ȼ�������
	//�õ���5��ֵ�����Խ��Ϊ5
	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
	return 0;
	//���Ϊ 10 �� 5 
}


#include<stdio.h>
int main()
{
	char* a[] = { "work","at","alibaba" };
	char** pa = a;
	pa++;
	printf("%s\n", *pa);
	return 0;
	//���Ϊat
	//aΪָ������
	//pa+1,����һ��char*�Ĵ�С
}


#include<stdio.h>
int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	return 0;
}


#include<stdio.h>
struct Stu
{
	//��Ա����
	//��Ա�б�
	char name[20];
	short age;
	char sex[5];
	float score;
}s1, s2, s3;  //ѧ��s1,s2,s3   //����������ѧ������
int main()
{
	struct Stu s;
	return 0;
}


#include<stdio.h>
struct Stu
{
	//��Ա����
	//��Ա�б�
	char name[20];
	short age;
	char sex[5];
	float score;
};
int main()
{
	struct Stu s;
	return 0;
}


#include<stdio.h>
typedef struct Stu
{
	char name[20];
	short age;
	char sex[5];
	float score;
}Stu;   //Stu==struct Stu  �˴���StuΪ�����������Ǳ�����
int main()
{
	return 0;
}


#include<stdio.h>
struct Point
{
	int x;
	int y;
	//ע��ṹ���в��ܰ����Լ���һ�ṹ�壬���ǿ��԰�����Ľṹ��
	//�����Լ�����ṹ�壬����ṹ���С��ʱ��Ͳ�������
};
struct Test
{
	int a;
	char arr[10];
	int* p;
	struct Point;
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
struct T
{
	char arr[10];
	int age;
	struct Point p;
	int arr2[5];
};
int main()
{
	struct Point p = { 1,2 };
	struct T t = { "hehe",20,{2,4},{1,2,3,4} };
	printf("%s %d %d %d %d %d\n", t.arr, t.age, t.p.x, t.p.y, t.arr2[0], t.arr2[1]);
	return 0;
}


struct Stu
{
	char name[20];
	int age;
};
//���ֻ����Щ����Ļ�������û�����ڴ�������ռ�ġ�
struct Stu s = { "zhangsan",20 };
//��������Ĵ���s������Ǿ���䣬�������ڴ���������һ���Ŀռ䡣
//���ҵ�name�Ļ�������s.name�����ҵ�age�Ļ�������s.age
#include<stdio.h>
struct Stu
{
	char name[20];
	int age;
};
void Print(struct Stu* s)  //�ṹ��ָ��
{
	printf("%s %d", s->name, s->age);
}
int main()
{
	struct Stu s = {"����",20 };
	Print(&s);
	return 0;
}


#include<stdio.h>
struct Stu
{
	char name[20];
	int age;
};
void Print(struct Stu* s)  //�ṹ��ָ��
{
	printf("%s %d", s->name, s->age);
}
int main()
{
	struct Stu s = { "����",20 };
	Print(&s);
	return 0;
}


#include<stdio.h>
struct Stu
{
	char name[20];
	int age;
};
void Print(struct Stu s)  //�ṹ��ָ��
{
	printf("%s %d", s.name, s.age);
}
int main()
{
	struct Stu s = { "����",20 };
	Print(s);
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
		return 1 + my_strlen(str+1);
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
	while (*str != '\0')
	{
		count++;
		str++;
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
	while (*str != '\0')
		str++;
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
	while(*dest++=*source++)
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
#include<assert.h>
char* my_strcat(char* str1, const char* str2)
{
	assert(str1);
	assert(str2);
	char* ret = str1;
	while (*str1 != '\0')
	{
		str1++;
	}
	while (*str1++ = *str2++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = "hello";
	char arr2[] = " world";
	my_strcat(arr1, arr2);
	printf("%s", arr1);
	return 0;
}
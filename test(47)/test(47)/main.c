#define _CRT_SECURE_NO_WARNINGS 1



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
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
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
	printf("%d\n", len);
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
	printf("%d\n", len);
	return 0;
}


//����ָ��-ָ��ķ���
//�ó�����ָ��֮���Ԫ�ظ���
#include<stdio.h>
int my_strlen(char* str)
{
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - start;
}
int main()
{
	char arr[] = "Hello World";
	int len = my_strlen(arr);
	printf("%d\n", len);
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


#include<stdio.h>
int main()
{
	int a = 10;
	int* p = &a;
	int** pp = &p;
	int*** ppp = &pp;
	return 0;
}


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
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = { 2,3,4,5,6 };
	int arr3[5] = { 3,4,5,6,7 };
	int* arr[3] = { arr1,arr2,arr3 };  //��������ʾ��Ԫ�صĵ�ַ
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
			//printf("%d ",*(arr[i]+j);
		}
		printf("\n");
	}
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
		printf("%d ", arr[i]);
	}
	return 0;
}


#include<assert.h>
#include<stdio.h>
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


#include<assert.h>
#include<stdio.h>
int my_strlen(const char* str)
{
	assert(str);
	int count = 0;
	while (*str!='\0')
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


#include<assert.h>
#include<stdio.h>
int my_strlen(char* str)
{
	assert(str);
	char* dest = str;
	while (*str!='\0')
	{
		str++;
	}
	return str - dest;
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
	char arr[] = "hello world";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
#include<assert.h>
int my_strlen(char* str)
{
	assert(str);
	char* dest = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - dest;
}
int main()
{
	char arr[] = "hello world";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


//ģ��ʵ��strcpy
#include<stdio.h>
#include<assert.h>
char my_strcpy(char* dest, const char* source)
{
	assert(dest);
	assert(source);
	char* ret = dest;
	while (*dest++ = *source++)
	{
		;
	}
	return *ret;
}
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello world";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


//ģ��ʵ��strcat
#include<stdio.h>
#include<assert.h>
char* my_strcat(char* dest, const char* source)
{
	assert(dest);
	assert(source);
	char* ret = dest;
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
	char arr1[20] = "hello ";
	char arr2[] = "world";
	my_strcat(arr1, arr2);
	printf("%s", arr1);
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
}p1;  //�������͵�ͬʱ����p1
int main()
{
	struct Point p2;     //����ṹ�����p2
	return 0;
}
//ͨ������p2�ķ�ʽ


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
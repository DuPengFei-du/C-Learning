#define _CRT_SECURE_NO_WARNINS 1


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


//�ṹ��ĳ�Ա�����������������͵�
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
void My_BubbleSort(int arr[], int sz, int width, int (*cmp_int)(const void* e1, const void* e2))
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (cmp_int((char*)arr + j * width, (char*)arr + (j + 1) * width) > 0)
			{
				Swap((char*)arr + j * width, (char*)arr + (j + 1) * width,width);
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
char* my_strcpy(char* dest,const char *source)
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
	char arr[] = "abcdef";
	char arr1[20] = { 0 };
	my_strcpy(arr1, arr);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<assert.h>
#include<string.h>
char* my_strcpy(char* dest, const char* source,size_t count)
{
	assert(dest);
	assert(source);
	char* ret = dest;
	int sz = 0;
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
	char arr[] = "abcdef";
	char arr1[20] = { 0 };
	my_strcpy(arr1, arr,10);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<assert.h>
char* my_strcat(char* dest,const char *source)
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
	char arr[] = "abcdef";
	char arr1[20] = "ABC";
	my_strcat(arr1, arr);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<assert.h>
char* my_strncat(char* dest, const char* source,int n)
{
	assert(dest);
	assert(source);
	char* ret = dest;
	while (*dest)
	{
		dest++;
	}
	while (n--)
	{
		*dest++ = *source++;
	}
	*dest = '\0';
	return ret;
}
int main()
{
	char arr[] = "abcdef";
	char arr1[20] = "ABC";
	my_strncat(arr1, arr,4);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<assert.h>
int my_strcmp(const char* dest, const char* source)
{
	assert(dest);
	assert(source);
	while (*dest == *source)
	{
		if (*dest == '\0')
			return 0;
		dest++;
		source++;
	}
	return *dest - *source;
}
int main()
{
	char arr[] = "abcdef";
	char arr1[20] = "ABC";
	int ret=my_strcmp(arr1, arr);
	printf("%d", ret);
	return 0;
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
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
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
char* my_strcpy(char* dest,const char *source)
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
	char arr[] = "abcdef";
	char arr1[20] = { 0 };
	my_strcpy(arr1, arr);
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
	char* ret = dest;
	int sz = 0;
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
	char arr[] = "abcdef";
	char arr1[20] = { 0 };
	my_strncpy(arr1, arr,15);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<assert.h>
#include<string.h>
char* my_strncat(char* dest, const char* source, int n)
{
	assert(dest);
	assert(source);
	char* ret = dest;
	while (*dest)
	{
		dest++;
	}
	while (n--)
	{
		*dest++ = *source++;
	}
	*dest = '\0';
	return ret;
}
int main()
{
	char arr[] = "abcdef";
	char arr1[20] = "ABC";
	my_strncat(arr1, arr, 3);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<assert.h>
#include<string.h>
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
	char arr[] = "abcdef";
	char arr1[20] = "ABC";
	my_strcat(arr1, arr);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<assert.h>
#include<string.h>
int my_strcmp(char* dest, const char* source)
{
	assert(dest);
	assert(source);
	while(*dest == *source)
	{
		if (*dest == '\0')
			return 0;
		dest++;
		source++;
	}
	return *dest - *source;
}
int main()
{
	char arr[] = "abcdef";
	char arr1[20] = "ABC";
	int ret = my_strcmp(arr1, arr);
	printf("%d", ret);
	return 0;
}


char* strstr(const char* string, const char* strCharSet);
//�������ַ��������ص��ǵ�ַ����һ�γ��ֵ�λ��
//���û���ҵ��Ļ������ؿ�ָ�룬���ǲ���ֱ�ӷ���
//��Ϊ�����û���ҵ��Ļ������ؿ�ָ����ǷǷ����ڴ�����ˣ��ͻ�����ˡ�


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abcdefabcdef";
	char arr2[] = "cdef";
	char* ret = strstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("�Ҳ���\n");   //����ֱ�ӷ��أ���Ҫ�Ƚ����ж�һ��
	}
	else
	{
		printf("%s\n", ret);

	}
	return 0;
}
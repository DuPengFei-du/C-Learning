#define _CRT_SECURE_NO_WARNINGS 1



//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdlib.h>
//#include<stdio.h>
////<stdio.h>Ϊ��׼�������������ͷ�ļ�
////дһ��C���ԵĴ�����ʵ������д��׺��Ϊ.c(ԭ�ļ�)��.h�ļ�(ͷ�ļ�)
//int main()
//{
//	//printfΪ��������ĺ���--�⺯��(�����Լ�ʵ�ֵģ���Ҫ����һ��ͷ�ļ�)
//	//˫�����ڲ���ӡ�����ַ���
//	//�򵥵����һ�仰��������printf����
//	printf("hello world\n");
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	(void)scanf("%d", &num);
//	printf("%d", num);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(int));  //4
//	printf("%d\n", sizeof(char)); //1
//	printf("%d\n", sizeof(short)); //2
//	printf("%d\n", sizeof(long));  //4/8
//	printf("%d\n", sizeof(long long));  //8
//	printf("%d\n", sizeof(float));  //4
//	printf("%d\n", sizeof(double));  //8
//	return 0;
//}
////���͵Ĵ�С��λ�����ֽ�
////������еĵ�λ 
////bit(λ) byte(�ֽ�) kbyte(kb) mb gb tb pb  
////ǰ������λ֮��Ļ��㵥λ��8������ĵ�λ֮�����1024


//#include<stdio.h>
//int main()
//{
//	{
//		int num = 10;
//	}
//	printf("%d", num);
//	return 0;
//	//��ʱ�������������num�������в�������printf��䡣
//}


//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c',0 };
//	printf("%s\n", "abc");
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//	//���ִ�ӡ�Ľ������abc
//	//���arr2���治��0�Ļ�����ô��ӡ����ͻ�����abc�ĺ��滹����������̵��ַ�
//	//��Ϊ�������0�Ļ����ַ����ͻᲢû�н�����ֻ�м���0����\0�Ż�ֹͣ��ӡ
//	//�����̱������ʵ������ʵ��0xcccccc
//	//�ɴ˿��Կ���\0���ַ�����˵�Ƿǳ���Ҫ��
//	//�ַ�����\0��Ҫ�Ľ�����־�ķ��ţ�
//}


//#include<stdio.h>
//int main()
//{
//	printf("c:\test\test.c\n");
//	return 0;
//}
////��������������Ϊ
////c:      est     est.c
////��Ҫ��ӦΪ��������\tҲ������һ��ת���ַ���ʹ�ã������Ҫ�����printf���������һ���Ķ�������ô��\t��ǰ���ڼ���һ��\������


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	printf("%d\n", 10);
//	printf("%d\n", strlen("abc"));
//	printf("%d\n", strlen("c:\test\47\test.c"));
//	return 0;
//	//���У�������printf����������Ϊ13����Ҫ�����������\47
//	//�����еı��ʻ����ڿ������ת���ַ������
//	//\dddҲΪת���ַ�������ddd��ʾ1-3���˽��Ƶ����֣�����������ͳһ�Ŀ���һ���ַ�������˵����Ϊ1.
//	//\xddd  ddd��ʾ3��16��������
//}


////�����ƵĻ�ϴ�ӡһ��������
//#include<stdio.h>
//int main()
//{
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int input = 0;
//	printf("Ҫѧϰ�� (1/0)\n");
//	(void)scanf("%d", &input);
//	if (input == 0)
//	{
//		printf("����ѧϰ\n");
//	}
//	else if (input == 1)
//	{
//		printf("�õ�offer\n");
//	}
//	return 0;
//}


////дһ���������ӷ��ĺ���
//#include<stdio.h>
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	(void)scanf("%d %d", &a, &b);
//	c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	printf("\n");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	char* pa = (char*)& a;
//	if (*pa == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//	return 0;
//}


//#include<stdio.h>
//int CheckSystem()
//{
//	int a = 1;
//	char* pa = (char*)& a;
//	return *pa;
//}
//int main()
//{
//	int ret = CheckSystem();
//	if (ret == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//	return 0;
//}


//#include<stdio.h>
//int CheckSystem()
//{
//	union Un
//	{
//		int i;
//		char c;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	int ret = CheckSystem();
//	if (ret == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void Swap(char* buf1, char* buf2, int width)
//{
//	for (int i = 0; i < width; i++)
//	{
//		char temp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = temp;
//		buf1++;
//		buf2++;
//	}
//}
//void My_BubbleSort(int* arr, int sz, int width, int (*cmp_int)(const void* e1, const void* e2))
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (cmp_int((char*)arr + j * width, (char*)arr + (j + 1) * width) > 0)
//			{
//				Swap((char*)arr + j * width, (char*)arr + (j + 1) * width, width);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	My_BubbleSort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char* str)
//{
//	assert(str);
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);
//	while (*str)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//int my_strlen(char* str)
//{
//	assert(str);
//	char* ret = str;
//	while(*str)
//	{
//		str++;
//	}
//	return str - ret;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* dest, const char* source)
//{
//	assert(dest);
//	assert(source);
//	char* ret = dest;
//	while (*dest++ = *source++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr[20] = { 0 };
//	char arr2[] = "abcdef";
//	my_strcpy(arr, arr2);
//	printf("%s", arr);
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//char* my_strcat(char* dest, const char* source)
//{
//	assert(dest);
//	assert(source);
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *source++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr[20] = "ghj";
//	char arr2[] = "abcdef";
//	my_strcat(arr, arr2);
//	printf("%s", arr);
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//int main()
//{
//	char arr[20] = "ghj";
//	char arr2[] = "abcdef";
//	int ret=my_strcmp(arr, arr2);
//	printf("%d",ret);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char arr[20] = "abcdef";
//	int len = strlen(arr);
//	printf("%d", len);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abc";
//	if (strlen(arr2) - strlen(arr1) > 0)
//		printf("arr2>arr1");
//	else
//		printf("arr2<arr1");
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abcdef";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}


////ģ��ʵ��strcpy
////�ַ����Ŀ���
//#include<stdio.h>
//void my_strcpy(char* dest, char* source)//��ָ�����
//{
//	while (*source != '\0')
//	{
//		*dest = *source;
//		dest++;
//		source++;
//	}
//	*dest = *source;
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello word";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[20] = "Hello";
//	char arr2[] = " world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "bdefetfsf";
//	char arr2[] = "abc";
//	int ret = strcmp(arr1, arr2);
//	printf("%d", ret);
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > * str2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}
//int main()
//{
//	char arr1[] = "bedfwseg";
//	char arr2[] = "abc";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d", ret);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdlib.h>
//#include<stdio.h>
////<stdio.h>Ϊ��׼�������������ͷ�ļ�
////дһ��C���ԵĴ�����ʵ������д��׺��Ϊ.c(ԭ�ļ�)��.h�ļ�(ͷ�ļ�)
//int main()
//{
//	//printfΪ��������ĺ���--�⺯��(�����Լ�ʵ�ֵģ���Ҫ����һ��ͷ�ļ�)
//	//˫�����ڲ���ӡ�����ַ���
//	//�򵥵����һ�仰��������printf����
//	printf("hello world\n");
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int main()
////main���������������Ǻ��������
//{
//	printf("hehe\n");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	(void)scanf("%d", &num);
//	printf("%d", num);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(int));  //4
//	printf("%d\n", sizeof(char)); //1
//	printf("%d\n", sizeof(short)); //2
//	printf("%d\n", sizeof(long));  //4/8
//	printf("%d\n", sizeof(long long));  //8
//	printf("%d\n", sizeof(float));  //4
//	printf("%d\n", sizeof(double));  //8
//	return 0;
//}
////���͵Ĵ�С��λ�����ֽ�
////������еĵ�λ 
////bit(λ) byte(�ֽ�) kbyte(kb) mb gb tb pb  
////ǰ������λ֮��Ļ��㵥λ��8������ĵ�λ֮�����1024


//#include<stdio.h>
//int main()
//{
//	char ch = 'w';
//	short age = 10;
//	float weight = 55.5;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	(void)scanf("%d %d", &a, &b);
//	c = a + b;
//	printf("%d ", c);
//	return  0;
//}


//#include<stdio.h>
//int main()
//{
//	int num = 10;
//	printf("%d", num);
//	return 0;
//	//�����������num��ֵ�ǿ���������ӡ������
//	//��Ϊnum�Ǿֲ�����������printf���Ҳ����num���������У������ǿ���������ӡ�����ġ�
//}


//#include<stdio.h>
//int main()
//{
//	{
//		int num = 10;
//	}
//	printf("%d", num);
//	return 0;
//	//��ʱ�������������num�������в�������printf��䡣
//}


//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};


//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c',0 };
//	printf("%s\n", "abc");
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//	//���ִ�ӡ�Ľ������abc
//	//���arr2���治��0�Ļ�����ô��ӡ����ͻ�����abc�ĺ��滹����������̵��ַ�
//	//��Ϊ�������0�Ļ����ַ����ͻᲢû�н�����ֻ�м���0����\0�Ż�ֹͣ��ӡ
//	//�����̱������ʵ������ʵ��0xcccccc
//	//�ɴ˿��Կ���\0���ַ�����˵�Ƿǳ���Ҫ��
//	//�ַ�����\0��Ҫ�Ľ�����־�ķ��ţ�
//}


//#include<stdio.h>
//int main()
//{
//	printf("c:\test\test.c\n");
//	return 0;
//}
////��������������Ϊ
////c:      est     est.c
////��Ҫ��ӦΪ��������\tҲ������һ��ת���ַ���ʹ�ã������Ҫ�����printf���������һ���Ķ�������ô��\t��ǰ���ڼ���һ��\������
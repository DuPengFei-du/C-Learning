#define _CRT_SECURE_NO_WARNINGS 1



//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}


//#include<stdio.h>
//int MAX(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	(void)scanf("%d %d", &a,&b);
//	c = MAX(a, b);
//	printf("%d", c);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	(void)scanf("%d %d", &a, &b);
//	int temp = a;
//	a = b;
//	b = temp;
//	printf("%d %d", a, b);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	(void)scanf("%d %d", &a, &b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	(void)scanf("%d %d", &a, &b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//	return 0;
//}


//#include<stdio.h>
//int is_prime(int n)
//{
//	for (int i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	(void)scanf("%d", &n);
//	int ret = 0;
//	ret = is_prime(n);
//	if (ret == 1)
//		printf("����\n");
//	else
//		printf("��������\n");
//	return 0;
//}


////��ӡÿһλ
//#include<stdio.h>
//void Print(int n)
//{
//	if (n > 9)
//		Print(n / 10);
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	(void)scanf("%d", &n);
//	Print(n);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char arr1[] = "hello world";
//	memset(arr1, 'x', 5);
//	printf("%s", arr1);
//	return 0;
//}


//#include<stdio.h>
//int is_leapyear(int i)
//{
//	if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int n = 0;
//	(void)scanf("%d", &n);
//	if (is_leapyear(n) == 1)
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//	printf("%d\n", strlen("abcdef"));
//	return 0;
//}
////��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���


//#include<stdio.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d", len);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	//����Ҳ��һ���Զ�������
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));                //40
//	printf("%d\n", sizeof(int[10]));          //40
//	int a = 10;
//	sizeof(int);  //���Ե�
//	sizeof(a);    //���Ե�
//	//��ô�������ˣ������������ʲô�أ�
//	//��������ͣ���������ȥ��������ʣ�µĲ���
//	//������������������� int arr[10],��ô��������;���int [10]
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
//	char* pa = (char*)&a;
//	return *pa;
//}
//int main()
//{
//	int ret = CheckSystem();
//	if (ret==1)
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
//struct Stu
//{
//	char name[20];
//	int age;
//};
//union Un
//{
//	int i;
//	char c;
//};    //����������
//int main()
//{
//	union Un u = { 0 };   //uΪ���������
//	printf("%d\n", sizeof(u));   //���Ϊ4
//	printf("%p\n", &u);
//	printf("%p\n", &(u.i));
//	printf("%p\n", &(u.c));
//	//�����ĵ�ַ��һģһ���ģ�˵��i��cռ��ͬһ��ռ�
//	//�����������ֽй����壬���������˼�����ҵĳ�ԱҪ����ͬһ��ռ�
//	//��ô�Ҹ�i����Ŷ���c�ͻᷢ���仯
//	//�Ҹ�c����Ŷ�����iҲ�ᷢ���仯
//	//c��iռ���ĸ��ֽ��еĵ�һ���ֽڣ���Ҳ����˴�С���㷨����һ�ֽⷨ����
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000   ԭ��-- -128
//	//11111111111111111111111101111111   ����
//	//11111111111111111111111110000000   ����
//	//����ֻ�ܴ�8������λ�����Ϊ10000000
//	//��Ҫ������������
//	//������ʱ����Ҫ��ԭ���ķ���λ��ȫ������1
//	//���Ϊ11111111111111111111111110000000  --����
//	//����Ϊ���޷�����������ԭ�룬���룬����ȫ����ͬ
//	//���Ծ͵õ��˽����4294967168
//	printf("%u\n", a);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	//ʲôʱ������\0�����Ⱦ��Ƕ��٣��ο�char�ķ�Χ���ĸ�ԲȦ
//	//���Խ��Ϊ255
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char a = 'w';
//	char* pc = &a;   //���ʱ��pc��Ϊ�ַ�ָ�룬pc������Ϊchar*
//	char arr[10] = "abc";
//	char* pa = arr;   //arr��Ϊ�����������������������Ԫ�صĵ�ַ��pa������Ϊchar*
//	char* p = "abcdef";  //��ʱpֻ����4���ֽڣ�����abcdef����\0��6���ֽڣ���Ȼ�Ų���
//	//��ô��ʱ��p�д�ľ���"abcdef"���׸���ĸa�ĵ�ַ����ַ��ָ����գ��պ�Ϊ4���ֽ�
//	//�����������ʽ�Ľ���������ַ�a�ĵ�ַ��
//}


//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	if (arr1 == arr2)
//		printf("arr1==arr2\n");
//	else
//		printf("arr1!=arr2\n");
//	return 0;
//	//��ӡ���Ϊarr1!=arr2
//	//ԭ��:��Ϊarr1��arr2�Ὺ������ռ�Ĵ�С����Ȼ����ʾ��������ĸa�ĵ�ַ
//	//��������ռ�ĵ�ַ�ǲ�һ���ģ���������ռ���a�ĵ�ַ��ȻҲ���ǲ�һ�����ˡ�
//}


//#include<stdio.h>
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	if (p1 == p2)
//		printf("p1==p2");
//	else
//		printf("p1!=p2");
//	return 0;
//	//��ӡ���Ϊp1==p2
//	//��Ȼ���ַ���abcdef��ַ������p1��p2���У����������ַ�����һ����
//	//����abcdef��������Ԫ��a�ĵ�ַ��ȻҲ��һ������
//	//abcdefΪ�����ַ���������˵���ǲ��ܱ��ı�ģ���ʵҲֻ�����һ��abcdef
//	//����p1�ĵ�ַ��p2�ĵ�ַ�Ǿ��Բ�һ���ġ�
//}


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	char c = 'w';
//	int* p1 = &a;
//	char* p2 = &c;
//	int arr[10] = { 0 };
//	char ch[5] = { 0 };
//	char* arr2[6] = { 0 };
//	//����ָ�����ָ�������ָ��
//	//arr  ��ʾ������Ԫ�صĵ�ַ
//	//&arr[0]��ʾ������Ԫ�صĵ�ַ
//	//&arr ��ʾ����ĵ�ַ
//	int(*p)[10] = &arr;  //����ĵ�ַ 
//	char(*pc)[5] = &ch;
//	char* (*pa)[6] = &arr2;
//	return 0;
//}


//#include<stdio.h>
//void Print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//}
//void Print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", (*(p+i))[j]);
//			printf("%d ", *(*(p + i) + j));
//			//*(p+i)�൱���ҵ��˵�i����Ԫ�صĵ�ַ
//			//Ҳ����д��p[i][j]
//			//��ʵp���൱��arr
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,3,4,5,6,7,4,5,6,7,8 };
//	Print1(arr, 3, 5);
//	Print2(arr, 3, 5);
//	//arr������Ԫ�صĵ�ַ�����ڶ�ά������˵����Ԫ�صĵ�ַ���ǵ�һ�еĵ�ַ
//	//�����б��Ǻ���Ҫ��
//	return 0;
//}


////һά����Ĵ���
//#include<stdio.h>
//void test(int arr[])
//{
//
//}
//void test(int arr[10])
//{
//
//}
//void test(int* arr)
//{
//
//}
//void test2(int* arr[20])
//{
//
//}
//void test(int** arr)
//{
//
//}
////�����ļ��ִ�����ʽ������ȷ�ģ����Ҫ�����������ʽ���ݣ���ô��ԭģԭ���Ĵ��ݾͿ����ˡ�
////һά�����������ָ�����ʽ����ô���ö���ָ�������ղ������Ϳ����ˡ�
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}


//#include<stdio.h>
//void Print(int* p, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(p, sz);
//	return 0;
//}


//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("%p\n", &Add);   //֤ʵ�˺���Ҳ���е�ַ��
//	int (*p)(int x, int y) = &Add;
//	int ret = (*p)(2, 3);   //�����ĵ���
//	//Ҳ����д���� int ret=p(2,3);
//	//�ĸ�*д��д���У�д��������
//	//(*p)�����ҵ����������Ȼ�󴫲ν��е���
//	//p�Ǻ���ָ��
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	//����1
//	(*(void(*)())0)();
//
//	/*
//	���ȣ�void(*)()Ϊ����ָ�����ͣ����void(*)()�ڷ���������
//	�γ���(void(*)()),���Ƕ�֪����һ�����ͷ��������У�������
//	ǿ������ת���ģ�(void(*)())�ַ���0ǰ�棬��˼���ǰ�0ת����
//	����ָ�����ͣ�0������������int����ϣ����0���ɺ���ָ�����͵�������
//	һ�������ĵ�ַ��������ϣ��0�����ַ���ŵ���һ���޲Σ�����ֵ����
//	Ϊvoid�ĺ�����Ȼ�󣬼�Ȼ�Ǹ���ַ����ô�Ҿͽ�����һ��
//	�������ϣ�������һ���������á�
//	����0λ�ô��ĺ����������õ�����������޲εģ�����ֵ����Ϊvoid������
//	*/
//
//	//����2
//	void (*signal(int, void(*)(int)))(int);
//	/*
//	��δ�������������һ����������������signalΪ��������signal�����ĵ�һ������
//	Ϊint���ͣ��ڶ�����������Ϊ����ָ�����ͣ����˺����������˲���
//	ʣ�µľ��Ǻ����ķ���ֵ�����ˣ���������ķ���ֵ����Ҳ��һ������ָ������
//	*/
//	/*
//	��������Ϊ���������������κ���ָ�����ͣ��������ǿ�����typedef����
//	����������������
//	typedef void(*pfun_t)(int);
//	������������Ҳ���Ա��
//	pfun_t signal(int,pfun_t);
//	*/
//}


//#include<stdio.h>
//int my_strlen(const char* str)
//{
//
//}
//int main()
//{
//	int* arr[10];  //����ָ������
//	char* arr[5];  //�ַ�ָ������
//	int (*ps)(const char*) = &my_strlen;
//	int (*ps2)(const char*) = &my_strlen;
//	int (*ps3)(const char*) = &my_strlen;
//	int (*pArr[3])(const char*) = &my_strlen;   //����ָ������
//	//��ź���ָ�������
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr1[10];
//	char arr2[5];
//	return 0;
//}
////[]�б����ǳ������߳������ʽ����Ȼ�ͻᱨ��


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	return 0;
//}
////û�б���ֵ��Ԫ����Ĭ��ΪΪ0
////ͨ�����Ӵ�������


//#include<stdio.h>
//int main()
//{
//	char arr1[] = { 'a','b','c' };
//	char arr2[] = "abc";
//	printf("%s", arr1);
//	printf("%s", arr2);
//	return 0;
//}
////������������ǲ�һ����
////arr1�ǲ����Կ�������ģ���Ϊ��û��\0��\0���ַ����Ľ�����־
////���û��\0�ǲ����Կ����ַ�����
////arr2�ǿ��Կ����ַ����ģ�c���滹��һ�����ص�\0


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}
////ÿ��Ԫ�ص�ַ֮����ֵ��4
////����Ϊʲô��4����Ϊ����һ�����ε����飬ÿ��Ԫ��ռ��4���ֽڡ�


//#include<stdio.h>
//int main()
//{
//	int arr1[3][4]; //������һ���������е�����
//	char arr2[4][5];
//	double arr3[3][5];
//}


//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	return 0;
//}
////������֮��ĵ�ֵַ�Ĳ�ֵΪ40���պ�Ϊ����Ĵ�С
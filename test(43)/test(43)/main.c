#define _CRT_SECURE_NO_WARNINGS 1



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
//void test(int arr[3][5])
//{
//
//}
//void test(int arr[][])
//{
//	//���ִ����ǲ���ȷ�ģ�����ʡ���У�������ʡ����
//}
//void test(int arr[][5])
//{
//
//}
////�ܽ�:��ά���鴫�Σ�������ʽ�����ֻ��ʡ�Ե�һά��[],����ʡ�Եڶ�ά��
////��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ���֪��һ���ж��ٸ�Ԫ��
////�����Ż᷽�����㣬ͬ����һ���ĵ��������������ղ�������ô��ԭģԭ���Ľ��վͿ�����
//void test(int(*arr)[5])
//{
//
//}
//int main()
//{
//	int arr[3][5];
//	test(arr);
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
//int main()
//{
//	int a = 0;
//	int b = 0;
//	(void)scanf("%d %d", &a, &b);
//	if (a > b)
//		printf("%d", a);
//	else
//		printf("%d", b);
//	return 0;
//}


//#include<stdio.h>
//int max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	(void)scanf("%d %d", &a, &b);
//	c = max(a, b);
//	printf("%d", c);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int temp = 0;
//	(void)scanf("%d %d", &a, &b);
//	temp = a;
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
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
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


////�ж�һ�������ǲ�������
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
//	if (is_prime(n) == 1)
//		printf("����\n");
//	else
//		printf("��������\n");
//	return 0;
//}


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


////���ַ�������
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
//	char arr[] = "hello world";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int sum = 1;
//	(void)scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	printf("%d", sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int sum = 0;
//	int ret = 1;
//	(void)scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d", sum);
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
//void Swap(int* x, int* y)
//{
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	(void)scanf("%d %d", &a, &b);
//	Swap(&a, &b);
//	printf("%d %d", a, b);
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
//void BinarySearch(int arr[], int sz)
//{
//	int key = 7;
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < key)
//			left = mid + 1;
//		else if (arr[mid] > key)
//			right = mid - 1;
//		else
//		{
//			printf("�ҵ���,�±���:%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���\n");
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BinarySearch(arr, sz);
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
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
////��ӡ�Ľ��Ϊ4 3 2 1
////printf�����ķ���ֵ���ַ��ĸ���


//#include<stdio.h>
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	int c = 0;
//	(void)scanf("%d", &n);
//	c = fib(n);
//	printf("%d\n", c);
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
//	char arr1[] = "abcdef";
//	//������һ�����飬�����д����abcdef
//	const char* p = "abcdef";
//	//���ַ���abcdef����Ԫ�صĵ�ַ����a�ĵ�ַ������p��
//	arr1[2] = 'w';
//	//�޸������е����ݣ��Ǳ������
//	*(p + 2) = 'w';        //p[2]
//	//p��ָ�����һ�������ַ����������ַ����е�ֵ�ǲ����Ա��޸ĵ�
//	return 0;
//	//����������������ǻ�����ģ���������Ҫԭ�����ڣ�*(p+2)='w'
//	//�������ǲ���ȷ��
//	//�ַ�ָ�벻������������ַ��ĵ�ַ�������ܴ��һ���ַ�������ʼ��ַ
//}


//#include<stdio.h>
//void Print1(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 1; i <= sz; i++)
//	{
//		printf("%d ", i);
//	}
//	printf("\n");
//}
//void Print2(int(*p)[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", (*p)[i]);
//		//�����ҵ����飬��(*p)�ҵ����飬Ȼ��ȥ���ʵ�i��Ԫ��
//		//����������ŵĻ�����ôp�ͻ��Ⱥ�[]���н��
//		//��ʵ(*p)�͵�����������Ȼ��[i]�����൱����arr[i];
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print1(arr, sz);
//	Print2(&arr, sz);
//	return 0;
//}


//����ָ����Ҫ��������Ĵ���
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


//#include<stdio.h>
//int main()
//{
//	int arr[5];          //��������
//	int* parr1[10];      //ָ������
//	int(*parr2)[10];     //����ָ��
//	int(*parr3[10])[5];  //�������ָ������飬���Դ��10��������ָ��
//	//������10�����������д洢���������������ָ��
//	//5������Ԫ�ص�����ĵ�ַ ������ÿ��Ԫ�ص�������int
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
//��ά���鴫��������ָ�����


////���ú���ָ�������Ż�������
//#include<stdio.h>
//void menu()
//{
//	printf("**********************\n");
//	printf("*** ��ӭ���������� ***\n");
//	printf("***  1.Add   2.Sub ***\n");
//	printf("***  3.Mul   4.Div ***\n");
//	printf("**********************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void test()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	int (*parray[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		(void)scanf("%d", &input);
//		printf("����������������:>\n");
//		(void)scanf("%d %d", &x, &y);
//		ret = parray[input](x, y);
//		printf("%d\n", ret);
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}
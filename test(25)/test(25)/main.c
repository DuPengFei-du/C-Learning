#define _CRT_SECURE_NO_WARNINGS 1



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


////��������ʵ��
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
//	do
//	{
//		menu();
//		printf("��ѡ��:>\n");
//		(void)scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("����������������:>\n");
//			(void)scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("����������������:>\n");
//			(void)scanf("%d %d", &x, &y);
//			ret = Sub(x, y);;
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("����������������:>\n");
//			(void)scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("����������������:>\n");
//			(void)scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��!\n");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}


////��������ʵ��
////���ú���ָ������������һ��������
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
//	int (*p[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("��ѡ��:>\n");
//		(void)scanf("%d", &input);
//		printf("����������������!\n");
//		(void)scanf("%d %d", &x, &y);
//		ret = p[input](x, y);
//		printf("%d\n", ret);
//	} while (input);
//}
//int main()
//{
//	test();
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
////1�ų���Աд�Ĵ���
//int Add(int x, int y)
//{
//	return x + y;
//}
////2�ų���Աд�Ĵ���
//int test(int (*pf)(int, int))
//{
//	//���2�ų���Ա���������ڲ�����Add�����Ļ����ҿ������������н�Add�����ĵ�ַ���ݸ�2�ų���Աд�Ĵ���
//	//��ô2�ų���Աд�Ĵ��룬��Ҫ��Add�����ĵ�ַ���н��գ����ú���ָ��(ָ������ָ��)
//	//pfΪָ�����
//	pf(2, 4);  //�������ָ����ָ��ĺ�������ʱ�����õĺ����ͳ�Ϊ�ص�����
//}
//int main()
//{
//	//1�ų���Ա���е���
//	//�Լ�д�Ĵ��룬�Լ�ֱ�ӵ��ã����ֲ�����Ϊ�ص�����
//	int ret = Add(2, 3);
//	int res = test(Add);
//	printf("%d", res);
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
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
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
////һά�������ڴ����������洢��


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;  //�õ�����Ԫ�صĵ�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p===%p\n", &arr[i], p + i);
//	}
//	return 0;
//}
////��������˵����p+iΪ�±�Ϊi��Ԫ�صĵ�ַ
////*(p + i)Ϊ�±�Ϊi��Ԫ�ص�ֵ


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ",*(p + i));
//	}
//	return 0;
//}


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
//	int arr[3][4] = { 1,2,3,4,5,6 };//����û�г�ʼ����Ԫ��ȫ����0�Դ�
//	int arr2[3][4] = { {1,2},{3,4},{5,6} };//��һ��Ϊ1 2 0 0 �ڶ���Ϊ3 4 0 0
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


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d", sizeof(arr));
//	return 0;
//}
////�������Ľ����40


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
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


////��������
//#include<stdio.h>
//#include<stdlib.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int main()
//{
//	int arr[10] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
////1�ų���Աд�Ĵ���
//int Add(int x, int y)
//{
//	return x + y;
//}
////2�ų���Աд�Ĵ���
//int test(int (*pf)(int, int))
//{
//	//���2�ų���Ա���������ڲ�����Add�����Ļ����ҿ������������н�Add�����ĵ�ַ���ݸ�2�ų���Աд�Ĵ���
//	//��ô2�ų���Աд�Ĵ��룬��Ҫ��Add�����ĵ�ַ���н��գ����ú���ָ��(ָ������ָ��)
//	//pfΪָ�����
//	pf(2, 4);  //�������ָ����ָ��ĺ�������ʱ�����õĺ����ͳ�Ϊ�ص�����
//}
//int main()
//{
//	//1�ų���Ա���е���
//	//�Լ�д�Ĵ��룬�Լ�ֱ�ӵ��ã����ֲ�����Ϊ�ص�����
//	int ret = Add(2, 3);
//	int res = test(Add);
//	printf("%d", res);
//	return 0;
//}


////ģ��ʵ��ð������
////���ÿ��������˼·
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
//void my_BubbleSort(int* arr, int sz, int width, int (*cmp)(const void* e1, const void* e2))
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (cmp((char*)arr + j * width, (char*)arr + (j + 1) * width) > 0)
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
//	my_BubbleSort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
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
//int main()
//{
//	int n = 0;
//	int count = 0;
//	(void)scanf("%d", &n);
//	for (int i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//			count++;
//	}
//	printf("%d", count);
//}


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = a << 1;
//	//<<���Ʋ�����
//	//��߶������ұ߲�0
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = -1;
//	int b = a << 1;
//	//�������ڴ��д洢���Ƕ����Ʋ���
//	//-1�����ڴ��д洢�����Ǵ洢32��1��32��1Ϊ-1�Ĳ��롣
//	//������ԭ������������ͬ
//	//������д��ԭ�룬���λΪ����λ�����������λΪ1�������ķ���λΪ1������Ϊ0
//	//���룺��ԭ��Ļ����ϣ�����λ����������λ��λȡ�����õ�����
//	//����+1�õ�����
//	printf("%d\n", b);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = -1;
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//	//���õ�����������
//}


//#include<stdio.h>
//int main()
//{
//	int a = 3;   //011
//	int b = 5;   //101
//	int c = a & b;    //001
//	printf("%d\n", c);
//	return 0;
//	//�����1
//}


//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a | b;
//	printf("%d\n", c);
//	return 0;
//}
////���Ϊ7


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	a = a + 2;
//	a += 2;
//	printf("%d\n", a);
//	return 0;
//}
////������������඼��������


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = !a;
//	printf("%d\n", b);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);   //003DF718
//	printf("%x\n", &a);   //3df718
//	return 0;
//}
////%x��ʾ��16���ƴ�ӡ�������16���ƴ�ӡ��ǰ��ͻ���00


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);      //��Ԫ�صĵ�ַ
//	printf("%p\n", &arr[0]); //��Ԫ�صĵ�ַ
//	printf("%p\n", &arr);    //����ĵ�ַ
//	return 0;
//}
////������ֵ��Ϊ00FBFCF0


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	printf("%p\n", &arr);   //����ĵ�ַ
//	printf("%p\n", &arr + 1); //����ĵ�ַ��1
//	return 0;
//}
////����ĵ�ַ��1����������������


//#include<stdio.h>
//void test(int arr[])
//{
//	printf("%d\n", sizeof(arr));   //���鴫�δ�����������Ԫ�صĵ�ַ�����Խ����4
//	//Ҫ��ָ�����
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//}
#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
int main()
{
	char arr1[] = "abcdef";
	//������һ�����飬�����д����abcdef
	const char* p = "abcdef";
	//���ַ���abcdef����Ԫ�صĵ�ַ����a�ĵ�ַ������p��
	arr1[2] = 'w';
	//�޸������е����ݣ��Ǳ������
	//*(p + 2) = 'w';        //p[2]
	//p��ָ�����һ�������ַ����������ַ����е�ֵ�ǲ����Ա��޸ĵ�
	return 0;
	//����������������ǻ�����ģ���������Ҫԭ�����ڣ�*(p+2)='w'
	//�������ǲ���ȷ��
	//�ַ�ָ�벻������������ַ��ĵ�ַ�������ܴ��һ���ַ�������ʼ��ַ
}


//��ά���鴫��������ָ�����
#include<stdio.h>
void Print1(int arr[3][5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
void Print2(int(*p)[5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			//printf("%d ", (*(p+i))[j]);
			printf("%d ", *(*(p + i) + j));
			//*(p+i)�൱���ҵ��˵�i����Ԫ�صĵ�ַ
			//Ҳ����д��p[i][j]
			//��ʵp���൱��arr
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { 1,2,3,4,5,3,4,5,6,7,4,5,6,7,8 };
	Print1(arr, 3, 5);
	Print2(arr, 3, 5);
	//arr������Ԫ�صĵ�ַ�����ڶ�ά������˵����Ԫ�صĵ�ַ���ǵ�һ�еĵ�ַ
	//�����б��Ǻ���Ҫ��
	return 0;
}


//һά����Ĵ���
#include<stdio.h>
void test(int arr[])
{

}
void test(int arr[10])
{

}
void test(int* arr)
{

}
void test2(int* arr[20])
{

}
void test(int** arr)
{

}
//�����ļ��ִ�����ʽ������ȷ�ģ����Ҫ�����������ʽ���ݣ���ô��ԭģԭ���Ĵ��ݾͿ����ˡ�
//һά�����������ָ�����ʽ����ô���ö���ָ�������ղ������Ϳ����ˡ�
int main()
{
	int arr[10] = { 0 };
	int* arr2[20] = { 0 };
	test(arr);
	test2(arr2);
	return 0;
}


#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	printf("%p\n", &Add);   //֤ʵ�˺���Ҳ���е�ַ��
	int (*p)(int x, int y) = &Add;
	int ret = (*p)(2, 3);   //�����ĵ���
	//Ҳ����д���� int ret=p(2,3);
	//�ĸ�*д��д���У�д��������
	//(*p)�����ҵ����������Ȼ�󴫲ν��е���
	//p�Ǻ���ָ��
	return 0;
}


#include<stdio.h>
int main()
{
	void (*pfun1)();   //����ָ�� �������޲Σ�����ֵ����Ϊvoid����
	void* pfun2();    //���������������޲Σ������ķ���ֵ����Ϊvoid*����
}


#include<stdio.h>
int main()
{
	//����1
	(*(void(*)())0)();

	/*
	���ȣ�void(*)()Ϊ����ָ�����ͣ����void(*)()�ڷ���������
	�γ���(void(*)()),���Ƕ�֪����һ�����ͷ��������У�������
	ǿ������ת���ģ�(void(*)())�ַ���0ǰ�棬��˼���ǰ�0ת����
	����ָ�����ͣ�0������������int����ϣ����0���ɺ���ָ�����͵�������
	һ�������ĵ�ַ��������ϣ��0�����ַ���ŵ���һ���޲Σ�����ֵ����
	Ϊvoid�ĺ�����Ȼ�󣬼�Ȼ�Ǹ���ַ����ô�Ҿͽ�����һ��
	�������ϣ�������һ���������á�
	����0λ�ô��ĺ����������õ�����������޲εģ�����ֵ����Ϊvoid������
	*/

	//����2
	void (*signal(int, void(*)(int)))(int);
	/*
	��δ�������������һ����������������signalΪ��������signal�����ĵ�һ������
	Ϊint���ͣ��ڶ�����������Ϊ����ָ�����ͣ����˺����������˲���
	ʣ�µľ��Ǻ����ķ���ֵ�����ˣ���������ķ���ֵ����Ҳ��һ������ָ������
	*/
	/*
	��������Ϊ���������������κ���ָ�����ͣ��������ǿ�����typedef����
	����������������
	typedef void(*pfun_t)(int);
	������������Ҳ���Ա��
	pfun_t signal(int,pfun_t);
	*/
}


//������
#include<stdio.h>
void menu()
{
	printf(" ***********************  \n");
	printf("     ��ӭ����������!      \n");
	printf("     1.Add    2.Sub       \n");
	printf("     3.Mul    4.Div       \n");
	printf("          0.exit          \n");
	printf(" ***********************  \n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void test()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
	do
	{
		menu();
		printf("��ѡ��:>\n");
		(void)scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("����������������:>\n");
			(void)scanf("%d %d", &x, &y);
			ret = Add(x, y);
			printf("%d\n", ret);
			break;
		case 2:
			printf("����������������:>\n");
			(void)scanf("%d %d", &x, &y);
			ret = Sub(x, y);
			printf("%d\n", ret);
			break;
		case 3:
			printf("����������������:>\n");
			(void)scanf("%d %d", &x, &y);
			ret = Mul(x, y);
			printf("%d\n", ret);
			break;
		case 4:
			printf("����������������:>\n");
			(void)scanf("%d %d", &x, &y);
			ret = Div(x, y);
			printf("%d\n", ret);
			break;
		case 0:
			printf("�˳�������!\n");
			break;
		default:
			printf("ѡ�����������ѡ��!\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int key = 5;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] == key)
		{
			printf("�ҵ��ˣ��±�Ϊ��%d", mid);
			break;
		}
	}
	return -1;
}


//��������Ϸ��ʵ��
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void menu()
{
	printf("***** ��ӭ������������Ϸ��*****\n");
	printf("*****        1. play      *****\n");
	printf("*****        0. exit      *****\n");
	printf("***** ��ӭ������������Ϸ��*****\n");
}
void game()
{
	int guess = 0;
	int ret = 0;
	ret = rand() % 100 + 1;
	while (1)
	{
		printf("���������²������!\n");
		(void)scanf("%d", &guess);
		if (guess > ret)
			printf("�´���!\n");
		else if (guess < ret)
			printf("��С��!\n");
		else if (guess == ret)
		{
			printf("�¶���!\n");
			break;
		}
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>\n");
		(void)scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���������Ϸ!\n");
			break;
		default:
			printf("�����������������!\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}


//�ػ�����
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[10] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);
	if (0 == strcmp(input, "������"))
	{
		system("shutdown -a");
	}
	else
	{
		printf("�����������������!\n");
		goto again;
	}
	return 0;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[] = { 0 };
	system("shutdown -s -t 60");
	//����Windowsϵͳ�µ�һ���ػ�����
	while (1)
	{
		printf("��ĵ��Խ���һ���Ӻ�ػ�����������������ͻ�ȡ���ػ���\n�����룺");
		scanf("%s", input);
		if (0 == strcmp(input, "������"))
		{
			system("shutdown -a");//ȡ���ػ�����
			break;
		}
	}
	return 0;
}


//strcpy����
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
}


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "hello world";
	memset(arr1, 'x', 5);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
void Print1(int arr[], int sz)
{
	int i = 0;
	for (i = 1; i <= sz; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
}
void Print2(int(*p)[10], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", (*p)[i]);
		//�����ҵ����飬��(*p)�ҵ����飬Ȼ��ȥ���ʵ�i��Ԫ��
		//����������ŵĻ�����ôp�ͻ��Ⱥ�[]���н��
		//��ʵ(*p)�͵�����������Ȼ��[i]�����൱����arr[i];
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Print1(arr, sz);
	Print2(&arr, sz);
	return 0;
}


#include<stdio.h>
void Print1(int arr[3][5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
void Print2(int(*p)[5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			//printf("%d ", (*(p+i))[j]);
			printf("%d ", *(*(p + i) + j));
			//*(p+i)�൱���ҵ��˵�i����Ԫ�صĵ�ַ
			//Ҳ����д��p[i][j]
			//��ʵp���൱��arr
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { 1,2,3,4,5,3,4,5,6,7,4,5,6,7,8 };
	Print1(arr, 3, 5);
	Print2(arr, 3, 5);
	//arr������Ԫ�صĵ�ַ�����ڶ�ά������˵����Ԫ�صĵ�ַ���ǵ�һ�еĵ�ַ
	//�����б��Ǻ���Ҫ��
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[5];          //��������
	int* parr1[10];      //ָ������
	int(*parr2)[10];     //����ָ��
	int(*parr3[10])[5];  //�������ָ������飬���Դ��10��������ָ��
	//������10�����������д洢���������������ָ��
	//5������Ԫ�ص�����ĵ�ַ ������ÿ��Ԫ�ص�������int
}


#include<stdio.h>
void Print(int* p, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	Print(p, sz);
	return 0;
}


//���ú���ָ����������Ż�
#include<stdio.h>
void menu()
{
	printf("**********************\n");
	printf("*** ��ӭ���������� ***\n");
	printf("***  1.Add   2.Sub ***\n");
	printf("***  3.Mul   4.Div ***\n");
	printf("**********************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void test()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
	int(*p[5])(int,int) = { 0,Add,Sub,Mul,Div };
	do
	{
		menu();
		printf("��ѡ��:>\n");
		(void)scanf("%d", &input);
		printf("����������������!\n");
		(void)scanf("%d %d", &x, &y);
		ret = p[input](x, y);
		printf("%d\n", ret);
	} while (input);
}
int main()
{
	test();
	return 0;
}


//ָ����ָ�������ָ��
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int (*p)(int, int);   //����ָ��
int (*parray[2])(int, int);  //����ָ������
int(*(*ptr)[2])(int, int) = &parray;//ָ����ָ�������ָ��
//ptr��ָ��


#include<stdio.h>
//1�ų���Աд�Ĵ���
int Add(int x, int y)
{
	return x + y;
}
//2�ų���Աд�Ĵ���
int test(int (*pf)(int, int))
{
	//���2�ų���Ա���������ڲ�����Add�����Ļ����ҿ������������н�Add�����ĵ�ַ���ݸ�2�ų���Աд�Ĵ���
	//��ô2�ų���Աд�Ĵ��룬��Ҫ��Add�����ĵ�ַ���н��գ����ú���ָ��(ָ������ָ��)
	//pfΪָ�����
	pf(2, 4);  //�������ָ����ָ��ĺ�������ʱ�����õĺ����ͳ�Ϊ�ص�����
}
int main()
{
	//1�ų���Ա���е���
	//�Լ�д�Ĵ��룬�Լ�ֱ�ӵ��ã����ֲ�����Ϊ�ص�����
	int ret = Add(2, 3);
	int res = test(Add);
	printf("%d", res);
	return 0;
}


//���ûص�����ʵ�ּ�����
#include<stdio.h>
void menu()
{
	printf("**********************\n");
	printf("*** ��ӭ���������� ***\n");
	printf("***  1.Add   2.Sub ***\n");
	printf("***  3.Mul   4.Div ***\n");
	printf("**********************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void Cal(int (*pf)(int, int))
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("����������������:>\n");
	(void)scanf("%d %d" ,&x, &y);
	ret = pf(x, y);
	printf("%d\n", ret);
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>\n");
		(void)scanf("%d", &input);
		switch (input)
		{
		case 1:
			Cal(Add);
			break;
		case 2:
			Cal(Sub);
			break;
		case 3:
			Cal(Mul);
			break;
		case 4:
			Cal(Div);
			break;
		case 0:
			printf("�˳�������!\n");
			break;
		default:
			printf("ѡ�����������ѡ��!\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1



//ģ���¼����
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char input[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������:>\n");
		(void)scanf("%s", input);
		if (0 == strcmp(input, "123456"))
		{
			printf("��¼�ɹ���");
			break;
		}
		else
		{
			printf("�����������������!\n");
		}
	}
	if (i == 3)
	{
		printf("���λ��������꣬�����ٵ�¼");
	}
	return 0;
}


//��������Ϸ
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
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;
	while (1)
	{
		printf("���������²������:>\n");
		(void)scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���!\n");
		}
		else if (guess < ret)
		{
			printf("��С��!\n");
		}
		else
		{
			printf("�¶���!\n");
			break;
		}
	}

}
void test()
{
	srand((unsigned)time(NULL));
	int input = 0;
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
			printf("ѡ�����������ѡ��!\n");
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
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("��ĵ��Խ���60s�ڹػ������������������ȡ���ػ�!\n");
	printf("������:>\n");
	(void)scanf("%s", input);
	if (0 == strcmp(input, "������"))
	{
		system("shutdown -a");
	}
	else
		goto again;
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


//ʵ�ּ�����
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
	int x = 0;
	int y = 0;
	int ret = 0;
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		(void)scanf("%d",&input);
		switch (input)
		{
		case 1:
			printf("����������������:>");
			(void)scanf("%d %d", &x, &y);
			ret = Add(x, y);
			printf("%d\n", ret);
			break;
		case 2:
			printf("����������������:>");
			(void)scanf("%d %d", &x, &y);
			ret = Sub(x, y);
			printf("%d\n", ret);
			break;
		case 3:
			printf("����������������:>");
			(void)scanf("%d %d", &x, &y);
			ret = Mul(x, y);
			printf("%d\n", ret);
			break;
		case 4:
			printf("����������������:>");
			(void)scanf("%d %d", &x, &y);
			ret = Div(x, y);
			printf("%d\n", ret);
			break;
		case 0:
			printf("�˳������!\n");
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


//ʵ�ּ�����
//���ú���ָ������
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
	int x = 0;
	int y = 0;
	int ret = 0;
	int input = 0;
	int (*p[5])(int, int) = { 0,Add,Sub,Mul,Div };
	do
	{
		menu();
		printf("��ѡ��:>\n");
		(void)scanf("%d", &input);
		printf("����������������:>\n");
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


//���ú���ָ��
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
void Cal(int(*pf)(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("����������������:>");
	(void)scanf("%d %d", &x, &y);
	ret = pf(x, y);
	printf("%d\n", ret);
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		(void)scanf("%d",&input);
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
			printf("�˳������!\n");
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


//�ص�����
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


void qsort(void* base,    //Ŀ���������ʼλ��
	size_t num,    //����Ԫ�صĸ���
	size_t width,  //һ��Ԫ�ؼ����ֽڴ�С 
	int(*compare)(const void* elem1, const void* elem2));
//compare---�����Ƚ�  д����������Ҫʵ�ֵ�ĳ�ֹ��ܣ�����ԱҪд������Ƚϲ��ܵĵ����Լ���Ҫ�Ľ��
//��ʵҲ������д��ͬ���͵ıȽϷ�����
//����elem1��elem2Ϊ����Ҫ�Ƚϵ�����Ԫ�صĵ�ַ


#include<stdio.h>
#include<stdlib.h>
void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int cmp_int(const void* elem1, const void* elem2)
//��������ĵķ���ֵΪ=0��>0,<0,���ֿ��ܵ�����һ��
{
	return *(int*)elem1 - *(int*)elem2;
	//������һ�ĵ���Ҫע�⣺
	//���ǣ�void*���͵ı����ǲ�����ֱ�ӽ��н����������
	//Ҳ������ֱ�ӽ��мӷ����߼�������ģ������Ҫ������߶�����н����õĲ���
	//�������ǿ������ת�����ſ���
}
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	Print(arr, sz);
	return 0;
}


//��������
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
} 


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Stu
{
	char name[20];
	int age;
};
int cmp_struct_by_name(const void* elem1, const void* elem2)
{
	return strcmp(((struct Stu*)elem1)->name, ((struct Stu*)elem2)->name);
}
int main()
{
	struct Stu arr[3] = { {"zhangsan",20},{"lisi",15},{"wangwu",25} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_struct_by_name);
}


//ð������
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
void my_bubblesort(int arr[], int sz, int width, int cmp_int(const void* e1, const void* e2))
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
	int width = sizeof(arr[0]);
	my_bubblesort(arr, sz, width, cmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
#define _CRT_SECURE_NO_WARNINGS 1


#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
//<stdio.h>Ϊ��׼�������������ͷ�ļ�
//дһ��C���ԵĴ�����ʵ������д��׺��Ϊ.c(ԭ�ļ�)��.h�ļ�(ͷ�ļ�)
int main()
{
	//printfΪ��������ĺ���--�⺯��(�����Լ�ʵ�ֵģ���Ҫ����һ��ͷ�ļ�)
	//˫�����ڲ���ӡ�����ַ���
	//�򵥵����һ�仰��������printf����
	printf("hello world\n");
	system("pause");
	return 0;
}


#include<stdio.h>
int main()
{
	int num = 0;
	(void)scanf("%d", &num);
	printf("%d", num);
	return 0;
}


#include<stdio.h>
int main()
{
	printf("%d\n", sizeof(int));  //4
	printf("%d\n", sizeof(char)); //1
	printf("%d\n", sizeof(short)); //2
	printf("%d\n", sizeof(long));  //4/8
	printf("%d\n", sizeof(long long));  //8
	printf("%d\n", sizeof(float));  //4
	printf("%d\n", sizeof(double));  //8
	return 0;
}
//���͵Ĵ�С��λ�����ֽ�
//������еĵ�λ 
//bit(λ) byte(�ֽ�) kbyte(kb) mb gb tb pb  
//ǰ������λ֮��Ļ��㵥λ��8������ĵ�λ֮�����1024


#include<stdio.h>
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c',0 };
	printf("%s\n", "abc");
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
	//���ִ�ӡ�Ľ������abc
	//���arr2���治��0�Ļ�����ô��ӡ����ͻ�����abc�ĺ��滹����������̵��ַ�
	//��Ϊ�������0�Ļ����ַ����ͻᲢû�н�����ֻ�м���0����\0�Ż�ֹͣ��ӡ
	//�����̱������ʵ������ʵ��0xcccccc
	//�ɴ˿��Կ���\0���ַ�����˵�Ƿǳ���Ҫ��
	//�ַ�����\0��Ҫ�Ľ�����־�ķ��ţ�
}


#include<stdio.h>
#include<string.h>
int main()
{
	printf("%d\n", 10);
	printf("%d\n", strlen("abc"));
	printf("%d\n", strlen("c:\test\47\test.c"));
	return 0;
	//���У�������printf����������Ϊ13����Ҫ�����������\47
	//�����еı��ʻ����ڿ������ת���ַ������
	//\dddҲΪת���ַ�������ddd��ʾ1-3���˽��Ƶ����֣�����������ͳһ�Ŀ���һ���ַ�������˵����Ϊ1.
	//\xddd  ddd��ʾ3��16��������
}


#include<stdio.h>
int main()
{
	printf("%c\n", '\'');
	printf("%s\n", "\"");
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	(void)scanf("%d %d", &a, &b);
	c = a + b;
	printf("%d", c);
	return 0;
}


#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	(void)scanf("%d %d", &a, &b);
	c = Add(a,b);
	printf("%d", c);
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	while (i < 10)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 5 % 2;
	printf("%d", a);
	return 0;
}
//�����ȡģ���㣬��һ����Ҫ�ر�ע�⣺
//ȡģ������������ߵĲ����������������������������������ô�ͻ����


#include<stdio.h>
int main()
{
	//int a = 5/2;
	//int a = 5/2.0;
	//printf("%d\n", a);
	//int a = 5%2;
	//printf("%d\n", a);
	int a = 15;
	int b = a << 1;
	//a = a<<1;
	printf("%d\n", a);
	printf("%d\n", b);
	//<< ��λ������-�ƶ����Ƕ�����λ
	//ԭ��-����-����
	//00000000000000000000000000001111-ԭ��-����-������ͬ
	//00000000000000000000000000011110
	//
	//-1
	//10000000000000000000000000000001-ԭ��
	//11111111111111111111111111111110-����
	//11111111111111111111111111111111-����
	system("pause");
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	int c = a ^ b;
	printf("%d", c);
	return 0;
	//��ͬΪ0������Ϊ1
	//���Ϊ6
}


#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	int c = a && b;
	printf("%d", c);
	return 0;
}
//���Ϊ1


#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int max = 0;
	max = (a > b) ? a : b;
	printf("%d", max);
	return 0;
}


#include<stdio.h>
#define ADD(X,Y) X+Y
int main()
{
	printf("%d\n", 10 * ADD(2, 3));
	return 0;
}
//����滻��ֱ���滻�ģ��������㣬ֱ���滻��


#include<stdio.h>
int main()
{
	char c = 'w';
	int a = 10;
	int* pa = &a;
	char* pc = &c;
	printf("%d\n", sizeof(pa));  //4
	printf("%d\n", sizeof(pc));  //4
	return 0;
}


#include<stdio.h>
//�Զ�������
struct Stu
{
	char name[20];   //һ�������������ַ�
	int age;
	float score;
};
int main()
{
	struct Stu s = { "����",20,60.0f };
	struct Stu* ps = &s;  //�ṹ��ָ��
	printf("%s %d %f", (*ps).name, (*ps).age, (*ps).score);
	return 0;
}


#include<stdio.h>
int main()
{
	//����Ҳ��һ���Զ�������
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));                //40
	printf("%d\n", sizeof(int[10]));          //40
	int a = 10;
	sizeof(int);  //���Ե�
	sizeof(a);    //���Ե�
	//��ô�������ˣ������������ʲô�أ�
	//��������ͣ���������ȥ��������ʣ�µĲ���
	//������������������� int arr[10],��ô��������;���int [10]
}


#include<stdio.h>
void test()
{
	printf("hehe");
}
int main()
{
	test(20);
	return 0;
}
//��Ļ�ϴ�ӡ�Ľ����hehe����Ȼtest����ʵ������û�в����ģ�����������������test����ʱ�򣬻��Ǵ��˲�����������û���κ�Ӱ��ġ�
//�㴫��������飬�ҽӲ��������ҵ����顣
//�������û�в����Ļ�����û�����test�����������м�һ��void���������������û�в����ġ�


#include<stdio.h>
int main()
{
	int a = 0x11223344;
	//0x11223344����a�����Ǹոպõ�
	//��Ϊ11��һ���ֽڣ�22��һ���ֽڣ�33��һ���ֽڣ�44��һ���ֽ�
	//ͨ�����ӿ���ת����16���ƣ��۲쵽a��ֵΪ0x11223344
	//ͨ���ڴ濴������&a�����Թ۲쵽��a��ʾΪ44332211
	return 0;
}


#include<stdio.h>
int main()
{
	int a = -10;
	//10000000000000000000000000001010  --ԭ��
	//11111111111111111111111111110101  --����
	//11111111111111111111111111110110  --����
	//fffffff6               ---����ת����16���Ƶ�����
	//�������ڴ���&a��ʾ�Ľ����f6ffffff
}


#include<stdio.h>
int main()
{
	//����˵������һ��1-1�Ľ���Ƕ���
	//�����ź����ǣ���������������
	//����ֻ�ðѼ���ת��Ϊ�ӷ�����ʽ
	//1 - 1;
	1 + (-1);
	//�����ԭ��������Ļ�
	// 1��ԭ��
	//00000000000000000000000000000001
	//-1��ԭ��
	//10000000000000000000000000000001
	//��������ӵĽ��Ϊ
	//10000000000000000000000000000010
	//�������ԭ��ֱ����ӵĻ��������Ϊ-2������Ȼ�ǲ���ȷ��
	//���Կ�ѧ�����Ƴ��˲���ĸ���
	//�ò��������ʱ�򣬿��������ȷ�Ľ��
}


//�ж��Ǵ���ֽ�����С���ֽ���
#include<stdio.h>
int main()
{
	int a = 1;
	char* pa = (char*)& a;
	if (*pa == 1)
		printf("С��");
	else
		printf("���");
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
	int a = 1;
	int ret = CheckSystem();
	if (ret == 1)
		printf("С��");
	else
		printf("���");
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
	int a = 1;
	int ret = CheckSystem();
	if (ret == 1)
		printf("С��");
	else
		printf("���");
	return 0;
}


#include<stdio.h>
struct Stu
{
	char name[20];
	int age;
};
union Un
{
	int i;
	char c;
};    //����������
int main()
{
	union Un u = { 0 };   //uΪ���������
	printf("%d\n", sizeof(u));   //���Ϊ4
	printf("%p\n", &u);
	printf("%p\n", &(u.i));
	printf("%p\n", &(u.c));
	//�����ĵ�ַ��һģһ���ģ�˵��i��cռ��ͬһ��ռ�
	//�����������ֽй����壬���������˼�����ҵĳ�ԱҪ����ͬһ��ռ�
	//��ô�Ҹ�i����Ŷ���c�ͻᷢ���仯
	//�Ҹ�c����Ŷ�����iҲ�ᷢ���仯
	//c��iռ���ĸ��ֽ��еĵ�һ���ֽڣ���Ҳ����˴�С���㷨����һ�ֽⷨ����
	return 0;
}


#include<stdio.h>
int main()
{
	char a = -1;
	signed char b = -1;
	//char��signed char��ʵ��һ���ã�����ǰ�����ý��һ����һ����
	//-1�Ĳ���Ϊ��11111111111111111111111111111111
	//���浽char��Ϊ11111111
	//����Ϊ��11111110
	//ԭ��Ϊ��10000001  --����˵ǰ�����Ľ��Ϊ-1 �� -1
	//�з��ŵ����ͣ���λ����Ҫ�����Ƿ���λ
	unsigned char c = -1;
	//c�����ڴ��� 11111111---����
	//����Ϊc���޷����������Ը�c�ĸ�λ��0
	//00000000000000000000000011111111  -- ����
	//����Ϊ���λ��0������˵Ϊ������������ԭ����������ͬ
	//����c�Ľ��Ϊ255  8��1�Ľ��Ϊ255
	printf("a=%d,b=%d,c=%d", a, b, c);
	//-1 -1 255
	return 0;
}


#include<stdio.h>
int main()
{
	char a = -128;
	//10000000000000000000000010000000   ԭ��-- -128
	//11111111111111111111111101111111   ����
	//11111111111111111111111110000000   ����
	//����ֻ�ܴ�8������λ�����Ϊ10000000
	//��Ҫ������������
	//������ʱ����Ҫ��ԭ���ķ���λ��ȫ������1
	//���Ϊ11111111111111111111111110000000  --����
	//����Ϊ���޷�����������ԭ�룬���룬����ȫ����ͬ
	//���Ծ͵õ��˽����4294967168
	printf("%u\n", a);
	return 0;
}


#include<stdio.h>
int main()
{
	unsigned int i;
	//�޷��ŵ�������û�и�����
	//�ж�����Ϊi>=0�������޷��ŵģ�i>=0�����������
	//���Խ��Ϊ��ѭ��
	for (i = 9; i >= 0; i--)
	{
		printf("%u\n", i);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	if (n % 2 == 1)
		printf("����");
	else
		printf("ż��");
	return 0;
}


#include<stdio.h>
int main()
{
	int count = 0;
	for (int i = 100; i <= 200; i++)
	{
		if (i % 2 == 1)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("%d", count);
	return 0;
}


#include<stdio.h>
int main()
{
	int day = 0;
	(void)scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday\n");
		break;
	case 6:
	case 7:
		printf("weekend\n");
		break;
	default:
		printf("�����������������!\n");
		break;
	}
	return 0;
}


//������
#include<stdio.h>
int main()
{
	int j = 0;
	int count = 0;
	for (int i = 100; i <= 200; i++)
	{
		for (j= 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (j == i)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("%d", count);
	return 0;
}


//������
#include<stdio.h>
#include<math.h>
int main()
{
	int j = 0;
	int count = 0;
	for (int i = 100; i <= 200; i++)
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
				break;
		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("%d", count);
	return 0;
}


//���Լ��
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 1;
	(void)scanf("%d %d", &a, &b);
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	printf("%d", b);
	return 0;
}


#include<stdio.h>
int main()
{
	char a = 'w';
	char* pc = &a;   //���ʱ��pc��Ϊ�ַ�ָ�룬pc������Ϊchar*
	char arr[10] = "abc";
	char* pa = arr;   //arr��Ϊ�����������������������Ԫ�صĵ�ַ��pa������Ϊchar*
	char* p = "abcdef";  //��ʱpֻ����4���ֽڣ�����abcdef����\0��6���ֽڣ���Ȼ�Ų���
	//��ô��ʱ��p�д�ľ���"abcdef"���׸���ĸa�ĵ�ַ����ַ��ָ����գ��պ�Ϊ4���ֽ�
	//�����������ʽ�Ľ���������ַ�a�ĵ�ַ��
}


#include<stdio.h>
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abcdef";
	if (arr1 == arr2)
		printf("arr1==arr2\n");
	else
		printf("arr1!=arr2\n");
	return 0;
	//��ӡ���Ϊarr1!=arr2
	//ԭ��:��Ϊarr1��arr2�Ὺ������ռ�Ĵ�С����Ȼ����ʾ��������ĸa�ĵ�ַ
	//��������ռ�ĵ�ַ�ǲ�һ���ģ���������ռ���a�ĵ�ַ��ȻҲ���ǲ�һ�����ˡ�
}


#include<stdio.h>
int main()
{
	char* p1 = "abcdef";
	char* p2 = "abcdef";
	if (p1 == p2)
		printf("p1==p2");
	else
		printf("p1!=p2");
	return 0;
	//��ӡ���Ϊp1==p2
	//��Ȼ���ַ���abcdef��ַ������p1��p2���У����������ַ�����һ����
	//����abcdef��������Ԫ��a�ĵ�ַ��ȻҲ��һ������
	//abcdefΪ�����ַ���������˵���ǲ��ܱ��ı�ģ���ʵҲֻ�����һ��abcdef
	//����p1�ĵ�ַ��p2�ĵ�ַ�Ǿ��Բ�һ���ġ�
}


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
void test(int arr[3][5])
{

}
//void test(int arr[][])
//{
//	//���ִ����ǲ���ȷ�ģ�����ʡ���У�������ʡ����
//}
void test(int arr[][5])
{

}
//�ܽ�:��ά���鴫�Σ�������ʽ�����ֻ��ʡ�Ե�һά��[],����ʡ�Եڶ�ά��
//��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ���֪��һ���ж��ٸ�Ԫ��
//�����Ż᷽�����㣬ͬ����һ���ĵ��������������ղ�������ô��ԭģԭ���Ľ��վͿ�����
void test(int(*arr)[5])
{

}
int main()
{
	int arr[3][5];
	test(arr);
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

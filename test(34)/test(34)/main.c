#define _CRT_SECURE_NO_WARNINGS 1



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
		default:
			printf("ѡ�����������ѡ!\n");
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
	int (*p[5])(int x, int y) = { 0,Add,Sub,Mul,Div };
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


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	(void)scanf("%d %d", &a,&b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d %d", a,b);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	(void)scanf("%d %d", &a, &b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d", a, b);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int temp = 0;
	(void)scanf("%d %d", &a, &b);
	temp = a;
	a = b;
	b = temp;
	printf("%d %d", a, b);
	return 0;
}


#include<stdio.h>
int main()
{
	int n = 0;
	int count = 0;
	(void)scanf("%d", &n);
	for (int i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
			count++;
	}
	printf("%d", count);
	return 0;
}


#include<stdio.h>
int main()
{
	int n = 0;
	int count = 0;
	(void)scanf("%d", &n);
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	printf("%d", count);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	int b = a << 1;
	//<<���Ʋ�����
	//��߶������ұ߲�0
	printf("%d\n", b);
	printf("%d\n", a);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = -1;
	int b = a << 1;
	//�������ڴ��д洢���Ƕ����Ʋ���
	//-1�����ڴ��д洢�����Ǵ洢32��1��32��1Ϊ-1�Ĳ��롣
	//������ԭ������������ͬ
	//������д��ԭ�룬���λΪ����λ�����������λΪ1�������ķ���λΪ1������Ϊ0
	//���룺��ԭ��Ļ����ϣ�����λ����������λ��λȡ�����õ�����
	//����+1�õ�����
	printf("%d\n", b);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = -1;
	int b = a >> 1;
	printf("%d\n", b);
	return 0;
	//���õ�����������
}


#include<stdio.h>
int main()
{
	int a = 16;
	int b = a >> 1;
	printf("%d", b);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 3;  //011
	int b = 5;  //101
	int c = a ^ b;   //110
	printf("%d\n", c);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	a = a + 2;
	a += 2;
	printf("%d\n", a);
	return 0;
}
//������������඼��������


#include<stdio.h>
int main()
{
	int a = 10;
	int b = !a;
	printf("%d\n", b);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 3;
	int b = -a;
	printf("%d\n", b);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	printf("%p\n", &a);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 10;
	printf("%p\n", &a);   //003DF718
	printf("%x\n", &a);   //3df718
	return 0;
}
//%x��ʾ��16���ƴ�ӡ�������16���ƴ�ӡ��ǰ��ͻ���00


#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);      //��Ԫ�صĵ�ַ
	printf("%p\n", &arr[0]); //��Ԫ�صĵ�ַ
	printf("%p\n", &arr);    //����ĵ�ַ
	return 0;
}
//������ֵ��Ϊ00FBFCF0


#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", arr + 1);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0] + 1);
	printf("%p\n", &arr);   //����ĵ�ַ
	printf("%p\n", &arr + 1); //����ĵ�ַ��1
	return 0;
}
//����ĵ�ַ��1����������������
//sizeof����������Ǻ���


#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr)); //40  �����������Ĵ�С
	return 0;
}


#include<stdio.h>
int main()
{
	short a = 10;
	int b = 3;
	printf("%d\n", sizeof(a = b + 5));  //2
	printf("%d\n", a);         //10
	return 0;
}
//ֵ����Ҫע����ǣ�
//sizeof��������������Ǻ�����
//����sizeof�����е�����ֻ��������Ǵ��Σ������еı��ʽ�ǲ��ᱻ����ġ�
//����a��ֵ�ǲ�û�з����ı�ġ�
//��int���͵Ķ�����Ҫ����short�����У��ǵ�Ȼ��short˵����ģ�����sizeof��������ֽ����Ľ����2


#include<stdio.h>
int main()
{
	int a = 10;
	int b = ++a;
	printf("%d\n", b);  //11
	printf("%d\n", a);  //11
	return 0;
}


#include <stdio.h>
void test1(int arr[])
{
	printf("%d\n", sizeof(arr));//(2)   //��ָ����յģ���СΪ4
}
void test2(char ch[])
{
	printf("%d\n", sizeof(ch));//(4)  //������һ���״�ĵ㣬������ָ����յ�
	//���Դ�С����4����char��û���κι�ϵ��
}
int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));//(1)
	printf("%d\n", sizeof(ch));//(3)
	test1(arr);
	test2(ch);
	return 0;
}


#include <stdio.h>
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;
	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
	return 0;
}


#include <stdio.h>
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ || ++b || d++;
	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
	return 0;
}
//��ӡ��ֵΪ1 3 3 4


#include<stdio.h>
int main()
{
	int a = 1;
	int b = 2;
	int c = (a > b, a = b + 10, a, b = a + 1);
	printf("%d\n", c);
	return 0;
	//�����13�����ű��ʽ
}


#include<stdio.h>
int main()
{
	int a = 1;
	int b = 2;
	int c = (a > b, a = b + 10, a, b = a + 1);
	printf("%d\n", c);
	return 0;
	//�����13�����ű��ʽ
}


#include<stdio.h>
struct Stu
{
	char name[20];
	int age;
	char sex[5];
};
int main()
{
	struct Stu s = { "����", 30, "��" };
	struct Stu* ps = &s;
	printf("%s\n", ps->name);
	printf("%d\n", ps->age);
	printf("%s\n", ps->sex);
	return 0;
}


#include<stdio.h>
int main()
{
	char a = 127;
	char b = 3;
	char c = a + b;
	//00000000000000000000000001111111  --a��32λ��ʽ�µĴ洢
	//00000000000000000000000001000011  --b��32λ��ʽ�µĴ洢
	//����a��b����char���͵ģ�char֮��һ���ֽڣ�����a��bΪ��
	//01111111  --a
	//00000011  --b
	//�ַ������ʱ�򶼴ﲻ�����εĴ�С������Ҫ�Ȱ��������������εĴ�С��Ȼ���ٽ�������
	//a��b��Ϊ�з��ŵ�char���ͣ��������λ�Ƿ���λ
	//������Ҫ��a���Ȳ���������ӣ�00000000000000000000000001111111
	//b��ͬ��b����ˣ�00000000000000000000000001000011
	//��a��b������ӣ�
	//00000000000000000000000001111111
	//00000000000000000000000001000011
	//00000000000000000000000010000010   ---a��b��ӵĽ��
	//a+b�Ľ��Ҫ����c���棬ֻ�ܴ�����8������λ�����Ϊ10000010
	//��c��������������Ҫ�����Ƿ���λ������Ľ��������ʾ:
	//11111111111111111111111110000010 ---���ڴ��зŵ��ǲ��룬��ӡ����ԭ��
	//����-1�Ƿ���
	//����Ϊ��11111111111111111111111110000001
	//ԭ��Ϊ��10000000000000000000000001111110  --���Ϊ-126
	printf("%d", c);   //---126
	return 0;
}
//�޷���������������ʱ��ֻ�ܲ�0


#include<stdio.h>
int main()
{
	char a = 0xb6;//11000110
	short b = 0xb600;
	int c = 0xb6000000;
	if (a == 0xb6)
		printf("a");
	if (b == 0xb600)
		printf("b");
	if (c == 0xb6000000)
		printf("c");
	system("pause");
	return 0;
}
//��ӡ���Ϊc
//������������������������


#include<stdio.h>
int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));//1
	printf("%u\n", sizeof(+c));//4
	printf("%u\n", sizeof(!c));//4
	//+c�ͣ�c����Ҫ�������㣬��������ͻᷢ��������������ô�ͱ��int������
	//sizeof(int) ,�������4�����ˡ�
	return 0;
}


#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'a' && ch <= 'z')
			putchar(ch - 32);
		else if (ch >= 'A' && ch <= 'Z')
			putchar(ch + 32);
		else if (ch >= '0' && ch <= '9')
			continue;
		else
			putchar(ch);
	}
	return 0;
}


#include<stdio.h>
#include<string.h>
void Reverse(int* arr,int sz)
{
	int left = 0;
	int right = sz-1;
	while (left <= right)
	{
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Reverse(arr, len);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


//����˷��ھ���
#include<stdio.h>
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}


/*
5λ�˶�Ա�μ���10m��ˮ����������������Ԥ��������
Aѡ��˵��B�ڶ����ҵ���;
Bѡ��˵���ҵڶ���E����;
Cѡ��˵���ҵ�һ��D�ڶ�;
Dѡ��˵��C����ҵ���;
Eѡ��˵���ҵ��ģ�A��һ;
����������ÿλѡ�ֶ�˵����һ�룬����ȷ������������
*/

/*
ͨ������⣬���ǿ���֪��A,B,C,D,E�������ǵ�һ���������������ʣ���ô���ǿ���
ͨ�������еĿ������г�����Ȼ����������ÿ�˶�˵����һ������
*/
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((b == 2) + (a == 3) == 1)
							&& ((b == 2) + (e == 4) == 1)
							&& ((c == 1) + (d == 2) == 1)
							&& ((c == 5) + (d == 3) == 1)
							&& ((e == 4) + (a == 1) == 1))
						{
							if (a * b * c * d * e == 120)
								printf("%d %d %d %d %d\n", a, b, c, d, e);
						}
					}
				}
			}
		}
	}
}



/*
�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ
�ĸ����ɷ��е�һ��������Ϊ4���ӷ��Ĺ��ʣ�
A˵:������
B˵:��C
C˵:��D
D˵:C�ں�˵
��֪������˵���滰��һ����˵���Ǽٻ�
�����������Щ��Ϣ��дһ��������ȷ������˭������
*/
#include<stdio.h>
int main()
{
	char killer = 0;
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
		{
			printf("killer is %c", killer);
		}
	}
	return 0;
}
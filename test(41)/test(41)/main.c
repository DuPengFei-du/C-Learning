#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		i++;
		if (i == 5)
			continue;
		printf("%d ", i);
	}
	return 0;
}
//��ӡ���Ϊ2��3��4��5��7��8��9��10��11
//continue���ã�continue������ֹ���ε�ѭ��������continue֮�����䲻��ִ�С�


#include<stdio.h>
int main()
{
	int ch = getchar();
	putchar(ch);
	return 0;
}
//����ʲô�ַ��ͻ������Ӧ���ַ�


//EOFΪend of file
#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;
}
//��ctrl+z��ͣ������


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	for (a = 1; a <= 9; a++)
	{
		for (b = 1; b <= a; b++)
		{
			printf("%d*%d=%2d ", a, b, a * b);
		}
		printf("\n");
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n");
	printf("%d", count);
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
	int a = 0;
	int b = 0;
	(void)scanf("%d %d", &a, &b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d", a, b);
	return 0;
}
//��������λ�������ͬΪ0������Ϊ1��
//����ܽ�����������������͵�����
//���������㷨�����������������
//��δ���Ŀɶ���Ҳ�Ƚϲһ��ʼ�ǿ�������


#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			break;
		printf("%d ", i);
	}
	return 0;
}
//��ӡ���Ϊ1��2��3��4



#include<stdio.h>
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++)
	{
		printf("hehe\n");
		arr[i] = 0;
	}
	return 0;
}
//����Ĵ�ӡ�����hehe����ѭ��


#include<stdio.h>
int main()
{
	int x, y;
	for (x = 0, y = 0; x < 2 && y < 5; ++x, ++y)
	{
		printf("hehe\n");
	}
	return 0;
}
//��ӡ���Ϊ2��hehe
//&&������ֻҪһ��Ϊ�٣���һ�߾Ͳ��ÿ��ˡ�


#include<stdio.h>
int main()
{
	int x = 0;
	int y = 0;
	for (x = 0, y = 0; x < 2, y < 5; ++x, ++y)
	{
		printf("hehe\n");
	}
	return 0;
}
//��ӡ���Ϊ5��hehe�������˶��ű��ʽ��x=2������������ˣ�ֻ��y<5,���Դ�ӡ5��hehe


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
	c = Add(a, b);
	printf("%d", c);
	return 0;
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
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
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
	{
		int num = 10;
	}
	//printf("%d", num);
	return 0;
	//��ʱ�������������num�������в�������printf��䡣
}


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
int main()
{
	printf("c:\test\test.c\n");
	return 0;
}
//��������������Ϊ
//c:      est     est.c
//��Ҫ��ӦΪ��������\tҲ������һ��ת���ַ���ʹ�ã������Ҫ�����printf���������һ���Ķ�������ô��\t��ǰ���ڼ���һ��\������


#include<stdio.h>
	int main()
{
	printf("c:\\test\\test.c\n");
	return 0;
}
//����Ľ��Ϊ
//c:\test\test.c


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
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d", arr[4]);
	return 0;
}


#include<stdio.h>
int main()
{
	int a1 = 5 / 2;
	float a2 = 5 / 2;
	float a3 = 5.0 / 2;
	printf("%d\n", a1);
	printf("%f\n", a2);
	printf("%f\n", a3);
	return 0;
}
//����ڳ��������������洢����ʲô������û�й�ϵ��
//��Ҫ�ǿ����������Ĳ�����������ʲô���͵ģ������һ���Ǹ����͵ģ��õ��Ľ���ͻ��Ǹ����͵Ľ��


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
	int c = a | b;
	printf("%d", c);
	return 0;
	//���Ϊ7
}


#include<stdio.h>
int main()
{
	int a = 10;
	int b = a++;
	printf("%d\n", a);  //11
	printf("%d\n", b);  //10
}


#include<stdio.h>
int main()
{
	int a = 10;
	int b = ++a;
	printf("%d\n", a);   //11
	printf("%d\n", b);   //11
	return 0;
}


#include<stdio.h>
int main()
{
	int a = (int)3.14;
	printf("%d", a);
	return 0;
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
	int a = 0;
	int b = 5;
	int c = a || b;
	printf("%d", c);
	return 0;
}
//���Ϊ1


#include<stdio.h>
int main()
{
	int a = (1, 2, 3, 4, 5);
	printf("%d\n", a);
	return 0;
}


#include<stdio.h>
#define NAME "HELLO WORLD"
int main()
{
	printf("%s\n", NAME);
	return 0;
}


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
	printf("%s %d %f", ps->name, ps->age, ps->score);
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
	int a = -10;
	//10000000000000000000000000001010  --ԭ��
	//11111111111111111111111111110101  --����
	//11111111111111111111111111110110  --����
	//fffffff6               ---����ת����16���Ƶ�����
	//�������ڴ���&a��ʾ�Ľ����f6ffffff
}


//����˼·��
//���ǿ���ͨ����1�����ڴ��У�Ȼ��ͨ�������Ĵ洢��ʽ���������жϵ�ǰ���������Ǵ�˻���С��
//1��16��ʽ�ĸ�ʽΪ00000001
//����洢��ʽ��01000000��ô����С��
//����洢��ʽ��00000001��ô���Ǵ��
//���ǿ���ͨ����ȡ��һ���ֽڵ����ݣ����жϵ����Ǵ�˻���С�ˣ���Ҫ��ȡһ�����εĵ�һ���ֽڣ���ô�洢��char*���͵ı����оͿ����ˡ�
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

//��װ��һ������
#include<stdio.h>
int check_system()
{
	int a = 1;
	char* pa = (char*)& a;
	if (*pa == 1)
		return 1;
	else
		return 0;
}
int main()
{
	int ret = check_system();
	if (ret == 1)
		printf("С��");
	else
		printf("���");
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
	char a[1000];
	int i;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d", strlen(a));
	//ʲôʱ������\0�����Ⱦ��Ƕ��٣��ο�char�ķ�Χ���ĸ�ԲȦ
	//���Խ��Ϊ255
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
int main()
{
	printf("hello world\n");
	return 0;
}


#include<stdio.h>
int main()
{
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
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
#include<stdlib.h>
int main()
//main���������������Ǻ��������
{
	printf("hehe\n");
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
	int num = 10;
	printf("%d", num);
	return 0;
	//�����������num��ֵ�ǿ���������ӡ������
	//��Ϊnum�Ǿֲ�����������printf���Ҳ����num���������У������ǿ���������ӡ�����ġ�
}


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


//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};


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
	int c = a & b;
	printf("%d", c);
	return 0;
	//���Ϊ1����λ��İ�λ�ǰ������ƣ���ͬ��Ϊ1����ͬ��Ϊ0
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
	int a = 10;
	int b = --a;
	printf("%d\n", a);   //9
	printf("%d\n", b);   //9
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	int b = a--;
	printf("%d\n", a);   //9
	printf("%d\n", b);   //10
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
	int a = 10;
	int b = 20;
	int max = 0;
	max = (a > b) ? a : b;
	printf("%d", max);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	int b = 2;
	int c = 4;
	int d = (a = b + c, b = c - 2, c = c + b);
	printf("%d\n", d);
	return 0;
	//���Ϊ6
}


#include<stdio.h>
void test()
{
	int n = 1;
	n++;
	printf("%d ", n);
}
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		test();
	}
	return 0;
	//��Ļ�ϻ����10��2
}


#include<stdio.h>
void test()
{
	static int n = 1;   //nΪ�ֲ�����
	n++;
	printf("%d ", n);
}
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		test();
	}
	return 0;
}
//��ӡ�Ľ����2-11����static���α����������˾Ͳ������ˡ�


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
	printf("name :%s\n", s.name);
	printf("age:%d\n", s.age);
	printf("score :%f\n", s.score);
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
	char a = 128;
	printf("%u\n", a);
	return 0;
}
//char�ķ�Χ��-128~+127,����char���޷���ʾ+128��


#include<stdio.h>
int main()
{
	int i = -20;
	unsigned  int  j = 10;
	printf("%d\n", i + j);
	//10000000000000000000000000010100
	//11111111111111111111111111101011
	//11111111111111111111111111101100
	//00000000000000000000000000001010
	//11111111111111111111111111110110
	//11111111111111111111111111110101
	//10000000000000000000000000001010
	//-10
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


#include<stdio.h>
int main()
{
	int n = 9;
	//9�����ڴ��У��洢��ʱ���Ĳ���
	//00000000000000000000000000001001
	float* pFloat = (float*)& n;
	//Ҫ��һ�����Σ�ת�����һ�������ͣ���ô���ھ���ת��һ��
	//0 00000000 00000000000000000001001
	//����Ϊ���������͵Ĵ洢��EȫΪ0���������������һ�����޽ӽ���0������ �����Դ�ӡ�Ľ��Ϊ0.000000
	printf("n��ֵΪ:%d\n", n);
	//�����ε���ʽ���룬�������ε���ʽȡ������ô�����Ȼ���������ˣ�����˵���Ϊ9;
	printf("*pFloat��ֵΪ:%f\n", *pFloat);
	//Ҫ��һ�����Σ�ת�����һ�������ͣ���ô���ھ���ת��һ��
	//0 00000000 00000000000000000001001
	//����Ϊ���������͵Ĵ洢��EȫΪ0���������������һ�����޽ӽ���0������ �����Դ�ӡ�Ľ��Ϊ0.000000
	*pFloat = 9.0;
	printf("n��ֵΪ:%d\n", n);
	//�Ը���������ʽ���ȥ���Ը���������ʽ������
	//�Ƚ�9д�ɶ����Ƶ���ʽ
	//1001.0
	//1.001*2^3;
	//0 100000010 00100000000000000000000  --����
	//������ԭ����������ͬ
	//���Խ��Ϊ010000001000100000000000000000000  --���Ϊ1091567616
	printf("*pFloat��ֵΪ:%f\n", *pFloat);
	//�Ը�������ʽ���ȥ�����Ը����ǽ���ó���������ǲ���仯��
	//���Ϊ9.000000
	return 0;
}
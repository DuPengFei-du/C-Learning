#define _CRT_SECURE_NO_WARNINGS 1


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


//�жϵ����Ǵ���ֽ�����С���ֽ���
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
	char *pa = (char*)& a;
	return *pa;
}
int main()
{
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


#include<stdio.h>
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	if (n % 2 == 0)
		printf("ż��\n");
	else
		printf("����\n");
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
	int age = 0;
	(void)scanf("%d", &age);
	if (age < 18)
		printf("δ����\n");
	return 0;
}


#include<stdio.h>
int main()
{
	int age = 0;
	(void)scanf("%d", &age);
	if (age < 18)
		printf("δ����\n");
	else
		printf("����\n");
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
		if (b == 2)
			printf("hehe\n");
		else
			printf("haha\n");
	return 0;
}
//��δ���ʲô�������ӡ �ڶ���else���ڱ������������͵ڶ���if����
//���Դ���ʲô�������ӡ��û�з��ŵ�������


#include<stdio.h>
int main()
{
	int age = 10;
	if (age == 5)
		printf("age==5\n");
	return 0;
}
//��Ļ��ʲô�������ӡ����Ϊage��=5��


#include<stdio.h>
int main()
{
	int age = 10;
	if (age = 5)
		printf("age==5\n");
	return 0;
}
//ƵĻ�ϻ��ӡage==5����Ϊ��5��ֵ����age������if��������������ֵ����ģ����Իش�ӡҪ�����Ϣ


#include<stdio.h>
int main()
{
	int day = 0;
	scanf("%d", &day);
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
		printf("ѡ�����\n");
		break;
	}
}


#include<stdio.h>
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;
	case 2:n++;
	case 3:
		switch (n)
		{//switch����Ƕ��ʹ��
		case 1:	n++;
		case 2:m++; n++;	break;
		}
	case 4:m++; break;
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n);
	system("pause");
	return 0;
}
//�����m=5��n=3��


#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		printf("%d ", i);
		i++;
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			break;
		printf("%d ", i);
		i++;
	}
	return 0;
}
//��ӡ���Ϊ1��2��3��4
//break���õ�����ѭ����ֹͣ���ڵ�����ѭ�������õ���ֹѭ��


#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			continue;
		printf("%d ", i);
		i++;
	}
	return 0;
}
//��ӡ�����1��2��3��4��4��4��4��4...��ѭ��


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


//������
#include<stdio.h>
int main()
{
	int j = 0;
	int count = 0;
	for(int i=100;i<=200;i++)
	{
		for (j = 2; j < i; j++)
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
	int a = 0;
	int b = 0;
	(void)scanf("%d %d", &a, &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d %d", a, b);
	return 0;
}
//�������ַ�����������������⣬���a��b�ر��Ļ�����a+b��ֵ����a����ͻ������
//�����͵ò�����Ҫ�Ľ����


//��ʮ�������е����ֵ
#include<stdio.h>
int main()
{
	int arr[10] = { 12,34,675,32,75,24,86,23,88,16 };
	int max = arr[0];
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 1; i < sz; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d", max);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
struct A
{
	int _a : 2;
	int _b : 5;
	int _c : 10;
	int _d : 30;
};
int main()
{
	printf("%d\n", sizeof(struct A));
	return 0;
}
//�����8
//�����int�������ȿ���4���ֽڵĴ�С��Ҳ����32������λ
//������֮�������¼������پͿ�����
//һ�����������Σ����Դ�СΪ8���ֽ�


struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};
//��Ҫ3���ֽڵĿռ�
int main()
{
	struct S s = { 0 };
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;
	return 0;
}
//��ʹ�õʹ��ı���λ


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
	printf("%d", num);
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
#include<string.h>
int main()
{
	printf("%d\n", 10);
	printf("%d\n", strlen("abc"));
	printf("%d\n", strlen("c:\test\47\test.c");
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
//��ϸ���ǿ��ʼǱ����������


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
	int b = ++a;
	printf("%d\n", a);   //11
	printf("%d\n", b);   //11
	return 0;
}


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
struct Stu
{
	//��Ա����
	char name[20];
	int age;
	float score;
}s1, s2;
//s1,s2Ϊ������ȫ�ֵĽṹ�����
int main()
{
	return 0;
}


#include<stdio.h>
struct Stu
{
	//��Ա����
	char name[20];
	int age;
	float score;
};
int main()
{
	struct Stu s;
	//s ��s1��s2һ�������Ǳ�����ֻ������s1��s2��ȫ�ֵ�
	//������s1��s2��������������һ�������ǲ��õ�
	return 0;
}


#include<stdio.h>
struct
{
	//��Ա����
	char name[20];
	int age;
	float score;
}s;
int main()
{
	return 0;
}


#include<stdio.h>
struct
{
	//��Ա����
	char name[20];
	int age;
	float score;
}s;
struct
{
	//��Ա����
	char name[20];
	int age;
	float score;
}*ps;
int main()
{
	ps = &s;
	return 0;
}


#include<stdio.h>
struct Node
{
	int value;
	struct Node next;
};
int main()
{
	return 0;
}
//����д��������𣿣�


#include<stdio.h>
struct Node
{
	int value;
	struct Node* next;
};
int main()
{
	return 0;
}


#include<stdio.h>
struct S
{
	char c1;
	int a;
	char c2;
};
struct S2
{
	int a;
	char c1;
	char c2;
};
int main()
{
	printf("%d\n", sizeof(struct S));
	printf("%d\n", sizeof(struct S2));
	return 0;
}
//���Ϊ12 �� 8 


#include<stdio.h>
struct S
{
	char c1;
	int a;
	char c2;
};
#define my_offsetof(s_type,member) (int)&(((s_type*)0)->member)
//��0��ַǿ������ת����һ���ṹ��ָ�룬Ȼ��ȥ���ʳ�Ա��Ȼ��ȡ��ַ��֮��
//�����þͿ�����
int main()
{
	printf("%d\n", my_offsetof(struct S, c1));
	printf("%d\n", my_offsetof(struct S, a));
	printf("%d\n", my_offsetof(struct S, c2));
	return 0;
}


#include<stdio.h>
struct S3
{
	double d;
	char c;
	int i;
};
//16
struct S4
{
	char c1;
	struct S3 s3;
	double d;
};
//32
//��8��ʼ�Žṹ��3���ӱ�����ʼ��
int main()
{
	printf("%d\n", sizeof(struct S4));
	return 0;
}


#include<stdio.h>
#pragma pack(2)  //����Ĭ�϶�����Ϊ2
struct S
{
	int a;   //4 
	char c1;   //1 
	char c2;   //1 
	//һ��6���ֽڴ�С
};
int main()
{
	printf("%d\n", sizeof(struct S));
	return 0;
}
//��СΪ6


#include<stdio.h>
struct A
{
	int _a : 2;
	int _b : 5;
	int _c : 10;
	int _d : 30;
};
int main()
{
	printf("%d\n", sizeof(struct A));
	return 0;
}
//�����8
//�����int�������ȿ���4���ֽڵĴ�С��Ҳ����32������λ
//������֮�������¼������پͿ�����
//һ�����������Σ����Դ�СΪ8���ֽ�


#include<stdio.h>
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	if (n % 2 == 1)
	{
		printf("����\n");
	}
	else
	{
		printf("��������\n");
	}
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
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int count = 0;
	int j = 0;
	for (int i = 100; i <= 200; i++)
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
	int count = 0;
	int j = 0;
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
	int age = 10;
	if (age == 5)
		printf("age==5\n");
	return 0;
}
//��Ļ��ʲô�������ӡ����Ϊage��=5��


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
		if (i == 5)
			break;
		printf("%d ", i);
		i++;
	}
	return 0;
}
//��ӡ���Ϊ1��2��3��4
//break���õ�����ѭ����ֹͣ���ڵ�����ѭ�������õ���ֹѭ��


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
	int i = 1;
	do
	{
		printf("%d ", i);
		i++;
	} while (i <= 10);
	return 0;
}
//��ӡ���Ϊ1-10


#include<stdio.h>
struct Stu
{
	//��Ա����
	char name[20];
	int age;
	float score;
};
int main()
{
	struct Stu s;
	//s ��s1��s2һ�������Ǳ�����ֻ������s1��s2��ȫ�ֵ�
	//������s1��s2��������������һ�������ǲ��õ�
	return 0;
}


#include<stdio.h>
struct
{
	//��Ա����
	char name[20];
	int age;
	float score;
}s;
int main()
{
	return 0;
}


#include<stdio.h>
struct
{
	//��Ա����
	char name[20];
	int age;
	float score;
}s;
struct
{
	//��Ա����
	char name[20];
	int age;
	float score;
}*ps;
int main()
{
	ps = &s;
	return 0;
}


#include<stdio.h>
struct Node
{
	int value;
	struct Node next;
};
int main()
{
	return 0;
}


#include<stdio.h>
struct Node
{
	int value;
	struct Node* next;
};
int main()
{
	return 0;
}


#include<stdio.h>
struct S
{
	char c1;
	int a;
	char c2;
};
struct S2
{
	int a;
	char c1;
	char c2;
};
int main()
{
	printf("%d\n", sizeof(struct S));
	printf("%d\n", sizeof(struct S2));
	return 0;
}
//���Ϊ12 �� 8 


#include<stdio.h>
#include<stddef.h>
struct S2
{
	int a;
	char c1;
	char c2;
};
int main()
{
	printf("%d\n", offsetof(struct S2, c1));
	printf("%d\n", offsetof(struct S2, a));
	printf("%d\n", offsetof(struct S2, c2));
	return 0;
}


#include<stdio.h>
struct S
{
	char c1;
	int a;
	char c2;
};
#define my_offsetof(s_type,member) (int)&(((s_type*)0)->member)
//��0��ַǿ������ת����һ���ṹ��ָ�룬Ȼ��ȥ���ʳ�Ա��Ȼ��ȡ��ַ��֮��
//�����þͿ�����
int main()
{
	printf("%d\n", my_offsetof(struct S, c1));
	printf("%d\n", my_offsetof(struct S, a));
	printf("%d\n", my_offsetof(struct S, c2));
	return 0;
}


#include<stdio.h>
struct A
{
	int _a : 2;
	int _b : 5;
	int _c : 10;
	int _d : 30;
};
int main()
{
	printf("%d\n", sizeof(struct A));
	return 0;
}
//�����8
//�����int�������ȿ���4���ֽڵĴ�С��Ҳ����32������λ
//������֮�������¼������پͿ�����
//һ�����������Σ����Դ�СΪ8���ֽ�


#include<stdio.h>
enum Sex
{
	male,
	female
	//Ϊsex���п��ܵ�ȡֵ
};
int main()
{
	enum Sex sex = male;
	printf("%d\n", male);
	printf("%d\n", female);
	return 0;
}


#include<stdio.h>
enum Sex
{
	male = 5,
	female
	//Ϊsex���п��ܵ�ȡֵ
};
int main()
{
	enum Sex sex = male;
	printf("%d\n", male);
	printf("%d\n", female);
	return 0;
}
//��ӡ�Ľ��Ϊ5��6��һ�����¼�1 
//���Ǹ�ֵ���Ǹ��ĳ�ʼֵ


#include<stdio.h>
union Un
{
	char c;
	int i;
	double d;
};
int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	return 0;
}
//��СΪ8


#include<stdio.h>
union Un
{
	char c;
	int i;
	double d;
};
int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	printf("%p\n", &u);
	printf("%p\n", &(u.i));
	printf("%p\n", &(u.c));
	printf("%p\n", &(u.d));
	return 0;
}
//��ַһ����˵����ͬͬһ��ռ�


int check_sys()
{
	int a = 1;
	//01 00 00 00
	//00 00 00 01
	/*if(*(char*)&a == 1)
		return 1;
	else
		return 0;*/
		//����1��ʾС��
		//����0��ʾ���
	return (*(char*)& a);
}
int main()
{
	//int a = 0x11223344;
	//[11][22][33][44]-����ֽ���洢
	//��     ��
	//[44][33][22][11]-С���ֽ���洢
	if (check_sys() == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}
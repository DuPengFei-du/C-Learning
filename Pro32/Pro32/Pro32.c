#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//
int main()
{
	int a = 5%2;

	return 0;
}

int main()
{
	int a = 15;
	int b = a<<1;
	printf("a = %d\n", a);//15
	printf("b = %d\n", b);//30
	system("pause");
//	//00000000000000000000000000001111
//	//ԭ��
//	//����
//	//����
//	//��������ԭ������������ͬ
//
	return 0;
}
//
int main()
{
	int a = -1;
	int b = a<<1;
	printf("a = %d\n", a);//15
	printf("b = %d\n", b);//30
	system("pause");
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111-����
//	//11111111111111111111111111111110-����
//	//11111111111111111111111111111101
//	//10000000000000000000000000000010  -2
//	//
//	//ԭ��
//	//����
//	//����
//	//��������ԭ������������ͬ
//
	return 0;
}

//
//���Ʋ�����
//��������
//�ұ߶�������߲�ԭ����λ
//�߼�����
//�ұ߶�������߲�0
//

int main()
{
	int a = -1;
	int b = a>>1;

//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
	//
	printf("%d\n", b);
	system("pause");
	return 0;
}

int main()
{
	int a = 2;
	int b = -2;
	//int c = a&b;//��������λ��
	//int c = a|b;//��������λ��
	int c = a^b;//��������λ���
//	//a^b^a
//	//1 2 3 4 5 1 2 3 4
//	//
//	//00000000000000000000000000000010
//	//
//	//10000000000000000000000000000010
//	//11111111111111111111111111111101
//	//11111111111111111111111111111110-����
//	//00000000000000000000000000000010-����
//	//11111111111111111111111111111100-����
//	//11111111111111111111111111111011
//	//10000000000000000000000000000100
	//
	//
	printf("c = %d\n", c);
	system("pause");
	return 0;
}


int main()
{
	int a = 15;
//	//00000000000000000000000000100011
//	//00000000000000000000000000100000
//	//
//	//1110
//	//0001
//	//0001-1
	a = a&1;
	a &= 1;
	a = a+10;
	a += 10;
	a = a >> 1;
	a >>= 1;
	return 0;
}


int main()
{
	int flag = 1;
	if(!flag)
	{
		printf("hehe\n");
	}
	return 0;
}

int main()
{
	int a = 10;
	int * p = &a;
	*p = 20;

	return 0;
}
int main()
{
	//int a = 10;
	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof a);
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof(int));

// 	int a[10] = {0};
// 	printf("%d\n", sizeof(a));//40-�ֽ�
// 	printf("%d\n", sizeof(a)/sizeof(a[0]));

	short s = 5;
	int a = 10;
	printf("%d\n", sizeof(s=a+2));//2
	printf("%d\n", a);//10
	printf("%d\n", s);//5

	system("pause");
	return 0;
}

int main()
{
	int a = 0;
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111-����
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001 -1
	printf("%d\n", ~a);//
	system("pause");
	return 0;
}

int main()
{
	int a = 15;
//	//00000000000000000000000000001111
//	//00000000000000000000000000010000
//	//00000000000000000000000000011111
//	//11111111111111111111111111101111
//	//00000000000000000000000000001111
//
//	//~(1<<4)
//
	return 0;
}

int main()
{
	int a = 10;
	//int b = a++;//����++����ʹ�ã���++
	int b = ++a;//ǰ��++����++����ʹ��
	printf("a = %d\n", a);
	printf("b = %d\n", b);

	system("pause");
	return 0;
}

int main()
{
	int a = (int)3.14;

	return 0;
}

int main()
{
	int a = 1;
	int b = 2;
	a&b;//0
	a&&b;//1

	a|b;//3
	a||b;//1

	return 0;
}

int main()
{
	int i = 0,a=1,b=2,c =3,d=4;
	//i = a++ && ++b && d++;
	i = a++||++b||d++;
	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
	system("pause");
	return 0;
}

int* q[4];

//2 2 3 4
//2 3 3 5-5

//
//1 2 3 4-3
//1 3 3 5-5
//1 3 3 4-2
//

int main()
{
	int a = 0;
	int b = 0;
	int max = 0;
	b = a>5 ? 3 : -3;

	max = a>b ? a : b;

	return 0;
}


int Add(int x, int y)
{
	return x+y;
}

int main()
{
	int arr[10] = {0};
	arr[5];//�±����ò�����  *(arr+5)
	Add(3,4);//�������ò�����
	return 0;
}

//��������-�ṹ��-�Զ��������
struct Stu
{
	char name[20];
	short age;
	char tele[12];
};

//struct Stu
//int char short //��������

int main()
{
	int a = 0;
	struct Stu s = {"zhangsan", 20, "15249287076"};
	//printf("%s %d %s\n", s.name, s.age, s.tele);
	struct Stu* ps = &s;
	printf("%s %d %s\n", (*ps).name, (*ps).age, (*ps).tele);
	printf("%s %d %s\n", ps->name, ps->age, ps->tele);
	system("pause");
	return 0;
}
//
int main()
{
	int a = 10;
	int b = 20;
	//int c = a+b*10;
	int c = a+b+10;


	return 0;
}
int main()
{
	char a = 3;
	char b = 127;
//	//00000000000000000000000001111111
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111-b
//	//00000000000000000000000000000011-a
//	//00000000000000000000000010000010
//	//11111111111111111111111110000010-c-����
//	//11111111111111111111111110000001
//	//10000000000000000000000001111110
//	//-126
	char c = a+b;
	short s1 = 10;
	char s2 = 20;
	short s3 = s1+s2;

	printf("%d\n", c);

	system("pause");
	return 0;
}

//ʵ��1
int main()
{
	char a = 0xb6;
	short b = 0xb600;
	int c = 0xb6000000;
	if(a==0xb6)
		printf("a");
	if(b==0xb600)
		printf("b");
	if(c==0xb6000000)
		printf("c");

	system("pause");
	return 0;
} 

int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));
	printf("%u\n", sizeof(+c));
	printf("%u\n", sizeof(!c));

	return 0;
}
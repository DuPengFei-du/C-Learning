#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
int main()
{
	//����Ļ�ϴ�ӡ�����ź�˫����
	printf("%c\n", '\'');
	printf("%s\n", "\"");
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 0;
	int c = 0;
	int b = 0;
	(void)scanf("%d %d", &a, &b);
	c = a + b;
	printf("%d ", c);
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
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for(i = 0; i < sz; i++)
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
//ȫ�ֱ�����������������������������


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
//���Ϊ23


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
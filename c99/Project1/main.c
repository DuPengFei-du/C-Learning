#define _CRT_SECURE_NO_WARNINGS 1



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


int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	(void)scanf("%d %d", &a, &b);
	c = a+b ;
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
//��Ҫ��ӦΪ��������\tҲ������һ��ת���ַ���ʹ�ã�
//�����Ҫ�����printf���������һ���Ķ�������ô��\t��ǰ���ڼ���һ��\������


#include<stdio.h>
#include<string.h>
int main()
{
	printf("%d\n", 10);
	printf("%d\n", strlen("abc"));
	//printf("%d\n", strlen("c:\test\47\test.c");
	return 0;
	//���У�������printf����������Ϊ13����Ҫ�����������\47
	//�����еı��ʻ����ڿ������ת���ַ������
	//\dddҲΪת���ַ�������ddd��ʾ1-3���˽��Ƶ����֣�����������ͳһ�Ŀ���һ���ַ�������˵����Ϊ1.
	//\xddd  ddd��ʾ3��16��������
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
	int a = 10;
	int b = a++;
	printf("%d\n", a);  //11
	printf("%d\n", b);  //10
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


//����n�Ľ׳�
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 1;
	int sum = 1;
	(void)scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum *= i;
	}
	printf("%d", sum);
	return 0;
}


#include<stdio.h>
int main()
{
	int n = 0;
	int i = 1;
	int sum = 0;
	int ret = 1;
	(void)scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret *= i;
		sum += ret;
	}
	printf("%d", sum);
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int key = 5;
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > key)
			right = mid - 1;
		else if (arr[mid] < key)
			left = mid + 1;
		else
		{
			printf("�ҵ��ˣ��±�Ϊ:%d", mid);
			break;
		}
		return 0;
	}
}


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


//���Լ��
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
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
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;
		printf("%d ", i);
	}
	return 0;
}
//��ӡ���Ϊ1��2��3��4��6��7��8��9��10


#include<stdio.h>
int MAX(int x, int y)
{
	return x > y ? x : y;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	(void)scanf("%d %d", &a, &b);
	c = MAX(a, b);
	printf("%d", c);
	return 0;
}
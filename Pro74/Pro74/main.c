#include<stdio.h>
#include<assert.h>
void* my_memmove(void* destination, const void* source, int count)
{
	int i = 0;
	assert(destination != NULL);
	assert(source != NULL);
	if (destination < source)
	{
		//��ǰ���󿽱�
		char* dest = (char*)destination;
		char* sour = (char*)source;
		for (i = 0; i < count; i++)
		{
			dest[i] = sour[i];
		}
	}
	else
	{
		while (count--)
		{
			*((char*)destination + count) = *((char*)source + count);
		}
	}
	return destination;
}
int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr1 + 2, arr1, 16);
	return 0;
}


//��������Ϸ��ʵ��
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void menu()
{
	printf("******************************\n");
	printf("***  ��ӭ������������Ϸ��  ***\n");
	printf("***         1.play         ***\n");
	printf("***         0.exit         ***\n");
	printf("******************************\n");
}
void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;
	while (1)
	{
		printf("������²����֣�\n");
		(void)scanf("%d", &guess);
		if (guess > ret)
			printf("�´��ˣ�\n");
		else if (guess < ret)
			printf("��С�ˣ�\n");
		else
		{
			printf("�¶��ˣ�\n");
			break;
		}
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
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
			printf("�˳���������Ϸ��\n");
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


//goto��� 
//�ػ�����
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("��ĵ��Խ���60s��ػ���������룺��������ȡ���ػ�!\n");
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
again:
	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
	(void)scanf("%s", input);
	if (0 == strcmp(input, "������"))
	{
		system("shutdown -a");
	}
	else
	{
		printf("�����������������!\n");
		goto again;
	}
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


struct Stu
{
	char name[20];
	int age;
	float score;
};
int main()
{
	return 0;
}


struct Stu
{
	char name[20];
	int age;
	float score;
}s1,s2;
int main()
{
	return 0;
}



struct 
{
	char name[20];
	int age;
	float score;
}s;
int main()
{
	return 0;
}
//�����ṹ��ֻ����һ��


struct
{
	char name[20];
	int age;
	float score;
}s;
struct
{
	char name[20];
	int age;
	float score;
}*ps;
int main()
{
	return 0;
}


struct Point
{
	int x;
	int y;
}p1;

struct Point p2;

int main()
{
	struct Point p;
	return 0;
}


//��ʼ��
struct Point
{
	int x;
	int y;
}p1 = { 1,2 };

struct Point p2 = { 2,3 };

int main()
{
	struct Point p = { 3,4 };
	return 0;
}


struct S
{
	char c;
	int a;
	char c3;
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


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "*************";
	char arr2[] = "hello world";
	strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}


#include<stdio.h>
#include<math.h>
int main()
{
	int n = 0;
	int k = 0;
	double ret = 0;
	(void)scanf("%d %d", &n, &k);
	ret = pow(n, k);
	printf("%lf", ret);
	return 0;
}


#include<stdio.h>
int Max(int x, int y)
{
	return x > y ? x : y;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	(void)scanf("%d %d", &a, &b);
	c = Max(a,b);
	printf("%d", c);
	return 0;
}


#include<stdio.h>
int is_prime(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int n = 0;
	int ret = 0;
	(void)scanf("%d", &n);
	ret = is_prime(n);
	if (ret == 1)
		printf("����\n");
	else
		printf("��������\n");
	return 0;
}


#include<stdio.h>
int is_leapyear(int n)
{
	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
		return 1;
	else
		return 0;
}
int main()
{
	int n = 0;
	int ret = 0;
	(void)scanf("%d", &n);
	ret = is_leapyear(n);
	if (ret == 1)
		printf("����");
	else
		printf("��������");
	return 0;
}


//��ӡһ���޷������ֵ�ÿһλ
#include<stdio.h>
void Print(int n)
{
	if (n > 9)
		Print(n / 10);
	printf("%d " ,n % 10);
}
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	Print(n);
	return 0;
}


//�ַ������ȣ�������strlen����
#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)
{
	assert(str);
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen(str + 1);
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)
{
	int count = 0;
	assert(str);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
#include<assert.h>
int my_strlen(char* str)
{
	char* ret = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - ret;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int a = 0;
	int b = 0;
	(void)scanf("%d %d", &a, &b);
	Swap(&a, &b);
	printf("%d %d", a, b);
	return 0;
}


#include<stdio.h>
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
	return 0;
}
//��ӡ�Ľ��Ϊ4 3 2 1
//printf�����ķ���ֵ���ַ��ĸ���


//�жϴ�С�˵�����
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
	if (ret== 1)
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
	if (ret== 1)
		printf("С��");
	else
		printf("���");
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
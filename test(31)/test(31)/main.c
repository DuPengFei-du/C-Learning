#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
int main()
{
	int count = 0;
	for(int i=0;i<=100;i++)
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
	int n = 0;
	(void)scanf("%d", &n);
	if (n % 2 == 1)
		printf("����\n");
	else
		printf("��������\n");
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


#include<stdio.h>
int main()
{
	int i = 1;
	int n = 0;
	int sum = 1;
	(void)scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		sum *= i;
	}
	printf("%d", sum);
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 1;
	int n = 0;
	int ret = 1;
	int sum = 0;
	(void)scanf("%d", &n);
	for (int i = 1; i <= n; i++)
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
		if (arr[mid] < key)
			left = mid + 1;
		else if (arr[mid] > key)
			right = mid - 1;
		else
		{
			printf("�ҵ��ˣ��±�Ϊ:%d", mid);
			break;
		}
	}
	return -1;
}


#include<stdio.h>
int main()
{
	char arr[] = "hello world";
	char arr1[12] = { 0 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		arr1[left] = arr[left];
		arr1[right] = arr[right];
		left++;
		right--;
	}
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
	char password[20] = { 0 };
	int i = 0;
	for (int i = 0; i < 3; i++)
	{
		printf("����������:>\n");
		(void)scanf("%s", password);
		if (0 == strcmp(password, "123456"))
		{
			printf("��¼�ɹ���\n");
			break;
		}
		else
			printf("������������µ�¼!\n");
	}
	if (i == 3)
		printf("�޷���¼!\n");
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
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
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
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
	if (age = 5)
		printf("age==5\n");
	return 0;
}
//ƵĻ�ϻ��ӡage==5����Ϊ��5��ֵ����age������if��������������ֵ����ģ����Իش�ӡҪ�����Ϣ


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


#include<stdio.h>
int main()
{
	for (int a = 1; a <= 9; a++)
	{
		for (int b = 0; b <= a; b++)
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
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);
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
int main()
{
	char arr1[] = "hello world";
	char arr2[20] = { 0 };
	strcpy(arr2, arr1);
	printf("%s", arr2);
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
	c = Max(a, b);
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
	(void)scanf("%d", &n);
	int ret = is_prime(n);
	if (ret == 1)
		printf("����\n");
	else
		printf("��������\n");
	return 0;
}


#include<stdio.h>
void Print(int n)
{
	if (n > 9)
		Print(n / 10);
	printf("%d ", n % 10);
}
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	Print(n);
	return 0;
}


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
	char arr[] = "hello world";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[100] = { 0 };
	char arr2[] = "hello world";
	strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}
//�������������ǰ�����\0��.


#include<stdio.h>
int main()
{
	char arr1[] = "hello world";
	memset(arr1, 'x', 5);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
void Swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
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
int is_leapyear(int i)
{
	if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		return 1;
	else
		return 0;
}
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	if (is_leapyear(n) == 1)
	{
		printf("������\n");
	}
	else
	{
		printf("��������\n");
	}
	return 0;
}


#include<stdio.h>
void new_line()
{
	printf("hehe\n");
}
void three_line()
{
	for (int i = 0; i < 3; i++)
	{
		new_line();
	}
}
int main()
{
	three_line();
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


int fac(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * fac(n - 1);
}
#include<stdio.h>
int main()
{
	int n = 0;
	int c = 0;
	(void)scanf("%d", &n);
	c = fac(n);
	printf("%d\n", c);
	return 0;
}
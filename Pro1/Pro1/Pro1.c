#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	//printf-�������-�⺯��
//	printf("hehe\n");
//	return 0;
//}
//int main(void)
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d", num);
//	return 0;
//}

//�������͵Ĵ�С
//int main(void)
//{
//	printf("%d", sizeof(char));
//	printf("%d", sizeof(short));
//	printf("%d", sizeof(int));
//	printf("%d", sizeof(long));
//	printf("%d", sizeof(long long));
//	printf("%d", sizeof(float));
//	printf("%d", sizeof(double));
//	return 0;
//}

//int main(void)
//{
//	short age = 10;
//	age = 20;
//	printf("%d", age);
//}
//int val = 20; 
//int main(void)
//{
//	int val = 10;
//	printf("%d", val);//�ֲ���������
//	return 0;
//}
//int main(void)
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d %d", &num1, &num2);
//	sum = num1 + num2;
//	printf("%d", sum);
//	return 0;
//}

//int main(void)
//{
//	int num = 10;
//	printf("num=%d", num);
//	return 0;
//}
//int num = 10;
//int main(void)
//{
//	{
//		printf("%d", num);
//	}
//	printf("%d", num);
//	return 0;
//}

//int main(void)
//{
//	int num = 10;
//	num = 20;
//	printf("%d", num);
//	return 0;
//}

//int main(void)
//{
//	printf("\a");
//	return 0;
//}

//int main(void)
//{
//	printf("�������\n");
//	int line = 0;
//	while (line < 20000)
//	{
//		line++;
//		printf("��Ҫ�����ô���\n");
//	}
//	if (line > 20000)
//		printf("nb\n");
//	return 0;
//}

//int Add(x, y)
//	{
//		int sum = 0;
//		sum = x + y;
//		return sum;
//	}
//int main()
//{
//	int x=0;
//	int y=0;
//	int sum = 0;
//	scanf("%d %d", &x, &y);
//	sum = Add(x, y);
//	printf("%d", sum);
//	return 0;
//}

//int main(void)
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 1; i <= 10;i++)
//	{
//	printf("%d ", i);
//    }
//	return 0;
//}

//int main(void)
//{
//	int a = 15;
//	int b = a << 1;
//	//��λ�������ƶ����ǲ��������λ 
//	//00000000000000000000000000001111-ԭ��
//	//�����ڴ��е��ǲ��룬�������
//	printf("%d", b);
//	return 0;
//}
//int main(void)
//{
//	int a = 10;
//	printf("%d", !a);
//	return 0;
//}
//int main(void)
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//	printf("%d", b);
//	return 0;
//}
//int main(void)
//{
//	int a = (int)3.14;
//	printf("%d", a);
//	return 0;
//}
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max=a > b ? a : b;
//	printf("%d", max);
//	return 0;
//}
//int main(void)
//{
//	int arr[10] = { 0 };
//	arr[4] = 5;
//	return 0;
//}
//int main()
//{
//	register int a = 10;//a����Ϊ�Ĵ�������
//	//��һ����������ã�ǰ��˳�������˵����
//	return 0;
//}

//
//void test()
//{
//	int n = 1;
//	n++;
//	printf("%d ", n);
//}
//int main(void)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();//2222222222 
//	}
//	return 0;
//}
//#include<stdio.h>
//int Add(x, y)
//	{
//		int sum = 0;
//		sum = x + y;
//		return sum;
//	}
//int main()
//{
//	int x=0;
//	int y=0;
//	int sum = 0;
//	scanf("%d %d", &x, &y);
//	sum = Add(x, y);
//	printf("%d", sum);
//	return 0;
//}
//sizeof(array) / sizeof(arr[0]);
//#define MAX 100
//int main(void)
//{
//	int a = MAX;
//	printf("%d", MAX);
//	return 0;
//}
//#define ADD(X,Y) X+Y
//int main(void)
//{
//	printf("%d\n", ADD(2, 3));
//	return 0;
//}

//int main(void)
//{
//	int a = 10;
//	printf("%p", &a);
//	return 0;
//}
//int main(void)
//{
//	int num = 10;
//	int *p = &num;
//	*p = 20;
//	printf("%d", num);
//	return 0;
//}
//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//
//};
//int main()
//{
//	struct Stu s = { "����",20,60.0f };
//	struct Stu* ps = &s;
	//printf("%s %d %f\n", ps->name, ps->age, ps->score);
	/*printf("%s %d %f\n", (*ps).name, (*ps).age, (*ps).score);*///��ַ��������һ��;
	/*printf("name:%s\n", s.name);
	printf("age:%d\n", s.age);
	printf("score:%f", s.score);*/
	//	return 0;
	//}
	//int main(void)
	//{
	//	int a = 0;
	//	int b = 2;
	//	if (a == 1)
	//		if (b == 2)
	//			printf("hehe\n");
	//		else
	//			printf("haha\n");
	//	return 0;
	//
	//int main()
	//{
	//	int coding = 0;
	//	printf("���ȥ�ô�����\n");
	//	scanf("%d", &coding);
	//	if (coding == 1)
	//	{
	//		printf("��֣���ͻ��кõ�offer\n");
	//	}
	//	else
	//	{
	//		printf("�������ؼ�������\n");
	//	}
	//	return 0;
	//}

	//�ж�һ�����Ƿ�Ϊ����
	//int main(void)
	//{
	//	int a;
	//	scanf("%d", &a);
	//	if (a % 2 == 1)
	//		printf("a Ϊ����\n");
	//	else
	//	{
	//		printf("a Ϊż��\n");
	//	}
	//	return 0;
	//}
	//int main(void)
	//{
	//	int a = 1;
	//	for(a=1;a<=100;a++)
	//	{
	//		if (a % 2 == 1)
	//		{
	//			printf("%d ", a);
	//		}
	//	}
	//	return 0;
	//}
	//int main(void)
	//{
	//	int i = 1;
	//	while (i<=10)
	//	{
	//		printf("%d ", i);
	//		i++;
	//	}
	//	return 0;
	//}

	//#include<stdio.h> 
	//	int main()
	//	{
	//		int i, j;
	//		for (i = 100; i <= 200; i++)
	//		{
	//			for (j = 2; j <= i - 1; j++)
	//			{
	//				if (i % j == 0)
	//					break;//����������������ô�ѭ���������������
	//			}
	//			if (j == i)//����������û��������
	//				printf("%d ", i);
	//		}
	//		printf("\n");
	//		system("pause");
	//		return 0;
	////	}
	//
	//int main(void)
	//{
	//	int a, b;//a��b�ֱ��ʾ������������
	//	for (a = 1; a <= 9; a++)
	//	{
	//		for (b = 1; b <= a; b++)
	//			printf("%d*%d=%2d ", a, b, a * b);
	//		printf("\n");
	//	}
	//	printf("\n");
	//	return 0;
	//}
	//int main(void)
	//{
	//	int a = 1000;
	//	for (a = 1000; a <= 2000; a++)
	//	{
	//		if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
	//			printf("%d ",a);
	//	}
	//	return 0;
	//}
	//������������ֵ
	//int main(void)
	//{
	//	int a, b;
	//	scanf("%d %d", &a, &b);
	//	printf("%d %d", b, a);
	//	return 0;
	//}
	//int main(void)
	//{
	//	int a, b;
	//	scanf("%d %d", &a, &b);
	//	int temp = a;
	//	a = b;
	//	b = temp;
	//	printf("%d %d", a, b);
	//	return 0;
	//}
	//int main(void)
	//{
	//	int a, b;
	//	scanf("%d %d", &a, &b);
	//	a = a + b;
	//	b = a - b;
	//	a = a - b;
	//	printf("%d %d", a, b);
	//	return 0;//�������������
	//}
	//int main(void)
	//{
	//	int a,b;
	//	scanf("%d %d", &a, &b);
	//	a = a ^ b;
	//	b = a ^ b;
	//	a = a ^ b;
	//	printf("%d %d",a, b);
	//	return 0;
	//}
	//int main(void)
	//{
	//	int MAX;
	//	int i = 0;
	//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//	MAX = arr[0];
	//	for(i=0;i<10;i++)
	//		if (arr[i] > arr[0])
	//		{
	//			MAX = arr[i];
	//		}
	//	printf("%d", MAX);
	//	return 0;
	//}
	//int main(void)
	//{
	//	int a, b, c;
	//	scanf("%d %d %d", &a, &b, &c);
	//	if (a > b && b > c)
	//		printf("%d %d %d", a, b, c);
	//	if (a > c && c > b)
	//		printf("%d %d %d", a, c, b);
	//	if (b > a && a > c)
	//		printf("%d %d %d", b, a, c);
	//	if (b > c && c > a)
	//		printf("%d %d %d", b, c, a);
	//	if (c > a && a > b)
	//		printf("%d %d %d", c, a, b);
	//	if (c > b && b > a)
	//		printf("%d %d %d", c, b, a);
	//	return 0;
	//}
	//void Swap(int *px,int *py)
	//{
	//	int tmp = *px;
	//	*px=*py;
	//	*py = tmp;
	//}
	//int main(void)
	//{
	//	int  a = 1;
	//	int  b = 2;
	//	int  c = 3;
	//	if (a < c)
	//	{
	//		Swap(&a, &c);
	//	}
	//	if (b < c)
	//	{
	//		Swap(&b, &c);
	//	}
	//		if (a < b)
	//		{
	//			Swap(&a, &b);
	//		}
	//		printf("%d %d %d", a, b, c);
	//return 0;
	//}


	//�������������Լ��
	//int main(void)
	//{
	//	int a;
	//	int b;
	//	int c;
	//	scanf("%d %d", &a, &b);
	//	while (c = a % b)
	//	{
	//		a = b;
	//		b = c;
	//	}
	//	printf("%d", b);
	//	return 0;
	//}
#include<stdio.h>
//int main()
//{	
//	int x, y, z, m, n;	
//	printf("��������������");	
//	scanf_s("%d%d", &x, &y);
//	m = x, n = y;	
//	while (y != 0)	
//	{		
//		z = x%y;
//		x = y;	
//		y = z;	
//	}	
//	printf("���Լ����: %d\n", x);
//	printf("��С��������: %d\n", m * n / x);
//	system("pause");	
//	return 0;
//}
//int main(void)
//{
//	int i = 1;//��ʼ��
//	for (i = 1; i <= 10; i++)//�ж�
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main(void)
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d", i);//1,2,3,4
//	}
//	return 0;
//}
//int main(void)
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		printf("%d\n", arr[i]);
//	return 0;
//}
//int main(void)
//{
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main(void)
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//			printf("hehe\n");
//	}
//	return 0;
//}
//int main(void)
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main(void)
//{
//	int x = 0;
//	int y = 0;
//	for (x = 0, y = 0; x < 2, y < 5; ++x, y++)//���ű��ʽ
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
#include<stdio.h>
//int main(void)
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}
//int main(void)
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i<=10);
//		return 0;
//}
//int main(void)
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);//1,2,3,4
//		i++;
//	} while (i <= 10);
//	return 0;
//}
//int main(void)
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);//1,2,3,4,....
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//��n�Ľ׳�
//#include<stdio.h>
//int main(void)
//{
//	int n;
//	int s =1;
//	int i = 1;
//	scanf("%d", &n);
//	for (i = 1;  i<=n; i++)
//		s = s * i;
//	printf("%d", s);
//	return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//	int n = 0;
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (n = 1; n <= 10; n++)
//	{
//		while (i <= n)
//		{
//			ret *= i;
//			i++;
//		}
//		sum += ret;
//	}
//	printf("sum=%d", sum);
//	return 0;
//}



#include<stdio.h>
//���ֲ���
//1����ȷ�������ҷ�Χ�������±꣬ͨ�������±�����м�Ԫ�ص��±ꣻ
//2���õ��м�Ԫ�ص��±�֮�󣬽���ҪѰ�ҵ�Ԫ�������м�Ԫ�ؽ��бȽϣ�
//3�������Ҫ�ҵ�Ԫ��С���ҵ��м�Ԫ�أ���ô�����ұߵ��±ꣻ
//4�������Ҫ�ҵ�Ԫ�ش����ҵ��м�Ԫ�أ���ô������ߵ��±ꣻ
//5��Ȼ�󲻶�ʹ�������ķ��������ղ��ҵ���ҪѰ�ҵ���Ԫ��
//int main(void)
//{
//	/*�۰�����㷨�����߽ж��ֲ����㷨
//	�������������*/
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//	int k = 17;
//	int left = 0;//��ߵ��±�
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	//�ұߵ��±꣬sizeof(arr)/sizeof(arr[0])Ŀ�����������Ԫ�صĸ���������Ԫ�صĸ���-1
//	//��Ϊ���һ��Ԫ�ص��±ꣻ
//	//int mid = (left + right) / 2;//�м�Ԫ�ص��±꣨��������������⣬���right�ر��Ļ���
//	//��������һ����ƽ��ֵ�ķ���
//	while (left<=right)
//	{
//		int mid = left + (right - left) / 2;//�����㷨һ���������
//		if (arr[mid] < k)
//		{
//			left = mid + 1;//����mid����һ���ж�
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("�Ҳ���\n");
//		}
//	}
//return 0;
//}


//��ȷ�����ҷ�Χ�����ұ߽�
//ȷ����Ҫ���ҵ������Ǽ�
#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//	int key = 17;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	while (left <= right)
//	{
//		    int mid = left + (right - left) / 2;
//			if (arr[mid] < key)
//			{
//				left = mid + 1;
//			}
//			else if (arr[mid] > key)
//			{
//				right = mid - 1;
//			}
//			else
//			{
//				printf("�ҵ��ˣ��±�Ϊ%d:", mid);
//				break;
//			}
//			if (left > right)
//			{
//				printf("�Ҳ���\n");
//			}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//	int index;
//	int a[] = { 14,25,45,85,15,65,4,5,53,12 };
//	for (index = 0; index < 10; index++)
//	{
//		printf("Spare seat number :%d\n", a[index]);
//	}
//	return 0;
//}


//ͳ�Ƹ������ֳ��ֵĴ���
//#include<stdio.h>
//int main(void)
//{
//	int a[] = { 1,5,6,8,2,1,4,5,2,5 };//����һ������
//	int i = 0;
//	int b[10] = { 0 };
//	for (i = 0; i < 10; i++)//ѭ�������е�ÿ��ֵ
//	{
//		b[a[i]]++;//ͳ�Ƴ��ֵĴ���
//	}
//	for (i = 0; i < 10; i++)//��0-9ѭ��
//	{
//		printf("%d���ֵĴ���Ϊ%d ", b[i]);
//	}
//	return 0;
//}


////���һ���������е�����
//#include<stdio.h>
//int main(void)
//{
//	int a[4][2];
//	int i, j;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			printf("a[%d][%d]= ", i, j);
//			scanf("%d", &a[i][j]);
//		}
//	}
//	printf("�����ά����\n");
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			printf("%d\t", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


////����ά��������н��жԻ�
//#include<stdio.h>
//int main(void)
//{
//	int a[4][2];
//	int b[2][4];//����һ���������е�����
//	int i, j;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			printf("a[%d][%d]= ", i, j);
//			scanf("%d", &a[i][j]);
//		}
//	}
//	printf("�����ά����\n");
//	for (i = 0; i <4; i++)
//	{
//		for (j = 0; j < 2 ;j++)
//		{
//			printf("%d\t", a[i][j]);
//		}
//		printf("\n");
//	}
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 2 ;j++)
//		{
//			b[j][i] = a[i][j];
//		}
//	}
//	printf("���ת���������\n");
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d\t", b[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//���ַ���������ַ���park
//#include<stdio.h>
//int main(void)
//{
//	char a[5] = { 'p','a','r','k' };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%c", a[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main(void)
//{
//	printf("hello world\n");
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "Welcome to bit!!!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	/*
//	��2��ԭ������Ϊ������˵char arr[]="bit",�������ַ�������ʽ���ֵģ��ַ����Ľ�����Ϊ\0;
//	����bit���滹��һ��λ�÷��õ�ʱ\0,\0���±�Ϊ3�����������Ҫ������ұߵ������±�Ļ�
//	��ô��Ҫ�ľ���t���±꣬t���±�Ϊ2������ַ���һ�����ĸ�Ԫ�أ�����˵���ұߵ��ַ����±�
//	��Ϊ�ַ��������е�Ԫ�صĸ���-2�����ܵõ���ȷ���±ꣻ�������ַ�������ֱ�ۣ�������������
//	*/
//	int right = strlen(arr1) - 1;
//	/*
//	strlen���ַ����ĳ��ȣ��������ַ����ĳ��Ȳ�������\0
//	���������ַ�������bit�ĳ��ȣ�������Ľ����Ϊ3����ô���ұߵ��ַ����±��Ϊ
//	������Ľ����1�����ַ����Ƚ�ֱ��
//	strlenֻ���������ַ���
//	*/
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//	}
//	return 0;
//}
//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	//��������Ϊ123456
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������\n");
//		scanf("%s", password);
//		if (0 == strcmp(password, "123456"))//string compar,�Ƚ������ַ���
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//		if (i == 3)
//		{
//			printf("��������ȫ�������˳�����\n");
//		}
//	}
//	return 0;
//}
//
//#include<stdio.h>
//#include<time.h>//��ȡϵͳʱ�䣬ͨ����������������õ���ǰ��ʱ��
//#include<stdlib.h>
//void menu()
//{
//	printf("*****************************\n");
//	printf("***    1.play       0.exit***\n"); 
//	printf("*****************************\n");
//	//д��һ���˵�
//}
//void game()
//{
//	/*
//	1)���������
//	RAND_MAX-32767
//	��rand��������,��������Ϊ���� int ret=rand();
//	*/
//	int guess = 0;
//	int ret = 0;
//	ret = rand()%100+1;
//	//2.������
//	while (1)
//	{
//		printf("�������\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//time�ķ���ֵʱtime_t;(��ʵ�����Σ�
//	//����������ķ�ʽ��ʱ�����
//	//ʱ�������ת��Ϊ����ȥ����
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//����Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��!\n");
//		}
//	} while (input);
//	return 0;
//}
//
//
//#include<stdio.h>
//int main(void)
//{
//again:
//	printf("hehe\n");
//	goto again;
//	return 0;
//}
//
//
////�ػ�����
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input[] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (0 == strcmp(input, "������"))
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		printf("�����������������!\n");
//		goto again;
//	}
//	return 0;
//}
//
//
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input[] = { 0 };
//	system("shutdown -s -t 60");
//		//����Windowsϵͳ�µ�һ���ػ�����
//	while(1)
//	{
//		printf("��ĵ��Խ���һ���Ӻ�ػ�����������������ͻ�ȡ���ػ���\n�����룺");
//		scanf("%s", input);
//		if (0 == strcmp(input, "������"))
//		{
//			system("shutdown -a");//ȡ���ػ�����
//			break;
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input[] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (0 == strcmp(input, "������"))
//	{
//		system("shutdown -a");//ȡ���ػ�������
//	}
//	else
//	{
//		printf("�����������������!\n");
//		goto again;
//	}
//	return 0;
//}

//���ҵ��ʵĸ���
//#include<stdio.h>
//int main()
//{
//	int word = 1;//��ʼ�����ʵĸ���
//	char a[100];
//	int i = 0;//�е�������µ��±�
//	char blank = 0;
//	scanf("%s", a);
//	if (a[0] == '\0')//ʲô��û�е����
//	{
//		printf("There is nothing in the computer\n");
//	}
//	else if(a[0]==' ')//��һ���ַ�Ϊ�ո�����
//	{
//		printf("The first word is just a blank");
//	}
//	else
//	{
//		for (i = 0; a[i] != ' '; i++)
//		{
//			blank = a[i];//�õ������е��ַ�Ԫ��
//			if (blank == ' ')
//			{
//				word++;
//			}
//			printf("%d\n", word);
//		}
//	}
//	return 0;
//}


//���ҵ��ʵĸ���
//#include <stdio.h>
//#include <string.h>
//#define SIZE 100
//int main()
//{
//	char str[SIZE] = { '\0' };
//	int count = 0;
//	printf("please input the string\n");
//	gets(str);
//	puts(str);
//	int length = strlen(str);//�ַ����ĳ���
//	for (int i = 0; i < length; i++)
//	{
//		//�ж��ǲ��ǿո� ���ǵĻ���while����i++ִ���жϵ���һ���ո�ĳ��ֻ��ǽ���
//		if (str[i] != ' ')
//		{
//			count++;
//			while (str[i] != ' ' && str[i] != '\0')
//			{
//				i++;
//			}
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


//���ֲ���
/*
1.��ȷ����Ҫ���ҷ�Χ�������±�
2.�ҵ������±�֮��Ȼ��ȷ���м�λ�õ��±�.
(ÿ������С��Χ֮��Ҫ����ȷ���м�λ�õ��±꣩������Ҫ�������ѭ������
3.Ȼ����ҪѰ�ҵ����֣��봦���м��±�λ�õ�Ԫ�ؽ��бȽ�
�����Ҫ���ҵ�Ԫ�ش����м�Ԫ�أ���ô������ߵı߽磬��֮�������ұߵı߽�
*/
//#include<stdio.h>
//int main(void)
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//	int key =17;
//	int left = 0;
//	int right =sizeof(arr)/sizeof(arr[0])-1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] <key)
//		{
//			left=mid+1;
//		}
//		else if (arr[mid] >key)
//		{
//			right=mid-1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("�Ҳ���\n");
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	char a[30] = "sell sell sell ", b[30] = "apple";
//	printf("���ǰһ��\n");
//	puts(a);
//	printf("�����һ��\n");
//	puts(b);
//	strcat(a, b);
//	printf("����Ϊ\n");
//	puts(a);
//	return 0;
//}


//��������ַ���ȫ��ת��Ϊ��д
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[20], change[20];
//	printf("����һ���ַ���:\n");
//	gets(a);
//	strcpy(change, a);//����Ҫת�����ַ�
//	strupr(change);//��Сдת��Ϊ��д
//	printf("ת���ɴ�д��ĸ���ַ���Ϊ%s", change);
//	return 0;
//}

/*
��ת����ַ���
�ڳ����ж��������ַ����飬һ����ʾԴ�ַ�������һ����ʾ��ת����ַ�������Դ�ַ����У�
�ӵ�һ���ַ���ʼ��������ȡ�ַ����ݣ���Ŀ���ַ����д����һ���ַ����������\0���⣩
��������ַ��������ν�Դ�ַ����еĵ�һ���ַ�����д��Ŀ���ַ��������һ���ַ����У�
��Դ�ַ����еĵڶ����ַ�����д��Ŀ���ַ����ĵ����ڶ����ַ��У��������ƣ�������ʵ�����ַ����ķ�ת��
*/
//#include<stdio.h>
//int main(void)
//{
//	int i;
//	char String[5] = { "live" };
//	char Reverse[5] = { 0 };
//	int size;
//	size = sizeof(String);
//	for (i = 0; i < 4; i++)
//	{
//		Reverse[size - i - 2] = String[i];
//	}
//	printf("���Դ�ַ���:%s\n",String);
//	printf("����������ַ�����%s\n", Reverse);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr[] = "Hello bit!!!\n";
//	//��ǰ���hello���x��
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}

//�ҳ�a��b�Ľϴ�ֵ
//#include<stdio.h>
//int get_max(int x, int y)//��������Ϊ����
//{
//	if (x > y)
//		return x;
//	else
//	{
//		return y;
//	}
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("%d", max);
//}



//#include<stdio.h>
////��ʵ�δ����βε�ʱ��
////�β���ʵ�ε�һ����ʱ����
////���βε��޸Ĳ���ı�ʵ��
//void Swap(int *px,int *py)//�޷���ֵ
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
////x��y���β�
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}
////a��b��ʵ��


//���ú���дһ���ӷ����
//#include<stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main(void)
//{
//	int z = Add(2, 3);
//	printf("%d", z);
//	return 0;
//}




////дһ�������ж�һ�����ǲ�������
//#include<stdio.h>
//#include<stdlib.h>
//int is_prime(int n)
//{
//	//�ж�n�Ƿ�Ϊ����
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)//��������
//		{
//			return 0;//��������
//		}
//	}
//	return 1;
//}
//int main(void)
//{
//	int count = 0;
//	int i = 100;
//	for (i = 100; i < 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			    count++;
//				printf("%d ", i);	
//		}
//	}
//	printf("count=%d ", count);//����
//	return 0;
//}

//
////дһ�������ж�����ǲ�������
//#include<stdio.h>
//#include<stdlib.h>
//int is_LeapYear(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//	   return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int count = 0;
//	int year = 0;
//	for(year=1000;year<=2000;year++)
//	{ 
//		//�ж��ǲ�������
//		if (is_LeapYear(year) == 1)//�����귵��1
//		{
//			count++;
//			printf("%d ", year);
//		}
//	}
//	printf("\n");
//	printf("count = %d", count);
//	return 0;
//}


//дһ��������ʵ�ֶ��ֲ���
//#include<stdio.h>
//int BinarySearch(int arr[], int key,int sz)//int *arr��
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;//ÿ�ζ��ֲ��Ҷ�Ҫ���м�Ԫ�ص��±꣬��ѭ������
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//	int key = 17;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	ret=BinarySearch(arr,key,sz);//���鴫�δ�������Ԫ�صĵ�ַ
//	if (ret == -1)
//		printf("�Ҳ���\n");
//	else
//		printf("�ҵ��ˣ��±�ʱ%d ", ret);
//	return 0;
//}


//дһ��������ÿ����һ������������ͻὫnum��ֵ����1
//#include<stdio.h>
//void Add(int* pm)
//{
//	(*pm)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}



//������Ƕ�׵���
//#include<stdio.h>
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}


//��������ʽ����
//#include<stdio.h>
//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//	printf("%d\n", strlen("abcdef"));
//	return 0;
//}


//����������
//#include<stdio.h>
//void LunYu()
//{
//	printf("�����У�������ʦ��\n");
//}
//int main()
//{
//	LunYu();
//	return 0;
//}

////����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�����磺
////����1234����ӡ 1 2 3 4��
//#include<stdio.h>
//void print(int n)//����nΪ1234
//{
//	if (n > 9)//��֤nΪ��λ����1λ��ֱ�Ӵ�ӡ����λ�����Ȼ���ڴ�ӡ
//		print(n / 10);//
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	print(n);
//	return 0;
//}



////��дһ������������������ʱ���������ַ�������
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	if (*str == '\0')//�մ�ֱ��return 0;
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(str + 1);
//		/*
//		�ȿ���һ��Ԫ���ǲ���\0;�����һ��Ԫ�ز���\0����ô����ȷ��
//		����ַ���������һ��Ԫ�أ������1����Դ����Ȼ����ȥ�ж�ʣ�µ��ַ���
//		ʣ�µ��ַ������Ǵӵ�һ���ַ���ʼ����Ȼ���ٿ�ʣ�µ��ַ�����ʣ�µ��ַ���
//		ͬ�������˵ݹ��˼��ȥģ��ʵ�ָ����⺯����ʵ�������
//		*/
//	}
//}
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d", len);
//	return 0;
//}
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	int count = 0;//count�Ǽ�������������ʱ����
//	while (*str != '\0')
//	{
//		count++;
//		str++;//��������ж�
//	}
//	return count;
//}
//int main()
//{
//	int len = my_strlen("abc");
//	/*
//	������ַ���"abc"�������Ϊ���飬�Ͱ����������Ϊ����
//	����Ҫ���ݵĻ��������ǰ��������鶼����ȥ������ȥ��
//	ֻ��������׵�ַ��Ҳ�����൱�ڰ�a�ĵ�ַ����ȥ����ô����ַ�Ļ�
//	��ʲô�����أ�������ָ����գ���char *����
//	*/
//	printf("%d", len);
//	return 0;
//}



//��n�Ľ׳�
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int sum = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum * i;
//	}
//	printf("%d", sum);
//	return 0;
//}



//��n��쳲�������
//#include<stdio.h>
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("%d", ret);
//}


//#include<stdio.h>
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}


//#include<stdio.h>
//int a;
//int main()
//{
//	printf("%d\n", a);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6 };//������ȫ����ӡ����
//	for (i = 0; i < 6; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//�����Ԫ�ظ���sizeof(arr)/sizeof(arr[0]);


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d]=%p\n",i, &arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
////����Ĵ������ʼ��
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6 };//��ʼ��
//	char arr[3][5];
//	double arr[6][5];
//	return 0;
//}


////��ӡһ��2��4�е�����
//#include<stdio.h>
//int main()
//{
//	int a[2][4];
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("a[%d][%d]= ", i, j);
//			scanf("%d", &a[i][j]);
//		}
//	}
//	printf("�����ά����\n");
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d\t", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//��ά�������ڴ��еĴ洢
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[3][4] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i,j,&arr[i][j]);
//		}
//	}
//	printf("\n");
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a;
//	int b = -12;
//	a = abs(b);
//	printf("%d", a);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	long a;
//	long b = -1234567890L;
//	a = labs(b);
//	printf("%d", a);
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double a;
//	double b = -12.3;
//	a = fabs(b);
//	printf("%lf", a);
//	return 0;
//}

////��abs�����������������˵������
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a;
//	int b;
//	int differ, ab;//�������
//	printf("��������\n");
//	scanf("%d %d", &a, &b);
//	differ = a - b;
//	ab = abs(differ);
//	printf("�����˵������Ϊ%d", ab);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double a;
//	double b = 0.5;
//	a = sin(b);
//	printf("%lf", a);
//	return 0;
//}


//ð������
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,3,4,6,8,5,9,2,7,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//��ð�������װ�ɺ���
//#include<stdio.h>
//void BubbleSort(int arr[],int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 2,3,6,5,7,4,1,8,10,9 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//��ð����������Ż�
//#include<stdio.h>
//void BubbleSort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	int flag = 1;//��������������
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//int main()
//{
//	int arr[] = { 2,3,6,5,7,4,1,8,10,9 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d", sizeof(arr));
//	return 0;
//}


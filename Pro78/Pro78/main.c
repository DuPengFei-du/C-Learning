//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	(void)scanf("%d %d", &a, &b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	(void)scanf("%d %d", &a, &b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int count = 0;
//	(void)scanf("%d", &n);
//	for (int i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}		
//	}
//	printf("%d", count);
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int count = 0;
//	(void)scanf("%d", &n);
//	while (n)
//	{
//		count++;
//		n = n & (n - 1);
//	}
//	printf("%d", count);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = a << 1;
//	//<<���Ʋ�����
//	//��߶������ұ߲�0
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = -1;
//	int b = a << 1;
//	//�������ڴ��д洢���Ƕ����Ʋ���
//	//-1�����ڴ��д洢�����Ǵ洢32��1��32��1Ϊ-1�Ĳ��롣
//	//������ԭ������������ͬ
//	//������д��ԭ�룬���λΪ����λ�����������λΪ1�������ķ���λΪ1������Ϊ0
//	//���룺��ԭ��Ļ����ϣ�����λ����������λ��λȡ�����õ�����
//	//����+1�õ�����
//	printf("%d\n", b);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = -1;
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//	//���õ�����������
//}


//#include<stdio.h>
//int main()
//{
//	int a = 3;   //011
//	int b = 5;   //101
//	int c = a & b;    //001
//	printf("%d\n", c);
//	return 0;
//	//�����1
//}


//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a | b;
//	printf("%d\n", c);
//	return 0;
//}
////���Ϊ7


//#include<stdio.h>
//int main()
//{
//	int a = 3;  //011
//	int b = 5;  //101
//	int c = a ^ b;   //110
//	printf("%d\n", c);
//	return 0;
//}
////���Ϊ6


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = !a;
//	printf("%d\n", b);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);   //003DF718
//	printf("%x\n", &a);   //3df718
//	return 0;
//}
////%x��ʾ��16���ƴ�ӡ�������16���ƴ�ӡ��ǰ��ͻ���00


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	printf("%p\n", &arr);   //����ĵ�ַ
//	printf("%p\n", &arr + 1); //����ĵ�ַ��1
//	return 0;
//}
////����ĵ�ַ��1����������������


//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	printf("%d\n", sizeof(a));  //4
//	printf("%d\n", sizeof(int));   //4
//	return 0;
//}
////printf("%d\n",sizeof a);
////sizeof���ԶԱ���ʡ�����ţ����ܶ�����ʡ������


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = ~a;
//	printf("%d\n", b);
//	return 0;
//	//�����-11
//	//00000000000000000000000000001010  --����
//	//11111111111111111111111111110101  --��λȡ����Ĳ���
//	//11111111111111111111111111110100  --����
//	//10000000000000000000000000001011  --ԭ��
//}


//#include <stdio.h>
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)   //��ָ����յģ���СΪ4
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)  //������һ���״�ĵ㣬������ָ����յ�
//	//���Դ�С����4����char��û���κι�ϵ��
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)
//	printf("%d\n", sizeof(ch));//(3)
//	test1(arr);
//	test2(ch);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
//// ��ӡ��ֵ��1 2 3 4


//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
////��ӡ��ֵΪ1 3 3 4


//#include<stdio.h>
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//};
//int main()
//{
//	struct Stu s = { "����", 30, "��" };
//	printf("%s\n", s.name);
//	printf("%d\n", s.age);
//	printf("%s\n", s.sex);
//	return 0;
//}


////�����Сд�ַ����������Ӧ�Ĵ�д�ַ�������Ǵ�д�ַ�
////�������Ӧ��Сд�ַ�����������־Ͳ����
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch >= 'A' && ch <= 'Z')
//			putchar(ch + 32);
//		else if (ch >= 'a' && ch <= 'z')
//			putchar(ch - 32);
//		else
//			putchar(ch);
//	}
//}


//����Ԫ�ص�����
//#include<stdio.h>
//#include<string.h>
//void My_Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//void Print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	My_Reverse(arr, sz);
//	Print(arr, sz);
//	return 0;
//}


//�����ַ���
//#include<stdio.h>
//void my_reverse(char* str, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int temp = str[left];
//		str[left] = str[right];
//		str[right] = temp;
//		left++;
//		right--;
//	}
//}
//void Print(char arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%c", arr[i]);
//	}
//}
//int main()
//{
//	char arr[] = "abcedf";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_reverse(arr, sz);
//	Print(arr, sz);
//	return 0;
//}


//��ӡ�˷��ھ����к����Լ�ָ��
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	(void)scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


////��ȡһ�������������������е�ż��λ������λ
////�ֱ��������������
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	(void)scanf("%d", &n);
//	//ż��λ
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf("\n");
//	//����λ
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	return 0;
//}


///*
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ
//�ĸ����ɷ��е�һ��������Ϊ4���ӷ��Ĺ��ʣ�
//A˵:������
//B˵:��C
//C˵:��D
//D˵:C�ں�˵
//��֪������˵���滰��һ����˵���Ǽٻ�
//�����������Щ��Ϣ��дһ��������ȷ������˭������
//*/
//#include<stdio.h>
//int main()
//{
//	char killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer is %c", killer);
//		}
//	}
//	return 0;
//}


/*
5λ�˶�Ա�μ���10m��ˮ����������������Ԥ��������
Aѡ��˵��B�ڶ����ҵ���;
Bѡ��˵���ҵڶ���E����;
Cѡ��˵���ҵ�һ��D�ڶ�;
Dѡ��˵��C����ҵ���;
Eѡ��˵���ҵ��ģ�A��һ;
����������ÿλѡ�ֶ�˵����һ�룬����ȷ������������
*/


///*
//ͨ������⣬���ǿ���֪��A,B,C,D,E�������ǵ�һ���������������ʣ���ô���ǿ���
//ͨ�������еĿ������г�����Ȼ����������ÿ�˶�˵����һ������
//*/
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1)
//							&& ((b == 2) + (e == 4) == 1)
//							&& ((c == 1) + (d == 2) == 1)
//							&& ((c == 5) + (d == 3) == 1)
//							&& ((e == 4) + (a == 1) == 1))
//						{
//							if (a * b * c * d * e == 120)
//								printf("%d %d %d %d %d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//}


//#include<stdio.h>
//int main()
//{
//	char a = 127;
//	char b = 3;
//	char c = a + b;
//	//00000000000000000000000001111111  --a��32λ��ʽ�µĴ洢
//	//00000000000000000000000001000011  --b��32λ��ʽ�µĴ洢
//	//����a��b����char���͵ģ�char֮��һ���ֽڣ�����a��bΪ��
//	//01111111  --a
//	//00000011  --b
//	//�ַ������ʱ�򶼴ﲻ�����εĴ�С������Ҫ�Ȱ��������������εĴ�С��Ȼ���ٽ�������
//	//a��b��Ϊ�з��ŵ�char���ͣ��������λ�Ƿ���λ
//	//������Ҫ��a���Ȳ���������ӣ�00000000000000000000000001111111
//	//b��ͬ��b����ˣ�00000000000000000000000001000011
//	//��a��b������ӣ�
//	//00000000000000000000000001111111
//	//00000000000000000000000001000011
//	//00000000000000000000000010000010   ---a��b��ӵĽ��
//	//a+b�Ľ��Ҫ����c���棬ֻ�ܴ�����8������λ�����Ϊ10000010
//	//��c��������������Ҫ�����Ƿ���λ������Ľ��������ʾ:
//	//11111111111111111111111110000010 ---���ڴ��зŵ��ǲ��룬��ӡ����ԭ��
//	//����-1�Ƿ���
//	//����Ϊ��11111111111111111111111110000001
//	//ԭ��Ϊ��10000000000000000000000001111110  --���Ϊ-126
//	printf("%d", c);   //---126
//	return 0;
//}
////�޷���������������ʱ��ֻ�ܲ�0


//#include<stdio.h>
//int main()
//{
//	char a = 0xb6;//11000110
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	system("pause");
//	return 0;
//}
////��ӡ���Ϊc
////������������������������
#define _CRT_SECURE_NO_WARNINGS 1


//дһ���������ز�����������1�ĸ���
//���� 15 00001111 һ����4��1
//����ԭ��
//int count_one_bits(unsigned int value)  ��Ҫ����1�ĸ���
//#include<stdio.h>
//unsigned count_one_bits(unsigned int n)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	unsigned int n = 0;
//	int ret = 0;
//	(void)scanf("%d", &n);
//	ret = count_one_bits(n);
//	printf("%d", ret);
//	return 0;
//}


//#include<stdio.h>
//unsigned count_one_bits(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//			count++;
//		n /= 2;
//	}
//	return count;
//}
//int main()
//{
//	unsigned int n = 0;
//	int ret = 0;
//	(void)scanf("%d", &n);
//	ret = count_one_bits(n);
//	printf("%d", ret);
//	return 0;
//}


//#include<stdio.h>
//unsigned count_one_bits(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	unsigned int n = 0;
//	int ret = 0;
//	(void)scanf("%d", &n);
//	ret = count_one_bits(n);
//	printf("%d", ret);
//	return 0;
//}

/*
���ȥ�ж�һ�����ǲ���2^n�����ĳ������2��n�η�����ô�Ǹ����ֵĶ�����������
ֻ��1��1���Ǹ�1�ڵڼ�λ�ϣ�����2�ļ��η�
����Ϊn&(n-1)ÿִ��һ�ξͼ���һ��1���м���1�ͻ�ִ��һ�Ρ�
��ôֻ��Ҫʹ��n&(n-1)==0����ô˵����n��2��n�η���
*/


//��ȡһ�������������������е�ż��λ������λ
//�ֱ��������������
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


//���ʵ��
//����int(32λ)����m��n�����Ʊ��ʽ��
//�ж��ٸ�bit��ͬ
//��������
// 1999 2299
//������� ��7
//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int a = 0;
//	int count = 0;
//	(void)scanf("%d %d", &m, &n);
//	a = m ^ n;
//	for (int i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//			count++;
//	}
//	printf("%d", count);
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

/*
ͨ������⣬���ǿ���֪��A,B,C,D,E�������ǵ�һ���������������ʣ���ô���ǿ���
ͨ�������еĿ������г�����Ȼ����������ÿ�˶�˵����һ������
*/
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
//							if(a*b*c*d*e==120)
//							printf("%d %d %d %d %d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//}


/*
�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ
�ĸ����ɷ��е�һ��������Ϊ4���ӷ��Ĺ��ʣ�
A˵:������
B˵:��C
C˵:��D
D˵:C�ں�˵
��֪������˵���滰��һ����˵���Ǽٻ�
�����������Щ��Ϣ��дһ��������ȷ������˭������
*/
//#include<stdio.h>
//int main()
//{
//	char killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd')==3)
//		{
//			printf("killer is %c",killer);
//		}
//	}
//	return 0;
//}


#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar())!= EOF)
	{
		if (ch >= 'a' && ch <= 'z')
			putchar(ch - 32);
		else if (ch >= 'A' && ch <= 'Z')
			putchar(ch + 32);
		else if (ch >= '0' && ch <= '9')
			continue;
		else
			putchar(ch);
	}
	return 0;
}


//����Ԫ�ص�����
#include<stdio.h>
int main()
{
	char arr[] = "abcdef";
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	while (left <= right)
	{
		char temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
	for (int i = 1; i < sz; i++)
	{
		printf("%c", arr[i]);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int num = 0;
	int count = 0;
	int i = 0;
	(void)scanf("%d", &num);
	for (i = 0; i < 32; i++)
	{
		if (((num >> i) & 1) == 1)
			count++;
	}
	printf("%d\n", count);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	printf("%p\n", &a);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 10;
	printf("%p\n", &a);   //003DF718
	printf("%x\n", &a);   //3df718
	return 0;
}
//%x��ʾ��16���ƴ�ӡ�������16���ƴ�ӡ��ǰ��ͻ���00


#include<stdio.h>
int main()
{
	int a = 1;
	printf("%d\n", sizeof(a));  //4
	printf("%d\n", sizeof(int));   //4
	return 0;
}
//printf("%d\n",sizeof a);
//sizeof���ԶԱ���ʡ�����ţ����ܶ�����ʡ������


#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr)); //40  �����������Ĵ�С
	return 0;
}


#include <stdio.h>
void test1(int arr[])
{
	printf("%d\n", sizeof(arr));//(2)   //��ָ����յģ���СΪ4
}
void test2(char ch[])
{
	printf("%d\n", sizeof(ch));//(4)  //������һ���״�ĵ㣬������ָ����յ�
	//���Դ�С����4����char��û���κι�ϵ��
}
int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));//(1)
	printf("%d\n", sizeof(ch));//(3)
	test1(arr);
	test2(ch);
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	printf("%d\n", arr[5]);
	printf("%d\n", p[5]);
	printf("%d\n", *(p + 5));
	printf("%d\n", *(arr + 5));
	return 0;
	//p[5]==*(p+5)
	//arr[5]==*(arr+5)==*(5+arr)==5[arr]
}
//�⼸����ӡ�Ľ����һ����


#include<stdio.h>
int main()
{
	char a = 127;
	char b = 3;
	char c = a + b;
	//00000000000000000000000001111111  --a��32λ��ʽ�µĴ洢
	//00000000000000000000000001000011  --b��32λ��ʽ�µĴ洢
	//����a��b����char���͵ģ�char֮��һ���ֽڣ�����a��bΪ��
	//01111111  --a
	//00000011  --b
	//�ַ������ʱ�򶼴ﲻ�����εĴ�С������Ҫ�Ȱ��������������εĴ�С��Ȼ���ٽ�������
	//a��b��Ϊ�з��ŵ�char���ͣ��������λ�Ƿ���λ
	//������Ҫ��a���Ȳ���������ӣ�00000000000000000000000001111111
	//b��ͬ��b����ˣ�00000000000000000000000001000011
	//��a��b������ӣ�
	//00000000000000000000000001111111
	//00000000000000000000000001000011
	//00000000000000000000000010000010   ---a��b��ӵĽ��
	//a+b�Ľ��Ҫ����c���棬ֻ�ܴ�����8������λ�����Ϊ10000010
	//��c��������������Ҫ�����Ƿ���λ������Ľ��������ʾ:
	//11111111111111111111111110000010 ---���ڴ��зŵ��ǲ��룬��ӡ����ԭ��
	//����-1�Ƿ���
	//����Ϊ��11111111111111111111111110000001
	//ԭ��Ϊ��10000000000000000000000001111110  --���Ϊ-126
	printf("%d", c);   //---126
	return 0;
}
//�޷���������������ʱ��ֻ�ܲ�0


#include<stdio.h>
int main()
{
	char a = 0xb6;//11000110
	short b = 0xb600;
	int c = 0xb6000000;
	if (a == 0xb6)
		printf("a");
	if (b == 0xb600)
		printf("b");
	if (c == 0xb6000000)
		printf("c");
	system("pause");
	return 0;
}
//��ӡ���Ϊc
//������������������������


#include<stdio.h>
int main()
{
	int i = 1;
	int ret = (++i) + (++i) + (++i);
	printf("%d", ret);
	printf("%d", i);
	return 0;
	//��ͬ�ı����������ܻ��в�ͬ�Ľ��
}
//��δ���ĵ�һ��+��ִ�е�ʱ�򣬵ڶ���+�Ƿ�ִ�����ǲ�ȷ����
//��Ϊ���������������ȼ��ͽ�������޷�������һ��+�Ͷ�����ǰ��++���Ⱥ�˳���


#include<stdio.h>
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}


//��ȡһ�������������������е�ż��λ������λ
//�ֱ��������������
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	(void)scanf("%d", &n);
	//ż��λ
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d", (n >> i) & 1);
	}
	printf("\n");
	//����λ
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", (n >> i) & 1);
	}
	return 0;
}


//�����ж��ٸ�������λ��ͬ
#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	int count = 0;
	(void)scanf("%d %d", &m, &n);
	int temp = m ^ n;
	for (int i = 0; i < 32; i++)
	{
		if (((temp >> i) & 1) == 1)
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}


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
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((b == 2) + (a == 3) == 1)
							&& ((b == 2) + (e == 4) == 1)
							&& ((c == 1) + (d == 2) == 1)
							&& ((c == 5) + (d == 3) == 1)
							&& ((e == 4) + (a == 1) == 1))
						{
							if (a * b * c * d * e == 120)
								printf("%d %d %d %d %d\n", a, b, c, d, e);
						}
					}
				}
			}
		}
	}
}


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
#include<stdio.h>
int main()
{
	char killer = 0;
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
		{
			printf("killer is %c", killer);
		}
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));//16,a��Ϊ������������������sizeof�ڲ�����ʾ������������Ĵ�С�����Ϊ4*4=16
	printf("%d\n", sizeof(a + 0)); //4����ʱa��û�е���������sizeof�ڲ�������a��ʱ��ʾ������Ԫ�صĵ�ַ
	//a��ʾ��Ԫ�صĵ�ַ��a+0����ʾ������Ԫ�صĵ�ַ��ֻҪ�ǵ�ַ������4���ֽ�
	printf("%d\n", sizeof(*a)); //4��*a��ʾ����Ԫ�ص�ֵ����Ԫ�ص�ֵΪ1������Ϊint��sizeof(int)=4
	printf("%d\n", sizeof(a + 1));//4 a��ʾ��Ԫ�صĵ�ַ��a+1��ʾ���ǵڶ���Ԫ�صĵ�ַ��ֻҪ�ǵ�ַ
	//�������4
	printf("%d\n", sizeof(a[1]));//4 a[1]��ʾ���ǵ�2��Ԫ�ص�ֵ��ֵΪint���ͣ����Դ���СΪ4
	printf("%d\n", sizeof(&a));  //4 &a��ȡ��������������ĵ�ַ��ֻҪ�ǵ�ַ���������4���ֽ�
	printf("%d\n", sizeof(*&a)); // 16 �����Ҫע�⣺
	//�ȶ�a����&��ȥ������������ĵ�ַ���ڶ������ַ���н����õĲ���
	//���ҵ����������飬���Դ�СΪ16��*&a���൱��a����ʵ����sizeof(a)��Ϊ��������Ĵ�С
	printf("%d\n", sizeof(&a + 1)); //4 &a+1����������������Ĵ�С��Ȼ�󣬻���һ����ַ�����Խ������4
	printf("%d\n", sizeof(&a[0])); //4 ��Ȼ��һ����ַ
	printf("%d\n", sizeof(&a[0] + 1)); //4 ���ǵ�ַ
}


#include<stdio.h>
int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr)); //arr��Ϊ����������sizeof�ڲ���Ҫ���������������Ĵ�С
	//�����д�ʱ��û�з���\0������һ����6��Ԫ�أ�ÿ��Ԫ�صĴ�С��һ���ֽ�
	//������������Ĵ�СΪ6���ֽ�
	printf("%d\n", sizeof(arr + 0));  //4 ��ʱarr��Ϊ��Ԫ�صĵ�ַ��arr+0���Ǳ�ʾ��Ԫ�صĵ�ַ
	//ֻҪ�ǵ�ַ����С����4
	printf("%d\n", sizeof(*arr));     //1  arr��Ϊ��Ԫ�صĵ�ַ�����н����ã�Ȼ��õ���
	//��Ԫ�ص�ֵ��ֵΪchar�͵ģ���СΪ1���ֽ�
	printf("%d\n", sizeof(arr[1]));   //1 �ڶ���Ԫ�ص�ֵ
	printf("%d\n", sizeof(&arr));     //4  &arrȡ����������ĵ�ַ
	printf("%d\n", sizeof(&arr + 1));//4  �����������飬����һ����ַ
	printf("%d\n", sizeof(&arr[0] + 1));  //4
}


#include<stdio.h>
int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", strlen(arr));   //δ֪������Ϊ�Ҳ�û�п���\0�����Բ�֪��\0��������
	//����ֵ�����ֵ X
	printf("%d\n", strlen(arr + 0));  //arr��ʱ��Ϊ��Ԫ�صĵ�ַ����Ԫ�ص�ַ+0������Ԫ�صĵ�ַ
	//���Ի������ֵX
	printf("%d\n", strlen(*arr));    //����ȥ�����ַ�a��Сдa��ASCII��ֵΪ97
	//����Ϊ�������
	printf("%d\n", strlen(arr[1]));  //������B�����Ի��Ǵ������
	printf("%d\n", strlen(&arr));    //X
	printf("%d\n", strlen(&arr + 1));  //Y-X=6
	printf("%d\n", strlen(&arr[0] + 1));  //X+1
}


#include<stdio.h>
int main()
{
	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr)); //7 ��������һ��\0������Ϊ7
	printf("%d\n", sizeof(arr + 0));  //4 ��Ԫ�ص�ַ�����Ի��ǵ�ַ
	printf("%d\n", sizeof(*arr));  //1 ��Ԫ�ص�ֵ����char�͵ģ���СΪ1
	printf("%d\n", sizeof(arr[1])); //1 
	printf("%d\n", sizeof(&arr)); // 4 ȡ����������ĵ�ַ
	printf("%d\n", sizeof(&arr + 1)); //4 ������������
	printf("%d\n", sizeof(&arr[0] + 1)); //4 
}


#include<stdio.h>
int main()
{
	char arr[] = "abcdef";
	printf("%d\n", strlen(arr));   //6
	printf("%d\n", strlen(arr + 0));  //�������һ��һ����������һ����6��
	printf("%d\n", strlen(*arr));     //error ������Ĵ��η�ʽ
	printf("%d\n", strlen(arr[1]));   //error ������Ĵ��η�ʽ
	printf("%d\n", strlen(&arr));     //ȡ����������ĵ�ַ��������������6
	printf("%d\n", strlen(&arr + 1)); //���ֵ�������������飬�Ѿ�����\0�ĺ�����
	//���Խ���Ƕ�����һ��δ֪��
	printf("%d\n", strlen(&arr[0] + 1));  //5
}


#include<stdio.h>
int main()
{
	char* p = "abcdef";
	printf("%d\n", sizeof(p));  //4 pΪָ���������СΪ4
	printf("%d\n", sizeof(p + 1)); //4 p��ָ�������+1�Ĵ�С���ǵ�ַ�����Ϊ3
	printf("%d\n", sizeof(*p));//1 ����һ��ֵ��ֵ��������char���ͣ����Դ�СΪ1
	printf("%d\n", sizeof(p[0])); //1 ͬ��
	printf("%d\n", sizeof(&p));   // 4 ȡ����������ĵ�ַ 
	printf("%d\n", sizeof(&p + 1));   //4  �����������飬���ǵ�ַ
	printf("%d\n", sizeof(&p[0] + 1));  //4�����ǵ�ַ
}


#include<stdio.h>
int main()
{
	char* p = "abcdef";
	printf("%d\n", strlen(p));   //6 pΪa�ĵ�ַ����a�����м�������
	printf("%d\n", strlen(p + 1));  //5
	printf("%d\n", strlen(*p));  //error
	printf("%d\n", strlen(p[0]));  //error
	printf("%d\n", strlen(&p));    //δ֪�� &p��p�д������û��ʲôֱ�ӵĹ�ϵ
	printf("%d\n", strlen(&p + 1)); //δ֪��
	printf("%d\n", strlen(&p[0] + 1)); //5 ȡ����b�ĵ�ַ�����Ϊ5 
}


#include<stdio.h>
int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));  //48 �������飬��СΪ 48
	printf("%d\n", sizeof(a[0][0]));  //4 ��һ��Ԫ�صĴ�С
	printf("%d\n", sizeof(a[0]));     //16 ��һ�е������������������ڲ���
	//��ʾ��һ�еĴ�С
	printf("%d\n", sizeof(a[0] + 1));  //4 a[0]�����Ԫ�صĵ�ַ�����Դ�С����4
	printf("%d\n", sizeof(*(a[0] + 1)));  //4 ��ָ�Ĵ�С��ֵ������Ϊint
	printf("%d\n", sizeof(a + 1));  //4 a�Ƕ�ά�������������aΪ��Ԫ�صĵ�ַ����Ԫ�صĵ�ַΪ��һ�еĵ�ַ
	//��һ�еĵ�ַ��1���ǵڶ��еĵ�ַ ��ֻҪ�ǵ�ַ����С����4 
	printf("%d\n", sizeof(*(a + 1))); //16 �Եڶ��еĵ�ַ���н����õĲ������ҵ��˵ڶ��е�����
	//���Դ�СΪ16
	printf("%d\n", sizeof(&a[0] + 1)); //4 ���ǵ�ַ ȡ�����ǵڶ��еĵ�ַ
	printf("%d\n", sizeof(*(&a[0] + 1)));  //16 �ҳ��˵ڶ��е�����Ԫ��
	printf("%d\n", sizeof(*a));  //16 ��һ�н�����
	printf("%d\n", sizeof(a[3]));  //16 //��ȻԽ���ˣ����ǲ���Ӱ�죬�������һ�еĴ�С
}

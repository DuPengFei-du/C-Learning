/*
��д������
unsigned int reverse_bit(unsigned int value)
��������ķ���ֵ��value�Ķ�����λģʽ������
��ת���ֵ
�磺
��32λ������25���ֵ�������и�λ
00000000000000000000000000011001
��ת�󣺣�2550136832��
10011000000000000000000000000000
���������� 2550136832

���ص�Ӧ�����޷��ŵ�����
д��unsigned int ��Ϊ��ϣ����ת������λ�Ƿ���λ��ϣ��������Чλ
����д��unsigned int ���͵�

˼·��(n>>i)&1���Եõ�������λ��ÿһλ��Ȼ����ȥ����Ȩ�أ�Ҳ����pow��2��31-i��
Ҳ�����൱�����һλ�͵�һλ����λ�ã��ͻ�õ����յĽ��
//*/
#include<stdio.h>
#include<math.h>
unsigned int reverse_bit(unsigned int n)
{
	unsigned int temp = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		temp += ((n >> i) & 1) * pow(2, 31 - i);
	}
	return temp;
}
int main()
{
	unsigned int num = 0;
	unsigned int ret = 0;
	(void)scanf("%d", &num);
	ret = reverse_bit(num);
	printf("%u", ret);
	return 0;
}


#include<stdio.h>
#include<math.h>
unsigned int reverse_bit(unsigned int n)
{
	unsigned int temp = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		temp += ((n >> i) & 1) * 1<<(31-i);
	}
	return temp;
}
int main()
{
	unsigned int num = 0;
	unsigned int ret = 0;
	(void)scanf("%d", &num);
	ret = reverse_bit(num);
	printf("%u", ret);
	return 0;
}


/*
��һ���ַ����������Ϊ"student a am i"
���㽫�ַ���������ݸ�Ϊ i am a student
Ҫ�󣺲���ʹ�ÿ⺯����
ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
*/

//��дʵ��reverse
#include<stdio.h>
int my_strlen(char* str1)
{
	char* temp = str1;
	while (*temp != '\0')
	{
		temp++;
	}
	return temp - str1;
}
void my_reverse(char* str)
{
	int i = 0;
	int len = my_strlen(str);
	for (i = 0; i < len / 2; i++)
	{
		char temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
	}
}
int main()
{
	char arr[] = "student a am i";
	printf("û�е��ù����ַ���Ϊ%s", arr);
	my_reverse(arr);
	printf("\n");
	printf("���ù����ַ���Ϊ%s",arr);
	return 0;
}


#include<stdio.h>
int my_strlen(char* str1)
{
	char* temp = str1;
	while (*temp != '\0')
	{
		temp++;
	}
	return temp - str1;
}


//������A�е����ݺ�����B�е����ݽ��н�����������һ����
#include<stdio.h>
void Swap(int* a, int* b,int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		int temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}
int main()
{
	int arrA[5] = { 1,3,5,7,9};
	int arrB[5] = { 2,4,6,8,10 };
	int i = 0;
	int len = sizeof(arrA) / sizeof(arrA[0]);
	Swap(arrA, arrB, len);
	for (i = 0; i < len; i++)
	{
		printf("%d", arrA[i]);
	}
	printf("\n");
	for (i = 0; i < len; i++)
	{
		printf("%d", arrB[i]);
	}
	return 0;
}


//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ���� ����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	int j = 0;
	(void)scanf("%d", &n);
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}
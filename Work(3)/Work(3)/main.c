/*
��дһ�����򣬿���һֱ���ռ����ַ�
�����Сд�ַ��������Ӧ��д�ַ�
����Ǵ�д�ַ����������Ӧ��Сд�ַ�
��������֣���ô�Ͳ����
*/
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


//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
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


#include<stdio.h>
//��ʼ��
void Init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 10;
	}
}
//��ӡ
void Print(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void Empty(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}
void Reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int temp = arr[left];
		arr[left]= arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}
int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Init(arr, sz);
	Print(arr, sz);
	Empty(arr, sz);
	Print(arr, sz);
	Reverse(arr, sz);
	return 0;
}


//��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
#include<stdio.h>
double Pow(int n, int k)
{
	if (k == 0)
		return 1;
	else if (k > 0)
		return n * Pow(n, k - 1);
	else     //----k<0�����
		return 1.0 / Pow(n, -k);
}
int main()
{
	int n = 0;
	int k = 0;
	double ret = 0.0;
	(void)scanf("%d %d", &n,&k);
	ret=Pow(n, k);
	printf("%lf", ret);
	return 0;
}


//дһ���ݹ麯��DigitSum(n),����һ���Ǹ����������������������֮��
//���磬����DigitSum(1729),��Ӧ�÷���1+7+2+9 ���ĺ�Ϊ19
#include<stdio.h>
int DigitSum(n)
{
	if (n > 9)
		return DigitSum(n / 10) + DigitSum(n % 10);
	else
		return n;
}
int main()
{
	int n = 0;
	int ret = 0;
	(void)scanf("%d", &n);
	ret = DigitSum(n);
	printf("%d", ret);
	//TDD----������������
	return 0;
}

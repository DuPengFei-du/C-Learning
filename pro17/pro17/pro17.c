#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("**********************************\n");
	printf("********��ӭ������������Ϸ********\n");
	printf("********      1.play      ********\n");
	printf("********      0.exit      ********\n");
	printf("**********************************\n");
}
void game()
{
	//�������������
	//Ȼ����в�����
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;//���ɵ��������1-100֮��
	while (1)
	{
		printf("�������\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");

		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��");
		}
	} while (input);
}

#include<stdio.h>
int main()
{
again:
	printf("hehe\n");
	goto again;
	return 0;
}


//�ػ�����
#include<stdio.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ��Խ���60s֮��ػ�,���������������ȡ���ػ�\n");
	scanf("%s", input);
	if (0 == strcmp(input, "������"))
	{
		system("shutdown -a");
	}
	else
	{
		printf("�����������������\n");
		goto again;
	}
	return 0;
}


//�������ַ�����Ҫ���ҳ����е������
/*
����˼·:������һ����ά���ַ�����str����СΪ3x20������3��20�У�ÿһ�п�������20���ַ���
ÿһ�д��һ���ַ������˶�ά����Ĵ洢���������ʾ��
str[0]:C h i n a \0 \0 \0 \0 \0 \0 \0 \0 \0 \0 \0 \0 \0 \0 \0
str[1]:J a p a n \0 \0 \0 \0 \0 \0 \0 \0 \0 \0 \0 \0 \0 \0 \0
str[2]:I n d i a \0 \0 \0 \0 \0 \0 \0 \0 \0 \0 \0 \0 \0 \0 \0
�������������԰�str[0],str[1],str[2]����3��һά�ַ����飨���Ǹ���20��Ԫ�أ���
���԰�������ͬһά�����������д���������gets�����ֱ���������ַ���������3��һά�ַ�����
Ȼ�󾭹����������Ƚϣ��Ϳ��Եõ�ֵ����ߣ�Ȼ���������һά�ַ�����string��.
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[3][20];
	char string[20];
	int i = 0;
	for (i = 0; i < 3; i++)
		//gets(string[i]);
		if (strcmp(str[0], str[1]) > 0)
			strcpy(string, str[0]);
		else
			strcpy(string, str[1]);
	if (strcmp(str[2], string) > 0)
		strcpy(string, str[2]);
	printf("the largest string is %s\n", string);
	return 0;
}


//��ɸѡ����100֮�ڵ�����
/*
��νɸѡ����ָ����"������ɫ��ɸ��",��ȡ�ķ����ǣ���һ��ֽ��д��1-100 ȫ��������
Ȼ������ж������Ƿ�Ϊ�������ҳ�һ�����������Ͱ����ڵ������ʣ�µľ�������
��������������ʾ��
�Ȱ�1�ڵ�����Ϊ1��������
��2��������ĸ��������ܰ�2���������ڵ��������ǰ�2�ı����ڵ�
��3��������ĸ���������3�ı���ȫ���ڵ�
�ֱ���4��5��������Ϊ��������Щ������ĸ��������������һֱ���е��ڳ�����������Ѿ�ȫ�����ڵ�Ϊֹ
��ʵ�Ͽ��Լ򻯣������Ҫ�ҵ�1~n��Χ�ڵ�������ֻ��Ҫ���е�����Ϊ������n��ȡ�����������ԣ�
�����1~50��ֻ����е���7��Ϊ��������

�ü��������⣬���Զ���һ�����飬a[1]~a[n]�ֱ������1~n����
�����������a��ĳһ��Ԫ�ص�ֵ�Ƿ���������ʹ������Ϊ0�����ʣ�µĲ�Ϊ0�ľ�������
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i, j, a[101], n;
	for (i = 1; i <= 100; i++)
		a[i] = i;//ʹ��a[1]~a[100]��ֵΪ1~100
	a[1] = 0;//���ڵ�a[1]
	for (i = 2; i < sqrt(100); i++)
		for (j = i + 1; j <= 100; j++)
		{
			if (a[i] != 0 && a[j] != 0)
				if (a[j] % a[i] == 0)//���������������������ڵ�
					a[j] = 0;
		}
	printf("\n");
	for (i = 2, n = 0; i <= 100; i++)
	{
		if (a[i] != 0)
		{
			printf("%5d ", a[i]);
			n++;
		}
		if (n == 10)
		{
			printf("\n");
			n = 0;
		}
	}
	printf("\n");
	return 0;
}


//дһ�������ж�һ�����ǲ�������
#include<stdio.h>
int is_prime(int n)
{
	int i = 0;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}


//дһ���������ж��Ƿ�Ϊ����
#include<stdio.h>
int is_LeapYear(int n)
{
	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
	{
		return 1;
	}
	else
		return 0;
}
int main()
{
	int i = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if (is_LeapYear(i) == 1)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}


//дһ�����ֲ��ҵĺ���
#include<stdio.h>
int BinarySearch(int arr[], int sz, int key)
{
	int left = 0;
	int right = sz;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
	int key = 18;
	int ret = 0;
	ret = BinarySearch(arr, sz, key);
	if (ret == -1)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ���,�±���%d", ret);
	}
	return 0;
}



//��ѡ�񷨶�10����������
/*
ѡ�������˼·���£�
����10��Ԫ�أ�a[1]-a[10],��a[1]��a[2]-a[10]���бȽϣ���a[1]��a[2]-a[10]��С���򲻽��н����������κβ�����
��a[2]-a[10]����һ�����ϱ�a[1]С����������С��һ��������Ϊa[i]) ��a[1]��������ʱa[1]�д����10��������С��һ��
�ڶ��ֽ�a[2]��a[3]-a[10]���бȽϣ���ʣ��9�����е���С��һ��a[i]��a[2]���н���
��ʱa[2]�д����10�����еڶ�С��һ�������������ƣ����ƽ���9�ֱȽϣ��ͻ��ź�����
*/
#include<stdio.h>
int main()
{
	int i, j, min, temp, a[10];
	for (i = 1; i <= 10; i++)
	{
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);//����10����
	}
	printf("\n");
	printf("the orginal numbers ��\n");
	for (i = 1; i <= 10; i++)
		printf("%5d", a[i]);
	printf("\n");
	for (i = 1; i <= 9; i++)
	{
		min = i;
		for (j = i + 1; j <= 10; j++)
			if (a[min] > a[j]) min = j;
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
	printf("the sorted numbers :\n");
	for (i = 1; i <= 10; i++)
		printf("%5d", a[i]);
	printf("\n");
	return 0;
}


//��һ��3x3����Խ���Ԫ�صĺ�
#include<stdio.h>
int main()
{
	int arr[3][3], i, j;
	int sum = 0;
	int sum1 = 0;
	int sum2 = 0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			scanf("%d", &arr[i][j]);
	for (i = 0; i < 3; i++)
		sum1 = arr[0][0] + arr[1][1] + arr[2][2];
	for (i = 0; i < 3; i++)
		sum2 = arr[0][2] + arr[1][1] + arr[2][0];
	sum = sum1 + sum2;
	printf("%d\n", sum);
	return 0;
}
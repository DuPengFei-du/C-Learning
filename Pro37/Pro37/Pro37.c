#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>
//
//int main()
//{
//	int arr1[] = {1,3,5,7,9,11};
//	int arr2[] = {2,4,6,8,0,12};
//	int tmp = 0;
//	int i = 0;
//	int sz = sizeof(arr1)/sizeof(arr1[0]);
//	for(i=0; i<sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	//tmp = arr1;
//	//arr1 = arr2;
//	//arr2 = tmp;
//	system("pause");
//	return 0;
//}
//
//
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for(i=1; i<=100; i++)
//	{
//		sum  = sum + 1.0/i*flag;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int count = 0;//������
//
//	for(i=1; i<=100; i++)
//	{
//		if(i%10 == 9)
//		{
//			count++;
//		}
//		if(i/10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//
//	system("pause");
//	return 0;
//}
//
//

//
//int main()
//{
//	//��ӡ����
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);
//	//1.��ӡ�ϰ벿��
//	for(i=0; i<line; i++)
//	{
//		//��ӡһ��
//		//a. �ȴ�ӡ�ո�
//		int j = 0;
//		for(j=0; j<line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//b. ��ӡ*
//		for(j=0; j<2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//2.��ӡ�°벿��
//	for(i=0; i<line-1; i++)
//	{
//		//��ӡһ��
//		//a. �ո��ӡ
//		int j = 0;
//		for(j=0; j<=i; j++)
//		{
//			printf(" ");
//		}
//		//b. *�Ĵ�ӡ
//		for(j=0; j<2*(line-1-i)-1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	system("pause");
//	return 0;
//}

#include <math.h>
//
//int main()
//{
//	int i = 0;
//	for(i=0; i<=1000000; i++)
//	{
//		//�ж�i�Ƿ�Ϊˮ�ɻ���
//		//1. ����i�Ǽ�λ��
//		int count = 1;
//		int sum = 0;
//		int tmp = i;
//
//		while(tmp=tmp/10)
//		{
//			count++;
//		}
//		//2. ��ȡ��i��ÿһλ��������η��ͣ��ж�
//		//123
//		tmp = i;
//		while(tmp)
//		{
//			//sum = sum + pow(i%10, count);
//			sum += (int)pow(tmp%10, count);
//			tmp/=10;
//		}
//		if(sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	system("pause");
//	return 0;
//}
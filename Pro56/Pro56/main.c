#define _CRT_SECURE_NO_WARNINGS 1


//��дһ��������ʵ��n��k�η����õݹ�ʵ��
//#include<stdio.h>
//int my_pow(int n,int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k == 1)
//		return n;
//	else
//		return n * my_pow(n,k-1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int ret = 0;
//	(void)scanf("%d %d", &n,&k);
//	ret = my_pow(n,k);
//	printf("%d", ret);
//	return 0;
//}


//�⺯����pow
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int ret = 0;
//	(void)scanf("%d %d", &n, &k);
//	ret = pow(n, k);
//	printf("%d", ret);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//����Ԫ�ص�����
//#include<stdio.h>
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left]= arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Reverse(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
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
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//	//���õ�����������
//}


////��������Ϸ��ʵ��
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("***********************\n");
//	printf("**��ӭ������������Ϸ!**\n");
//	printf("***      1.play      ***\n");
//	printf("***      0.exit      ***\n");
//	printf("***********************\n");
//}
//void game()
//{
//	int ret =0;
//	int guess = 0;
//	ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("������²������:>");
//		(void)scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´��ˣ�\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С�ˣ�\n");
//		}
//		else
//		{
//			printf("�¶��ˣ�\n");
//			break;
//		}
//	}
//}
//void test()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		(void)scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�����������������\n");
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//void menu()
//{
//	printf("**************************\n");
//	printf("** ��ӭ������������Ϸ�� **\n");
//	printf("*****     1.play     *****\n");
//	printf("*****     0.exit     *****\n");
//	printf("**************************\n");
//}
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("���������²������:>");
//		(void)scanf("%d", &guess);
//		if (guess > ret)
//			printf("�´��ˣ�\n");
//		else if (guess < ret)
//			printf("��С�ˣ�\n");
//		else
//		{
//			printf("�¶���!\n");
//			break;
//		}
//	}
//}
//void test()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
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
//			printf("�˳���Ϸ!\n");
//			break;
//		default:
//			printf("�����������������!\n");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}


//���ֲ���
//#include<stdio.h>
//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//	int k = 17;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
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
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	(void)scanf("%d %d", &a, &b);
//	c = a + b;
//	printf("%d\n", c);
//	return 0;
//}


//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	(void)scanf("%d %d", &a, &b);
//	c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}


//����n�Ľ׳�
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int sum = 1;
//	(void)scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum * i;
//	}
//	printf("%d", sum);
//	return 0;
//}


//ģ���û���¼
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		(void)scanf("%s", password);
//		if (0 == strcmp(password, "123456"))
//		{
//			printf("��¼�ɹ���");
//			break;
//		}
//		else
//			printf("������������µ�¼��\n");
//	}
//	if (i == 3)
//		printf("�޷���¼��\n");
//	return 0;
//}


//�ҳ��������еĽϴ���
//#include<stdio.h>
//int MAX(int a, int b)
//{
//	return a > b ? a : b;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	(void)scanf("%d %d", &a, &b);
//	c = MAX(a, b);
//	printf("%d", c);
//	return 0;
//}


//���ַ�������
//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}
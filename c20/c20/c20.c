//#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	return 0;
//}


//�ж��Ǵ�˻���С��
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int check_system()
//{
//	int i = 1;
//	return (*(char* ) & i);
//}
//int main()
//{
//	int ret = check_system();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}


//������
//������
//�ṹ��Ĵ���
//#include<stdio.h>
//struct Student
//{
//	char name[20];
//	int age;
//};
//������Ĵ���
//���������������

//#include<stdio.h>
//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u; //u��������ı���
//	printf("%d", sizeof(u));//4���ֽ�
//	return 0;
//}


//#include<stdio.h>
//int check_system()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;//�ó���i�ĸ��ֽ��еĵ�һ���ֽ�
//}
//int main()
//{
//	int ret = check_system();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char a = -1;//-1
//	signed char b = -1;//-1
//	unsigned char c = -1;//255
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	return 0;
//}
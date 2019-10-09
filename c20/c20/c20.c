//#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	return 0;
//}


//判断是大端还是小端
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
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
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


//联合体
//共用体
//结构体的创建
//#include<stdio.h>
//struct Student
//{
//	char name[20];
//	int age;
//};
//共用体的创建
//创造的联合体类型

//#include<stdio.h>
//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u; //u是联合体的变量
//	printf("%d", sizeof(u));//4个字节
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
//	return u.c;//拿出了i四个字节中的第一个字节
//}
//int main()
//{
//	int ret = check_system();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
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
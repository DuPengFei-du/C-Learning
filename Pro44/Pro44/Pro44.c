// int main()
// {
// 	struct S s;
// 	return 0;
// }
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
////Á·Ï°4-½á¹¹ÌåÇ¶Ì×ÎÊÌâ
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S4));
//	return 0;
//}
//
//#pragma pack(1)
//
//struct S
//{
//	char c1;//0
//	//1
//	int a;//2-5
//	char c2;//6
//	//7
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}
//
//#pragma pack()
//
//
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//
////#define OffSetOf(s_type, mem) (int)&(((struct S*)0)->c1)
//
//
//int main()
//{
//	printf("%d\n", OffSetOf(struct S, c1));
//	//printf("%d\n",(int)&(((struct S*)0)->c1));
//
//	printf("%d\n", OffSetOf(struct S, a));
//	printf("%d\n", OffSetOf(struct S, c2));
//
//	return 0;
//}

//4-32
//2
//5
//10
//15-langfai
//4-32
//30
//2
//
//struct A 
//{
//	int _a: 2;
//	int _b: 5;
//	int _c: 10;
//	int _d: 30;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	return 0;
//}

struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};
int main()
{
	struct S s = { 0 };
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;

	return 0;
}
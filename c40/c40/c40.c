//闰年
//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	int i = 1000;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	printf("%d", count);
//	return 0;
//}


//封装成函数的求闰年
//#include<stdio.h>
//int is_leapyear(int n)
//{
//	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
//	{
//		return 1;
//	}
//	else
//		return -1;
//}
//int main()
//{
//	int i = 1000;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (is_leapyear(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	printf("%d", count);
//	return 0;
//}
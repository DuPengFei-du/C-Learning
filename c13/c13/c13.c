//数组元素的逆置
//#include<stdio.h>
//void Reverse(int arr[], int len)
//{
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	Reverse(arr, len);
//	for(i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//编写函数，实现N的K次方，使用递归来实现
//#include<stdio.h>
//double Pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else if (k >=1)
//	{
//		return n * Pow(n, k - 1);
//	}
//	else
//	{
//		return 1.0 / ((Pow(n, -k)));
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	double ret = 0;
//	scanf("%d %d", &n, &k);
//	ret = Pow(n, k);
//	printf("%lf", ret);
//	return 0;
//}


//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和， 
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//#include<stdio.h>
//int Digitsum(int n)
//{
//	if (n > 9)
//	{
//		return Digitsum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	//TDD------测试驱动开发
//	unsigned int n = 0;
//	int sum = 0;
//	scanf("%u", &n);
//	sum = Digitsum(n);
//	printf("%d", sum);
//	return 0;
//}


//实现N的K次方
//#include<stdio.h>
//double Pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else if (k >= 1)
//	{
//		return n * Pow(n, k - 1);
//	}
//	else
//	{
//		return 1.0 / Pow(n, -k);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	double ret = 0.0;
//	scanf("%d %d", &n, &k);
//	ret = Pow(n, k);
//	printf("%lf", ret);
//	return 0;
//}
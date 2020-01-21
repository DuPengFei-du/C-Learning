//int is_leap_year(int y)
//{
//	if(((y%4==0)&&(y%100!=0))||(y%400==0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int is_leap_year(int y)
//{
//	return ((y%4==0)&&(y%100!=0))||(y%400==0);
//}
//
//int main()
//{
//	int year=0;
//	for(year=1000; year<=2000; year++)
//	{
//		if(is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz-1;
//
//	while(left<=right)
//	{
//		//int mid = (left+right)/2;
//		int mid = left+(right-left)/2;
//
//		if(arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else if(arr[mid] > k)
//		{
//			right = mid-1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if(ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是:%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}
//
//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "hello";
//	int len = strlen(arr);
//	printf("%d\n", len);
//
//	printf("%d\n", strlen(arr));
//	system("pause");
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//4321
//	system("pause");
//	return 0;
//}

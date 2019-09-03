#include<stdio.h>
int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3 };
	printf("%d", arr[1]);
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


//打印数组元素的地址
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("a[%d]=%p\n", i, &arr[i]);
	}
	return 0;
}
//模拟实现冒泡排序
#include<stdio.h>
void Swap(char* buf1, char* buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char temp = *buf1;
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2++;
	}
}
void my_BubbleSort(void* base, int sz, int width, int (*cmp)(const void* elem1, const void* elem2))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			//传给cmp的是要交换的两个元素的地址
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//进行交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}
void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int cmp_int(const void* elem1, const void* elem2)
{
	return *(int*)elem1 - *(int*)elem2;
}
void test()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_BubbleSort(arr, sz,sizeof(arr[0]),cmp_int);
	Print(arr, sz);
}
int main()
{
	test();
	return 0;
}

//一维数组
#include<stdio.h>
int main()
{
	int a[] = { 1,2,3,4 };
	printf("%zd\n", sizeof(a));//16  a作为数组名，单独放在sizeof内部，表示的是整个数组，所以大小为4*4=16
	printf("%zd\n", sizeof(a + 0));//4  a+0，此时a代表数组首元素地址，首元素地址+0还是首元素的地址，是地址就是四个字节
	printf("%zd\n", sizeof(*a));//4  a是数组名，表示首元素的地址，*a就是解引用就是首元素，首元素是1，是整形，那么就是4个字节
	printf("%zd\n", sizeof(a + 1));//4  a+1和a+0道理是一样的，a+1就为下标为1的元素的地址，也就是第二个元素的地址
	printf("%zd\n", sizeof(a[1]));//4  下标为1的大小，第二个元素的大小
	printf("%zd\n", sizeof(&a));//4   这个地方的a代表整个数组 &a取出的就是整个数组的地址，那他也是地址，如果是地址的话，那么就是四个字节,所有的指针/地址都是4/8个字节，与平台是32位或者64位有关，与类型没有任何的关系
	printf("%zd\n", sizeof(*&a));  //16  &a取出整个数组的地址，然后解引用，得到了整个数组的大小，那么就是16，先取地址，再去解引用
	printf("%zd\n", sizeof(&a + 1));//4    把整个数组全部跳过
	printf("%zd\n", sizeof(&a[0]));//4  第一个元素的地址
	printf("%zd\n", sizeof(&a[0]+1));//4  下标为1元素的地址
	return 0;
}


//字符数组
#include<stdio.h>
int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));//6  看数组的大小，数组中没有放置\0,就一定是6
	printf("%d\n", sizeof(arr+0));//4首元素的地址，只要是地址，那么就是四个字节
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4
	printf("%d\n", sizeof(&arr+1));//4
	printf("%d\n", sizeof(&arr[0])+1);//4
}


//二分查找
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标为%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}


//将二分查找封装成函数
#include<stdio.h>
int BinarySearch(int arr[], int key, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int key = 17;
	int ret = 0;
	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
	ret = BinarySearch(arr, key, sz);
	if (ret == -1)
		printf("找不到\n");
	else
		printf("找到了，下标是%d ", ret);
	return 0;
}


//从两端向中间汇聚
#include<stdio.h>
int my_strlen(const char* str)
{
	if(*str=='\0')
	{
		return 0;
	}
	else
	{
		return 1 + my_strlen(str + 1);
	}
}
int main()
{
	char arr1[] = "Hello world";
	char arr2[] = "###########";
	int left = 0;
	int right = my_strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
	}
	printf("%s", arr2);
	return 0;
}
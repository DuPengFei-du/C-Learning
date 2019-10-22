//ģ��ʵ��ð������
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
			//����cmp����Ҫ����������Ԫ�صĵ�ַ
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//���н���
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

//һά����
#include<stdio.h>
int main()
{
	int a[] = { 1,2,3,4 };
	printf("%zd\n", sizeof(a));//16  a��Ϊ����������������sizeof�ڲ�����ʾ�����������飬���Դ�СΪ4*4=16
	printf("%zd\n", sizeof(a + 0));//4  a+0����ʱa����������Ԫ�ص�ַ����Ԫ�ص�ַ+0������Ԫ�صĵ�ַ���ǵ�ַ�����ĸ��ֽ�
	printf("%zd\n", sizeof(*a));//4  a������������ʾ��Ԫ�صĵ�ַ��*a���ǽ����þ�����Ԫ�أ���Ԫ����1�������Σ���ô����4���ֽ�
	printf("%zd\n", sizeof(a + 1));//4  a+1��a+0������һ���ģ�a+1��Ϊ�±�Ϊ1��Ԫ�صĵ�ַ��Ҳ���ǵڶ���Ԫ�صĵ�ַ
	printf("%zd\n", sizeof(a[1]));//4  �±�Ϊ1�Ĵ�С���ڶ���Ԫ�صĴ�С
	printf("%zd\n", sizeof(&a));//4   ����ط���a������������ &aȡ���ľ�����������ĵ�ַ������Ҳ�ǵ�ַ������ǵ�ַ�Ļ�����ô�����ĸ��ֽ�,���е�ָ��/��ַ����4/8���ֽڣ���ƽ̨��32λ����64λ�йأ�������û���κεĹ�ϵ
	printf("%zd\n", sizeof(*&a));  //16  &aȡ����������ĵ�ַ��Ȼ������ã��õ�����������Ĵ�С����ô����16����ȡ��ַ����ȥ������
	printf("%zd\n", sizeof(&a + 1));//4    ����������ȫ������
	printf("%zd\n", sizeof(&a[0]));//4  ��һ��Ԫ�صĵ�ַ
	printf("%zd\n", sizeof(&a[0]+1));//4  �±�Ϊ1Ԫ�صĵ�ַ
	return 0;
}


//�ַ�����
#include<stdio.h>
int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));//6  ������Ĵ�С��������û�з���\0,��һ����6
	printf("%d\n", sizeof(arr+0));//4��Ԫ�صĵ�ַ��ֻҪ�ǵ�ַ����ô�����ĸ��ֽ�
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4
	printf("%d\n", sizeof(&arr+1));//4
	printf("%d\n", sizeof(&arr[0])+1);//4
}


//���ֲ���
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
			printf("�ҵ��ˣ��±�Ϊ%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}


//�����ֲ��ҷ�װ�ɺ���
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
		printf("�Ҳ���\n");
	else
		printf("�ҵ��ˣ��±���%d ", ret);
	return 0;
}


//���������м���
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
/*int* float* char*----指针类型
所有指针的大小都是四个字节
指针类型在被解引用的时候决定了他到底有多大的权限
*/

#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = 10;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*p = 20;
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%d", &arr[9] - &arr[0]);
	return 0;
}

#include<stdio.h>
int my_strlen(char* str)
{
	char* cp = str;
	while (*cp != '\0')
	{
		cp++;
	}
	return cp - str;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);//首元素地址
	printf("%p\n", &arr[0]);//首元素地址
	printf("%p\n", &arr);//数组的地址
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int* p = arr;
	for (i = 0; i < 10; i++)
	{
		printf("%p->%p\n", &arr[i], p + i);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int* p = arr;
	for (i = 0; i < 10; i++)
	{
		arr[i] = 10;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 10;
	int* pa = &a;//pa称为一级指针变量，既然是变量，就可以取pa的地址
	int** ppa = &pa;//取pa的地址，这时候的ppa为二级指针变量，仍然可以取ppa的地址
	int*** pppa = &ppa;//三级指针已经够多了，不要在继续进行取地址了
}

#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr2[5] = { &a,&b,&c };
	printf("%d", *(arr2[1]));
	return 0;
}
#define  _CRT_SECURE_NO_WARNINGS 1
//malloc动态内存申请
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
int main()
{
	//开辟10个整形的空间，原来的方法
	//int arr[10];
	//malloc开辟的空间也是连续的
	//用malloc来开辟空间
	int* p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		printf("%s", strerror(errno));
	}
	//开辟成功之后，将其初始值全部初始为1
	else
	{
		for (int i = 0; i < 10; i++)
		{
			*(p + i) = 10;
		}
		for (int i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	return 0;
}
//申请的内存不还回去，别人也不能用，这样子的情况就被称为内存泄露
//malloc叫申请空间，free叫释放空间，malloc和free必须成对出现
//在不用这段空间的时候，就把这段空间释放掉

#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
int main()
{
	//开辟10个整形的空间，原来的方法
	//int arr[10];
	//malloc开辟的空间也是连续的
	//用malloc来开辟空间
	int* p = (int*)malloc(10 * sizeof(int));
	//申请完空间之后，一定要判断指针的有效性
	if (p == NULL)
	{
		printf("%s", strerror(errno));
	}
	//开辟成功之后，将其初始值全部初始为1
	else
	{
		for (int i = 0; i < 10; i++)
		{
			*(p + i) = 10;
		}
		for (int i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	free(p);//释放动态开辟的内存，p里面就放的是那段空间的起始地址
	p = NULL;
	/*
	p现在指向一块空间，现在把p指向的那段空间释放掉，那段空间就不属于我了
	虽然那段空间被释放掉了，但是p还是记得那段空间的地址
	free(p)不会把p置为空指针，没有哪个能力，因为是值传递的过程
	p不可能被该掉，所以p要被赋成空指针。
	*/
	return 0;
}


////申请空间，也有可能失败，所以申请完空间之后，一定要判断指针的有效性
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
int main()
{
	//开辟10个整形的空间，原来的方法
	//int arr[10];
	//malloc开辟的空间也是连续的
	//用malloc来开辟空间
	int* p = (int*)malloc(INT_MAX);
	//申请完空间之后，一定要判断指针的有效性
	if (p == NULL)
	{
		printf("%s", strerror(errno));
	}
	//开辟成功之后，将其初始值全部初始为1
	else
	{
		for (int i = 0; i < 10; i++)
		{
			*(p + i) = 10;
		}
		for (int i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	free(p);//释放动态开辟的内存，p里面就放的是那段空间的起始地址
	p = NULL;
	/*
	p现在指向一块空间，现在把p指向的那段空间释放掉，那段空间就不属于我了
	虽然那段空间被释放掉了，但是p还是记得那段空间的地址
	free(p)不会把p置为空指针，没有哪个能力，因为是值传递的过程
	p不可能被该掉，所以p要被赋成空指针。
	*/
	return 0;
}


//calloc
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
int main()
{
	int* p = (int*)calloc(10, sizeof(int));
	//申请失败
	if (p == NULL)
	{
		printf("%s", strerror(errno));
	}
	//申请成功
	else
	{
		for (int i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	free(p);
	return 0;
}



#include<errno.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
	int* ptr = NULL;
	int* p = (int*)calloc(5, sizeof(int));
	if (p == NULL)
	{
		printf("%s", strerror(errno));
	}
	//申请成功
	else
	{
		for (int i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
		ptr = (int*)realloc(p, 10 * sizeof(int));
		if (ptr != NULL)
		{
			p = ptr;
		}
		free(p);
		p = NULL;
	}
	return 0;
}
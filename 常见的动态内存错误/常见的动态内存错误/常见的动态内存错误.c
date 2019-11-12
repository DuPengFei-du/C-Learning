#define  _CRT_SECURE_NO_WARNINGS 1


//常见的动态内存错误
#include<stdio.h>
int main()
{
	int* p = (int*)malloc(INT_MAX / 4);
	*p = 20;//如果p是空值，就会出现问题
	free(p);
}


//对动态开辟空间的越界访问
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
int main()
{
	int* p = (int*)calloc(5, sizeof(int));
	if (p == NULL)
	{
		printf("%s", strerror(errno));
	}
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


//释放一部分
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
int main()
{
	int* p = (int*)calloc(5, sizeof(int));
	if (p == NULL)
	{
		printf("%s", strerror(errno));
	}
	else
	{
		for (int i = 0; i < 3; i++)
		{
			printf("%d ", *p++);
		}
	}
	free(p);
	return 0;
}



//对同一块动态内存多次释放
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
int main()
{
	int* p = (int*)calloc(5, sizeof(int));
	if (p == NULL)
	{
		printf("%s", strerror(errno));
	}
	else
	{
		for (int i = 0; i < 5; i++)
		{
			printf("%d ", *p++);
		}
	}
	free(p);
	free(p);
	return 0;
}

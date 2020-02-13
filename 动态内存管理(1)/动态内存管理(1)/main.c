#define _CRT_SECURE_NO_WARNINGS 1


//动态内存管理
#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	//如果想要开辟一个10个整形大小的空间
	//原先可以这么开辟：
	//int arr[10];
	//现在利用malloc函数开辟空间就是
	int* p = (int*)malloc(10 * sizeof(int));
	//看是否开辟内存成功，就看他是不是NULL;
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (int i = 0; i < 10; i++)
		{
			*(p + i) = 10;
		}
		for (int i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
}


#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	//如果想要开辟一个10个整形大小的空间
	//原先可以这么开辟：
	//int arr[10];
	//现在利用malloc函数开辟空间就是
	int* p = (int*)malloc(10 * sizeof(int));
	//看是否开辟内存成功，就看他是不是NULL;
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (int i = 0; i < 10; i++)
		{
			*(p + i) = 10;
		}
		for (int i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	free(p);
	//释放完成之后，还需要做一件事情
	//要将p赋值成为空指针
	p = NULL;
	return 0;
}


#include<stdio.h>
#include<errno.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int* p = (int*)calloc(10,sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
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


#include<stdio.h>
#include<errno.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int* p = (int*)calloc(5,sizeof(int));
	int* ptr = realloc(p, 10 * sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		for (int i = 0; i < 5; i++)
		{
			printf("%d ", *(p + i));
		}
		ptr = realloc(p, 10 * sizeof(int));
		if (ptr != NULL)
			p = ptr;
     free(p);
	 p = NULL;
	}
	return 0;
}



//常见的动态内存错误
//对空指针的解引用操作
#include<stdio.h>
void test()
{
	int* p = (int*)malloc(INT_MAX / 4);
	*p = 20;
	free(p);
}
int main()
{
	test();
	return 0;
}


对动态开辟空间的越界访问
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
int main()
{
	int* ptr = NULL;
	int* p = (int*)calloc(5, sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p+i));
		}
		free(p);
		p = NULL;
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	int* p = &a;
	free(p);
	p = NULL;
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
int main()
{
	int* ptr = NULL;
	int* p = (int*)calloc(5, sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 3; i++)
		{
			printf("%d ", *p++);
		}
		free(p);
		p = NULL;
	}
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
int main()
{
	int* ptr = NULL;
	int* p = (int*)calloc(5, sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			printf("%d ", *(p+i));
		}
		free(p);
		free(p);
		//多次释放，造成错误
	}
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
int main()
{
	while (1)
		malloc(1);
	return 0;
}
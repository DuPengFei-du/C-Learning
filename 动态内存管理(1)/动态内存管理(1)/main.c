#define _CRT_SECURE_NO_WARNINGS 1


//��̬�ڴ����
#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	//�����Ҫ����һ��10�����δ�С�Ŀռ�
	//ԭ�ȿ�����ô���٣�
	//int arr[10];
	//��������malloc�������ٿռ����
	int* p = (int*)malloc(10 * sizeof(int));
	//���Ƿ񿪱��ڴ�ɹ����Ϳ����ǲ���NULL;
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
	//�����Ҫ����һ��10�����δ�С�Ŀռ�
	//ԭ�ȿ�����ô���٣�
	//int arr[10];
	//��������malloc�������ٿռ����
	int* p = (int*)malloc(10 * sizeof(int));
	//���Ƿ񿪱��ڴ�ɹ����Ϳ����ǲ���NULL;
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
	//�ͷ����֮�󣬻���Ҫ��һ������
	//Ҫ��p��ֵ��Ϊ��ָ��
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



//�����Ķ�̬�ڴ����
//�Կ�ָ��Ľ����ò���
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


�Զ�̬���ٿռ��Խ�����
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
		//����ͷţ���ɴ���
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
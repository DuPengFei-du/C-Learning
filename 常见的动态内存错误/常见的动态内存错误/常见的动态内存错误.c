#define  _CRT_SECURE_NO_WARNINGS 1


//�����Ķ�̬�ڴ����
#include<stdio.h>
int main()
{
	int* p = (int*)malloc(INT_MAX / 4);
	*p = 20;//���p�ǿ�ֵ���ͻ��������
	free(p);
}


//�Զ�̬���ٿռ��Խ�����
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


//�ͷ�һ����
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



//��ͬһ�鶯̬�ڴ����ͷ�
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

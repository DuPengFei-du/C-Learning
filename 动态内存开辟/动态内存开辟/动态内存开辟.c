#define  _CRT_SECURE_NO_WARNINGS 1
//malloc��̬�ڴ�����
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
int main()
{
	//����10�����εĿռ䣬ԭ���ķ���
	//int arr[10];
	//malloc���ٵĿռ�Ҳ��������
	//��malloc�����ٿռ�
	int* p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		printf("%s", strerror(errno));
	}
	//���ٳɹ�֮�󣬽����ʼֵȫ����ʼΪ1
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
//������ڴ治����ȥ������Ҳ�����ã������ӵ�����ͱ���Ϊ�ڴ�й¶
//malloc������ռ䣬free���ͷſռ䣬malloc��free����ɶԳ���
//�ڲ�����οռ��ʱ�򣬾Ͱ���οռ��ͷŵ�

#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
int main()
{
	//����10�����εĿռ䣬ԭ���ķ���
	//int arr[10];
	//malloc���ٵĿռ�Ҳ��������
	//��malloc�����ٿռ�
	int* p = (int*)malloc(10 * sizeof(int));
	//������ռ�֮��һ��Ҫ�ж�ָ�����Ч��
	if (p == NULL)
	{
		printf("%s", strerror(errno));
	}
	//���ٳɹ�֮�󣬽����ʼֵȫ����ʼΪ1
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
	free(p);//�ͷŶ�̬���ٵ��ڴ棬p����ͷŵ����Ƕοռ����ʼ��ַ
	p = NULL;
	/*
	p����ָ��һ��ռ䣬���ڰ�pָ����Ƕοռ��ͷŵ����Ƕοռ�Ͳ���������
	��Ȼ�Ƕοռ䱻�ͷŵ��ˣ�����p���Ǽǵ��Ƕοռ�ĵ�ַ
	free(p)�����p��Ϊ��ָ�룬û���ĸ���������Ϊ��ֵ���ݵĹ���
	p�����ܱ��õ�������pҪ�����ɿ�ָ�롣
	*/
	return 0;
}


////����ռ䣬Ҳ�п���ʧ�ܣ�����������ռ�֮��һ��Ҫ�ж�ָ�����Ч��
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
int main()
{
	//����10�����εĿռ䣬ԭ���ķ���
	//int arr[10];
	//malloc���ٵĿռ�Ҳ��������
	//��malloc�����ٿռ�
	int* p = (int*)malloc(INT_MAX);
	//������ռ�֮��һ��Ҫ�ж�ָ�����Ч��
	if (p == NULL)
	{
		printf("%s", strerror(errno));
	}
	//���ٳɹ�֮�󣬽����ʼֵȫ����ʼΪ1
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
	free(p);//�ͷŶ�̬���ٵ��ڴ棬p����ͷŵ����Ƕοռ����ʼ��ַ
	p = NULL;
	/*
	p����ָ��һ��ռ䣬���ڰ�pָ����Ƕοռ��ͷŵ����Ƕοռ�Ͳ���������
	��Ȼ�Ƕοռ䱻�ͷŵ��ˣ�����p���Ǽǵ��Ƕοռ�ĵ�ַ
	free(p)�����p��Ϊ��ָ�룬û���ĸ���������Ϊ��ֵ���ݵĹ���
	p�����ܱ��õ�������pҪ�����ɿ�ָ�롣
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
	//����ʧ��
	if (p == NULL)
	{
		printf("%s", strerror(errno));
	}
	//����ɹ�
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
	//����ɹ�
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
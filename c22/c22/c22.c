//�����������ֵ�ֵ
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int temp;
	(void)scanf("%d %d", &a, &b);
	temp = a;
	a = b;
	b = temp;
	printf("%d %d", a, b);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
 	(void)scanf("%d %d", &a, &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d %d", a, b);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	(void)scanf("%d %d", &a, &b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d", a, b);
	return 0;
}


//���1-100֮�������
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 1)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("%d", count);
	return 0;
}


//�ҳ�10�����е������
int main()
{
	int a[9];
	int i = 0;
	int max = 0;
	printf("������ʮ������:\n");
	for (i = 0; i < 10; i++) 
	{
		(void)scanf("%d", &a[i]); 
	}
	max = a[0]; 
	for (i = 1; i < 10; i++)
	{
		if (max < a[i])
			max = a[i]; 
	}
	printf("max=%d\n ", max); 

	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 21,43,32,54,65,76,87,98,78,19 };
	int i = 0;
	int max=arr[0];
	for (i = 0; i < 10; i++)
	{
		if (arr[i] >max)
		{
			max = arr[i];
		}
	}
	printf("%d", max);
	return 0;
}


//�������������Լ��
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c;
	(void)scanf("%d %d", &a, &b);
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	printf("%d", b);
	return 0;
}


//�ҳ�10�����е������
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,11,12,13,7 };
	int i = 0;
	int max = arr[0];
	for (i = 0; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d", max);
	return 0;
}


//�ҳ������������Լ��
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c;
	(void)scanf("%d %d", &a, &b);
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	printf("%d", b);
	return 0;
}


//����������С������
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int m = 0;
	int n = 0;
	int z;
	int c;
	(void)scanf("%d %d", &a, &b);
	m = a;
	n = b;
	while (z = m % n)
	{
		m = n;
		n = z;
	}
	c = (a * b) / n;
	printf("%d %d", n,c);
	return 0;
}


//���ֲ���
#include<stdio.h>
int main()
{
	int arr[] = { 12,43,56,22,65,43,88,1,2,3 };
	int key = 56;
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
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
			printf("�ҵ��ˣ��±���%d",mid);
			break;
		}
		if (left > right)
		{
			printf("�Ҳ���\n");
		}
	}
	return 0;
}


//���ֲ��ҷ�װ��һ������
#include<stdio.h>
int Binary_Search(int arr[], int left,int right,int key)
{
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
			return mid;
	}
	return -1;
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int key = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	int ret = 0;
	ret=Binary_Search(arr, left,right, key);
	if (ret == -1)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ��±�Ϊ%d",ret);
	}
	return 0;
}



#define QueneSize 50
#include<stdio.h>
#include<stdlib.h>
typedef char Type; 
typedef struct
{
	int a;
	Type queue[QueneSize];
	int front;
	int rear;
	int tag;//��0��1������	
}SCQueue;
void InitQueue(SCQueue* S)//��ʼ������ 
{
	S->front = S->rear = 0;
	S->tag = 0;
}
int EmptyQueue(SCQueue* S)//�ж϶����Ƿ�Ϊ�ն��� 
{
	if (S->front == S->rear && S->tag == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int EnterQueue(SCQueue* S, Type a)
{
	/*if (S->front == S->rear && S->tag == 1)
	{
		return 0;
	}*/
	if (!EmptyQueue(S)) //����
		return 0;
	else
	{
		S->queue[S->rear] = a;
		S->rear = (S->rear + 1)% QueneSize;
		S->tag = 1;
		return 1;
	}
}
int FrontQueue(SCQueue* S)
{
	if (EmptyQueue(S)) return NULL;
	return S->queue[S->front];
}

int PopQueue(SCQueue* S)
{
	if (EmptyQueue(S))
	return 0;
	S->front = (S->front - 1) % QueneSize;
	return 1;
}

int main()
{
	SCQueue S;
	Type a = 0;
	InitQueue(&S);
	EmptyQueue(&S);
	EnterQueue(&S,a);
}
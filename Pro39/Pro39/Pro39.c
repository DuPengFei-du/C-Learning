//ð������
#include<stdio.h>
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz=sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


//������ʽ��ð������
#include<stdio.h>
void BubbleSort(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - i; i++)
	{
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


//���ֲ���
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
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
			printf("�ҵ��ˣ��±�Ϊ%d",mid);
			break;
		}
	}
	if (left > right)
		printf("�Ҳ���");
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int key = 6;
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < key)
			left = mid + 1;
		else if (arr[mid] > key)
			right = mid - 1;
		else
		{
			printf("�ҵ��ˣ��±�Ϊ:%d", mid);
			break;
		}
	}
	if (left > right)
		printf("�Ҳ���\n");
	return 0;
}


//����д���ֲ���
#include<stdio.h>
int BinarySearch(int arr[], int sz)
{
	int key = 8;
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
			return mid;
	}
	return -1;
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = BinarySearch(arr, sz);
	if (ret == -1)
	{
		printf("�Ҳ���\n");
	}
	else
		printf("�ҵ��ˣ��±�Ϊ:%d", ret);
	return 0;
}


#include<stdio.h>

typedef struct Node
{
	int val;
	struct Node* next;
}Node;

//��������ͷ��
Node* ListPushFront(Node* head, int val)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->val = val;
	node->next = head;
	return node;
}

void ListPrint(Node* head)
{
	for (Node* cur = head; cur != NULL; cur = cur->next)
	{
		printf("%d--->", cur->val);
	}
	printf("NULL\n");
}
void Test()
{
	//��ʼ������ֻ��Ҫ��һ�������ͷ���Ϳ�����
	Node* head = NULL;

	head = ListPushFront(head, 1);
	head = ListPushFront(head, 2);
	head = ListPushFront(head, 3);
	head = ListPushFront(head, 4);

	ListPrint(head);
}
int main()
{
	Test();
	return 0;
}
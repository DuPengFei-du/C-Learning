//���򲻴�ͷ��ѭ��
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef struct Node
{
	int val;
	struct Node* next;
}Node;

//����Ľṹ��
typedef struct List
{
	Node* head;
}List;

//��ʼ��
void InitList(List *list)
{
	list->head == NULL;
}

//����
void ListDestroy(List* list)
{
	//����ȥ�ͷ�
	Node* cur = list->head;
	while (cur != NULL)
	{
		Node* next = cur->next;
		free(cur);
		cur = next;
	}
}


//˫���ͷѭ��
#include<stdio.h>
#include<assert.h>

typedef struct Node
{
	int val;
	struct Node* next;
	struct Node* prev;
}Node;

//����Ľṹ��
typedef struct List
{
	Node* head;
}List;
//
////��ʼ��
void Init(List* list)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->val = 0;
	node->prev = node;
	node->next = node;
	list->head = node;
}
//
////ͷ��
void ListPushFront(List* list, int val)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->val = val;
	node->prev = list->head;
	node->next = list->head->next;
	list->head->next->prev = node;
	list->head->next = node;
}
//
////β��
void ListPushBack(List* list,int val)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->val = val;
	node->prev = list->head->prev;
	node->next = list->head;
	list->head->prev->next = node;
	list->head->prev = node;
}
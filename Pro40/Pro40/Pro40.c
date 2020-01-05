//单向不带头不循环
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef struct Node
{
	int val;
	struct Node* next;
}Node;

//链表的结构体
typedef struct List
{
	Node* head;
}List;

//初始化
void InitList(List *list)
{
	list->head == NULL;
}

//销毁
void ListDestroy(List* list)
{
	//遍历去释放
	Node* cur = list->head;
	while (cur != NULL)
	{
		Node* next = cur->next;
		free(cur);
		cur = next;
	}
}


//双向带头循环
#include<stdio.h>
#include<assert.h>

typedef struct Node
{
	int val;
	struct Node* next;
	struct Node* prev;
}Node;

//链表的结构体
typedef struct List
{
	Node* head;
}List;
//
////初始化
void Init(List* list)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->val = 0;
	node->prev = node;
	node->next = node;
	list->head = node;
}
//
////头插
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
////尾插
void ListPushBack(List* list,int val)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->val = val;
	node->prev = list->head->prev;
	node->next = list->head;
	list->head->prev->next = node;
	list->head->prev = node;
}
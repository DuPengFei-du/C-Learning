#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
	int val;
	struct Node* next;
	struct Node* random;
}Node;
//random的意思是可以指向链表中的任意结点，可以是前面，后面，自己，也可以为空
Node* copyRandomList(Node* head)
{
	Node* cur = head;
	while (cur != NULL)
	{
		Node* node = (Node*)malloc(sizeof(node));
		node->val = cur->val;
		node->next = cur->next;
		cur->next = node;
		//上述完成之后，链表变为 1 1 ，2 2，3 3 ，4 4；
	}
	cur = head;
	while (cur != NULL)
	{
		//空的话就可以直接复制了，不需要再去寻找了
		if (cur->random == NULL)
		{
			cur->next->random = NULL;
		}
		else
		{
			cur->next->random = cur->random->next;
		}
		cur = cur->next->next;
		//因为新老链表混在一起了，要想办法把新的链表和老的链表分隔开
	}
	cur = head;
	Node* newHead = head->next;
	while (cur != NULL)
	{
		Node* node = cur->next;
		cur->next = node->next;
		if (node->next != NULL)
		{
			node->next = node->next->next;
		}
		cur = cur->next;
	}
	return newHead;
}
int main(void)
{
	int val = 6;
	Node* head = NULL;
	copyRandomList(head);
	return 0;
}
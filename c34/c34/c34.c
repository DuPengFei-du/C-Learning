#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
	int val;
	struct Node* next;
	struct Node* random;
}Node;
//random����˼�ǿ���ָ�������е������㣬������ǰ�棬���棬�Լ���Ҳ����Ϊ��
Node* copyRandomList(Node* head)
{
	Node* cur = head;
	while (cur != NULL)
	{
		Node* node = (Node*)malloc(sizeof(node));
		node->val = cur->val;
		node->next = cur->next;
		cur->next = node;
		//�������֮�������Ϊ 1 1 ��2 2��3 3 ��4 4��
	}
	cur = head;
	while (cur != NULL)
	{
		//�յĻ��Ϳ���ֱ�Ӹ����ˣ�����Ҫ��ȥѰ����
		if (cur->random == NULL)
		{
			cur->next->random = NULL;
		}
		else
		{
			cur->next->random = cur->random->next;
		}
		cur = cur->next->next;
		//��Ϊ�����������һ���ˣ�Ҫ��취���µ�������ϵ�����ָ���
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
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define OK 1
typedef char elemtype;
typedef int  Status;
typedef struct LNode
{
	elemtype data;
	struct LNode* next;
} LNode, * LinkList;

Status InitList(LinkList& L)
{
	L = (LinkList)malloc(sizeof(LNode));
	if (!L)  exit(-1);
	L->next = NULL;
	return OK;
}

void ListInsert_L(LinkList& L, int i, elemtype e)
{
	LinkList p = L, q;
	//int i = 0;
	int j = 0;
	for (; p && j < i - 1; j++)
		p = p->next;
	if (p && j > i - 1)  return;
	q = (LinkList)malloc(sizeof(LNode));
	assert(q);
	q->data = e;
	if (p != NULL)
	{
		q->next = p->next;
		p->next = q;
	}
}

void ListPritnt_L(LinkList& L)
{
	LinkList p = L;
	for (p = p->next; p; p = p->next)
		printf("%c ", p->data);
	printf("\n");
}

Status ListLength(LinkList& L)
{
	int i = 0;
	LinkList p = L->next;
	while (p) {
		p = p->next;
		i++;
	}
	return i;
}

void ListSort_L1(LinkList& L) //交换结点的冒泡排序
{
	LinkList p, q, p_prior;
	int i, j, n;
	n = ListLength(L);
	for (i = 1; i < n; i++) {
		p = L->next;
		q = p->next;
		p_prior = L;
		for (j = 0; j < n - i; j++) {
			if ((p->data) > (q->data)) {
				p_prior->next = q;
				p->next = q->next;
				q->next = p;
				//交换后的更新结点情况和没交换时不同
				p_prior = q;
				q = p->next;
			}
			else {
				p_prior = p;
				p = q;
				q = q->next;
			}
		}
	}
	p = q = p_prior = NULL;
}

void ListSort_L2(LinkList& L) //直接交换内部元素
{
	LinkList p, q;
	elemtype temp;
	int i, j, n;
	n = ListLength(L);
	for (i = 1; i < n; i++)
		for (j = 0, p = L->next, q = p->next; j < n - i; p = q, q = q->next, j++) {
			if ((p->data) > (q->data)) {
				temp = p->data;
				p->data = q->data;
				q->data = temp;
			}
		}
	p = q = NULL;
}

void BubbleSort(struct LNode* head)
{
	struct LNode* p, * q, * tail;

	tail = NULL;

	while ((head->next->next) != tail) {
		p = head;
		q = head->next;
		while (q->next != tail) {
			if ((q->data) > (q->next->data)) {
				p->next = q->next;
				q->next = q->next->next;
				p->next->next = q;
				q = p->next;
			}
			q = q->next;
			p = p->next;
		}
		tail = q;
	}
}

LinkList ListMerge_L(LinkList& L1, LinkList& L2)
{
	LinkList p = L1->next, q = L2->next;
	LinkList L3;
	int i = 1;
	InitList(L3);
	while (p && q) {
		if (p->data < q->data) {
			ListInsert_L(L3, i++, p->data);
			p = p->next;
		}
		else if (p->data == q->data) {
			ListInsert_L(L3, i++, p->data);
			p = p->next;
			q = q->next;
		}
		else {
			ListInsert_L(L3, i++, q->data);
			q = q->next;
		}
	}
	while (p) {
		ListInsert_L(L3, i++, p->data);
		p = p->next;
	}
	while (q) {
		ListInsert_L(L3, i++, q->data);
		q = q->next;
	}
	return L3;
}

LinkList ListIntersect_L(LinkList& L1, LinkList& L2)
{
	LinkList p = L1->next, q = L2->next;
	LinkList L;
	int i = 1, flag = 0;
	InitList(L);
	while (p) {
		while (q) {
			if (p->data == q->data) {
				flag = 1;
				break;
			}
			q = q->next;
		}
		if (flag) {
			ListInsert_L(L, i++, q->data);
		}
		p = p->next;
		q = L2->next;
		flag = 0;
	}

	return L;
}


LinkList ListDifferent_L(LinkList& L1, LinkList& L2)
{

	LinkList p = L1->next, q = L2->next;
	LinkList L;
	int i = 1, flag = 1;
	InitList(L);
	while (p) {
		while (q) {
			if (p->data == q->data) {
				flag = 0;
				break;
			}
			q = q->next;
		}
		if (flag) {
			ListInsert_L(L, i++, p->data);
		}
		p = p->next;
		q = L2->next;
		flag = 1;
	}
	return L;
}

void menu()
{
	printf("************************\n");
	printf("******** 1.并集 ********\n");
	printf("******** 2.交集 ********\n");
	printf("******** 3.差集 ********\n");
	printf("******** 0.结束 ********\n");
	printf("************************\n");
}

int main()
{
	int input = 0;
	elemtype A[10] = { 'm','n','q','z' ,'l','o' };
	elemtype B[10] = { 'm','a','c','k','j','l','p' };
	int i;
	LinkList head1, head2, head3, head4, head5;
	InitList(head1);
	InitList(head2);
	for (i = 0; A[i]; i++) {
		ListInsert_L(head1, i + 1, A[i]);
	}
	printf("原 集 合A：");
	ListPritnt_L(head1);

	for (i = 0; B[i]; i++) {
		ListInsert_L(head2, i + 1, B[i]);
	}
	printf("原 集 合B：");
	ListPritnt_L(head2);

	ListSort_L1(head1);
	ListSort_L2(head2);
	printf("有序集合A：");
	ListPritnt_L(head1);
	printf("有序集合B：");
	ListPritnt_L(head2);
	do
	{
		menu();
		//again:
		printf("请选择:>\n");
		(void)scanf("%d", &input);
		switch (input)
		{
		case 1:
			head3 = ListMerge_L(head1, head2);
			printf("集合的并C：");
			ListPritnt_L(head3);
			break;
		case 2:
			head4 = ListIntersect_L(head1, head2);
			printf("集合的交C：");
			ListPritnt_L(head4);
			break;
		case 3:
			head5 = ListDifferent_L(head1, head2);
			printf("集合的差C：");
			ListPritnt_L(head5);
			break;
		case 0:
			break;
		default:
			printf("输入错误，请重新输入\n");
			//goto again;
		}
	} while (input != 0);
	return 0;
}


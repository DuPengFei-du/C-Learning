#include<stdlib.h>
#include<stdio.h>
struct ListNode
{
	int val;
	struct ListNode* next;
};
typedef struct ListNode Node;
//编写代码，以给定值x为基准将链表分割成两部分
//所有小于x的结点排在大于或等于x的结点之前
//给定一个链表的头指针ListNode *pHead ，请返回重新排列后的链表的头指针，注意分割以后
//保持原来数据的顺序不发生改变
//例如 9 5 2 7 3 6 4 8    x=5
Node* partition(Node* head, int x)
{
	//遍历head所代表的把链表，把每个值和x进行比较
	//如果小于x，尾插到一条小于x的链表当中
	//如果大于或者等于x，尾插到一条大于或者等于x的链表当中
	//先定义两个变量，代表大于x和小于x的链表

	Node* small = NULL;//小于x的链表
	Node* smallLast = NULL;//大于等于x链表的最后一个结点
	Node* bigLast = NULL;//小于x的链表的最后一个结点
	Node* big = NULL;//大于x的链表

	//通过cur来遍历原链表的每个结点
	Node* cur = head;
	while (cur != NULL)
	{
		if (cur->val < x)
		{
			//把cur尾插到small中
			/*
			让cur的下一个为空
			cur->next=NULL;
			分情况讨论
			如果small所在的链表是空链表，其实也就是把cur头插到small所在的链表
			让small指向cur当前所指向的结点，就是让small的值（地址）等于cur的值（地址）
			也就是 small=cur；
			如果small所在的链表不是空链表
			先找到small所在的链表的最后一个结点（有两种方法找到最后一个结点）
			1）从第一个结点遍历一直找到最后一个结点为止
			2）因为之前的最后一个结点是我们插入的，所以我们记录一下即可(此题所选用的方法）
			smallLast
			让smallLast的下一个结点变成cur
			small->last=cur;
			记录新的最后一个结点，最后一个结点为我们刚才尾插的结点cur
			small->last=cur;
			最后新的一个结点是谁？是之前最后一个结点的下一个结点
			smallLast=smallLast-next；
			上述两句话的意思是完全一样的，只是两种表示方式
			尾插完之后，让cur指向下一个结点
			让cur等于cur 的next
			cur=cur->next (看看之前有没有改过next）
			改过了，先记录一下Node *next=cur->next;
			*/
			Node* next = cur->next;//是让循环跑起来的过程
			cur->next = NULL;
			if (small == NULL)
			{
				small = cur;
			}
			else
			{
				smallLast->next = cur;
			}
			smallLast = cur;
			cur = next;
		}
		else
		{
			//把cur尾插到big中
			Node* next = cur->next;//是让循环跑起来的过程
			cur->next = NULL;
			if (big == NULL)
			{
				big = cur;
			}
			else
			{
				bigLast->next = cur;
			}
			bigLast = cur;
			cur = next;
		}
	}

	//一定要保证最终链表饿最后一个结点是NULL;
	//如果没有小于x的链表怎么办？
	if (small == NULL)
	{
		return big;
	}
	else
	{
		smallLast->next = big;
		return small;
	}
}
int main(void)
{
	Node* lianbiao = NULL;
	lianbiao->val = 6;
	lianbiao->next = NULL;
	partition(lianbiao, 6);
	return 0;
}

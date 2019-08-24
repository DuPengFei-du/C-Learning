#include<stdlib.h>
#include<stdio.h>
struct ListNode
{
	int val;
	struct ListNode* next;
};
typedef struct ListNode Node;
//��д���룬�Ը���ֵxΪ��׼������ָ��������
//����С��x�Ľ�����ڴ��ڻ����x�Ľ��֮ǰ
//����һ�������ͷָ��ListNode *pHead ���뷵���������к�������ͷָ�룬ע��ָ��Ժ�
//����ԭ�����ݵ�˳�򲻷����ı�
//���� 9 5 2 7 3 6 4 8    x=5
Node* partition(Node* head, int x)
{
	//����head������İ�������ÿ��ֵ��x���бȽ�
	//���С��x��β�嵽һ��С��x��������
	//������ڻ��ߵ���x��β�嵽һ�����ڻ��ߵ���x��������
	//�ȶ��������������������x��С��x������

	Node* small = NULL;//С��x������
	Node* smallLast = NULL;//���ڵ���x��������һ�����
	Node* bigLast = NULL;//С��x����������һ�����
	Node* big = NULL;//����x������

	//ͨ��cur������ԭ�����ÿ�����
	Node* cur = head;
	while (cur != NULL)
	{
		if (cur->val < x)
		{
			//��curβ�嵽small��
			/*
			��cur����һ��Ϊ��
			cur->next=NULL;
			���������
			���small���ڵ������ǿ�������ʵҲ���ǰ�curͷ�嵽small���ڵ�����
			��smallָ��cur��ǰ��ָ��Ľ�㣬������small��ֵ����ַ������cur��ֵ����ַ��
			Ҳ���� small=cur��
			���small���ڵ������ǿ�����
			���ҵ�small���ڵ���������һ����㣨�����ַ����ҵ����һ����㣩
			1���ӵ�һ��������һֱ�ҵ����һ�����Ϊֹ
			2����Ϊ֮ǰ�����һ����������ǲ���ģ��������Ǽ�¼һ�¼���(������ѡ�õķ�����
			smallLast
			��smallLast����һ�������cur
			small->last=cur;
			��¼�µ����һ����㣬���һ�����Ϊ���Ǹղ�β��Ľ��cur
			small->last=cur;
			����µ�һ�������˭����֮ǰ���һ��������һ�����
			smallLast=smallLast-next��
			�������仰����˼����ȫһ���ģ�ֻ�����ֱ�ʾ��ʽ
			β����֮����curָ����һ�����
			��cur����cur ��next
			cur=cur->next (����֮ǰ��û�иĹ�next��
			�Ĺ��ˣ��ȼ�¼һ��Node *next=cur->next;
			*/
			Node* next = cur->next;//����ѭ���������Ĺ���
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
			//��curβ�嵽big��
			Node* next = cur->next;//����ѭ���������Ĺ���
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

	//һ��Ҫ��֤������������һ�������NULL;
	//���û��С��x��������ô�죿
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

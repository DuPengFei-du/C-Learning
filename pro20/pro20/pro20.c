#include <stdio.h>
void swap(int a[], int i, int j) {
	int t = a[i];
	a[i] = a[j];
	a[j] = t;
}
void bubbleSort(int a[], int size) {
	// ѭ���� size ��
	for (int i = 0; i < size; i++) {
		// �����Ѿ�������
		int ordered = 1;

		// ����[size - i, size)
		// ����[0, size - i)
		// ð�ݲ��֣�ֻ�����������ڽ���
		for (int j = 0; j < size - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				swap(a, j, j + 1);
				// �����������������򲻳���
				ordered = 0;
			}
		}

		// ���������Ȼ����������˳���
		if (ordered == 1) {
			break;
		}
	}
}
int main() {
	int arr[5] = { 1,7,5,3,5 };
	bubbleSort(arr, 5);
	for (int i = 0; i < 5; i++)
		printf("%d\n", arr[i]);
	return 0;
}


#include<stdio.h> 
#include<stdlib.h>
struct Node
{
	int val;
	struct Node* next;
};
//������ĳ���
int getLength(struct Node* head)
{
	int length = 0;
	for (struct Node* cur = head; cur != NULL; cur = cur->next)
	{
		length++;
	}
	return length;
}
struct Node* getIntersectionNode(struct Node* headA, struct Node* headB)
{
	int lengthA = getLength(headA);
	int lengthB = getLength(headB);
	struct Node* longer = headA;
	struct Node* shorter = headB;
	int diff = lengthA - lengthB;
	if (lengthB < lengthA)
	{
		longer = headB;
		shorter = headA;
		diff = lengthB - lengthA;
	}
	for (int i = 0; i < diff; i++)
	{
		longer = longer->next;
	}
	//��ʹû�н���㣬���longer��shorterҲ��ͬʱ�ߵ�NULL������ѭ������������
	while (longer != shorter)//û�ҵ������
	{
		longer = longer->next;
		shorter = shorter->next;
	}
	return longer;
}
int main(void)
{
	struct Node* lianbiao = NULL;
	struct Node* headA = NULL;
	struct Node* headB = NULL;
	lianbiao->next = NULL;
	getIntersectionNode(headA, headB);
}
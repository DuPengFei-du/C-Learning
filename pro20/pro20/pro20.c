#include <stdio.h>
void swap(int a[], int i, int j) {
	int t = a[i];
	a[i] = a[j];
	a[j] = t;
}
void bubbleSort(int a[], int size) {
	// 循环了 size 次
	for (int i = 0; i < size; i++) {
		// 假设已经有序了
		int ordered = 1;

		// 有序：[size - i, size)
		// 无序：[0, size - i)
		// 冒泡部分，只在无序区间内进行
		for (int j = 0; j < size - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				swap(a, j, j + 1);
				// 发生交换，假设有序不成立
				ordered = 0;
			}
		}

		// 如果数组仍然有序，则可以退出了
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
//求链表的长度
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
	//即使没有交叉点，最后longer和shorter也会同时走到NULL，倒是循环条件不满足
	while (longer != shorter)//没找到结点呢
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
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
typedef struct Node
{
	char value;
	struct Node* left;	// ָ���ҵ�����
	struct Node* right;	// ָ���ҵ��Һ���
}	Node;

void BinTreeInit(Node** pbt)
{
	*pbt = NULL;
}

//���򴴽���
void PreCreatTree(Node** T)
{
	char ch = 0; (void)
		(void)scanf("%c", &ch);
	if (ch == '#')
		* T = NULL;
	else {
		*T = (Node*)malloc(sizeof(Node));
		assert(*T != NULL);
		(*T)->value = ch;
		PreCreatTree(&(*T)->left);
		PreCreatTree(&(*T)->right);
	}
}

int NoLeafCount(Node* T)/*��������з�Ҷ�ӽ�����Ŀ*/
{
	if (!T)
		return 0; /*����û��Ҷ��*/
	else if (!T->left && !T->right)
		return 0; /*Ҷ�ӽ��*/
	else
		return (1 + NoLeafCount(T->left) + NoLeafCount(T->right));/*��ǰ���+�������ķ�Ҷ����+�������ķ�Ҷ����*/
}


int main()
{
	Node* pn = NULL;
	int ret = 0;
	BinTreeInit(&pn);
	PreCreatTree(&pn);  //BDT##U##I#P#E##//

	ret = NoLeafCount(pn);
	printf("%d\n", ret);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
typedef struct Node
{
	char value;
	struct Node* left;	// 指向我的左孩子
	struct Node* right;	// 指向我的右孩子
}	Node;

void BinTreeInit(Node** pbt)
{
	*pbt = NULL;
}

//先序创建树
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

int NoLeafCount(Node* T)/*求二叉树中非叶子结点的数目*/
{
	if (!T)
		return 0; /*空树没有叶子*/
	else if (!T->left && !T->right)
		return 0; /*叶子结点*/
	else
		return (1 + NoLeafCount(T->left) + NoLeafCount(T->right));/*当前结点+左子树的非叶子数+右子树的非叶子数*/
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
#include<stdio.h>
#include<assert.h>
#include<time.h>
#define default_type int
#define default_capacity 99
typedef struct seqlist
{
	default_type* data;
	int sz;
	int capacity;
}seqlist;

void creatspace(seqlist* sq, int cap)
{
	sq->sz = 0;
	int num = 0;
	srand((unsigned int)time(NULL));
	sq->capacity = cap > default_capacity ? cap : default_capacity;
	default_type* tmp = (default_type*)malloc(sizeof(default_type) * sq->capacity);
	assert(tmp != NULL);
	sq->data = tmp;
	num = sq->capacity;

	while (num)
	{
		sq->data[sq->capacity - num] = rand() % 100;
		sq->sz++;
		--num;
	}
}

int cmp(const void* a, const void* b)
{
	return *((default_type*)a) > * ((default_type*)b);
}

void seqlistQsort(seqlist* sq)
{
	qsort((void*)sq->data, sq->sz, sizeof(default_type), cmp);
}

int binarysearch(seqlist* sq)
{
	int dest = 0;
	int i = -1;  //��¼Ŀ��ֵ�������λ��
	int lowIndex = 0; //��С����
	int highIndex = sq->sz - 1; // �������
	printf("��������Ʒ�ļ۸�:>\n");
	(void)scanf("%d", &dest);
	while (lowIndex <= highIndex)
	{
		//�����м�����
		int mid = (highIndex + lowIndex) / 2;
		//�м�ֵ
		int value = sq->data[mid];
		//����ҳ���ֵ��Ŀ��ֵ���
		if (value == dest)
		{
			return mid;
		}
		// ���ֵС��Ŀ��ֵ,����С��������Ҫ�ı� 
		else if (value < dest)
		{
			lowIndex = mid + 1;
		}
		else
		{
			highIndex = mid - 1;
		}
	}
	return -1;
}

void menu()
{
	printf("*************************\n");
	printf("*****   1.�¼۸�    *****\n");
	printf("*****   0.�˳���Ϸ  *****\n");
	printf("*************************\n");
}
int main()
{
	int res = 0;
	seqlist sq;
	int input = 0;
	creatspace(&sq, 0);
	do
	{
		menu();
		(void)scanf("%d", &input);
		switch (input)
		{
		case 1:
			res = binarysearch(&sq);
			if (res != -1)
				printf("�ҳ�Ŀ��ֵ��λ���������е�����Ϊ%d\n", res);
			else
				printf("û�в¶�\n");
			break;
		case 0:
			break;
		default:
			break;
		}
	} while (input != 0);

	return 0;
}
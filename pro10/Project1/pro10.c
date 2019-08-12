#include<stdio.h>
#include<stdlib.h>
#define DEFAULT_CAPACITY 16 
struct SeqList {
	int* array;//��¼���ݴ��λ��
	int capacity;//��¼������
	int size;//��¼�������ݸ���
};
typedef struct SeqList  SeqList;
//��ʼ��
void SeqListInit(SeqList* seq)
{
	//������Ҳ��Ҽ�¼
	//��¼��������
	//size
	seq->array = (int*)malloc(sizeof(int) * DEFAULT_CAPACITY);
	seq->capacity = DEFAULT_CAPACITY;
	seq->size = 0;
}

//����
void SeqListDestory(SeqList* seq)
{
	free(seq->array);
	//��������ڿɼӿɲ��ӣ������ʹ�С��
	seq->capacity = 0;
	seq->size = 0;
}
//ͷ��
void SeqListPushFront(SeqList* seq, int val)
{
	for (int i = seq->size - 1; i >= 0; i--)//i����ʵ��Ȧ���߿���Ȧ
	{
		seq->array[i + 1] = seq->array[i];
	}
	seq->array[0] = val;
	seq->size++;
}
//β��
void SeqListPushBack(SeqList* seq, int val)
{
	seq->array[seq->size] = val;
	seq->size++;
}
//��ӡ
void SeqListPrint(SeqList* seq)
{
	for (int i = 0; i < seq->size; i++)
	{
		printf("%d", seq->array[i]);
	}


	printf("\n");
}

//��ʼ��/����
//��/ɾ/��/��
void testSeqList()
{
	SeqList seqList;
	SeqListInit(&seqList);//��ʼ����ʱ��Ҫ����ַ
	SeqListPushBack(&seqList, 1);
	SeqListPushBack(&seqList, 2);
	SeqListPushBack(&seqList, 3);
	SeqListPushBack(&seqList, 4);
	SeqListPrint(&seqList);//1,2,3,4
	SeqListPushFront(&seqList, 10);
	SeqListPushFront(&seqList, 20);
	SeqListPushFront(&seqList, 30);
	SeqListPrint(&seqList);//30,20,10,1,2,3,4;

	//SeqListDestory(&seqList);//���٣�
}
int main()
{
	testSeqList();
	return 0;
}
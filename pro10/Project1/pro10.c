#include<stdio.h>
#include<stdlib.h>
#define DEFAULT_CAPACITY 16 
struct SeqList {
	int* array;//记录数据存放位置
	int capacity;//记录总容量
	int size;//记录已有数据个数
};
typedef struct SeqList  SeqList;
//初始化
void SeqListInit(SeqList* seq)
{
	//申请教室并且记录
	//记录教室容量
	//size
	seq->array = (int*)malloc(sizeof(int) * DEFAULT_CAPACITY);
	seq->capacity = DEFAULT_CAPACITY;
	seq->size = 0;
}

//销毁
void SeqListDestory(SeqList* seq)
{
	free(seq->array);
	//下面的属于可加可不加（容量和大小）
	seq->capacity = 0;
	seq->size = 0;
}
//头插
void SeqListPushFront(SeqList* seq, int val)
{
	for (int i = seq->size - 1; i >= 0; i--)//i代表实心圈或者空心圈
	{
		seq->array[i + 1] = seq->array[i];
	}
	seq->array[0] = val;
	seq->size++;
}
//尾插
void SeqListPushBack(SeqList* seq, int val)
{
	seq->array[seq->size] = val;
	seq->size++;
}
//打印
void SeqListPrint(SeqList* seq)
{
	for (int i = 0; i < seq->size; i++)
	{
		printf("%d", seq->array[i]);
	}


	printf("\n");
}

//初始化/销毁
//增/删/查/改
void testSeqList()
{
	SeqList seqList;
	SeqListInit(&seqList);//初始化的时候要传地址
	SeqListPushBack(&seqList, 1);
	SeqListPushBack(&seqList, 2);
	SeqListPushBack(&seqList, 3);
	SeqListPushBack(&seqList, 4);
	SeqListPrint(&seqList);//1,2,3,4
	SeqListPushFront(&seqList, 10);
	SeqListPushFront(&seqList, 20);
	SeqListPushFront(&seqList, 30);
	SeqListPrint(&seqList);//30,20,10,1,2,3,4;

	//SeqListDestory(&seqList);//销毁；
}
int main()
{
	testSeqList();
	return 0;
}
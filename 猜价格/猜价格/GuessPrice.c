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
	int i = -1;  //记录目标值在数组的位置
	int lowIndex = 0; //最小索引
	int highIndex = sq->sz - 1; // 最大索引
	printf("请输入商品的价格:>\n");
	(void)scanf("%d", &dest);
	while (lowIndex <= highIndex)
	{
		//计算中间索引
		int mid = (highIndex + lowIndex) / 2;
		//中间值
		int value = sq->data[mid];
		//如果找出的值和目标值相等
		if (value == dest)
		{
			return mid;
		}
		// 如果值小于目标值,则最小的索引需要改变 
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
	printf("*****   1.猜价格    *****\n");
	printf("*****   0.退出游戏  *****\n");
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
				printf("找出目标值的位置在数组中的索引为%d\n", res);
			else
				printf("没有猜对\n");
			break;
		case 0:
			break;
		default:
			break;
		}
	} while (input != 0);

	return 0;
}
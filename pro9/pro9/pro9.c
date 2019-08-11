#include <stdio.h>

int binartSearch(int arr[], int len, int key) //arr[] �൱�� *arr(����ָ��) 
{
	int left = 0;
	int right = len;

	//�ұߵ��±꣬sizeof(arr) / sizeof(arr[0])Ŀ�����������Ԫ�صĸ���������Ԫ�صĸ��� - 1
	//	��Ϊ���һ��Ԫ�ص��±ꣻ
	//�м�Ԫ�ص��±꣨��������������⣬���right�ر��Ļ���
	//��������һ����ƽ��ֵ�ķ���
	while (left <= right)
	{
		int mid = left + (right - left) / 2;//�����㷨һ���������
		if (arr[mid] < key)
		{
			left = mid + 1;//����mid����һ���ж�
		}
		else if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	if (left > right)
	{
		return -1;
	}
}

int main()
{
	//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int index = 0;
	int key = 0;
	int arr[10] = { 0 };
	//��ʼ�������ñ����ķ������������Ⱥ�����������ı� 
	for (i = 0; i < 10; i++)
	{
		arr[i] = i + 1;
	}

	int len = sizeof(arr) / sizeof(int);//�ַ�����ĳ��� 
						  //Ҫ�ҵ��� 
	(void)scanf("%d", &key);
	index = binartSearch(arr, len, key);
	printf("%dԪ����arr�����е��±���%d", key, index);

	return 0;
}
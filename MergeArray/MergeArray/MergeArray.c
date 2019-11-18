#define  _CRT_SECURE_NO_WARNINGS 1


//合并两个数组，合并之后的数组依然有序
//array1和array2元素是递增的
int* Merge(int* array1, int size1, int* array2, int size2)
{
	int index1 = 0;
	int index2 = 0;
	int index = 0;
	int* temp = (int*)malloc(sizeof(int) * (size1 + size2));
	while (index1 < size1 && index2 < size2)
	{
		if (array1[index1] < array2[index2])
		{
			temp[index++] == array1[index1++];
		}
		else
			temp[index++] = array2[index2++];
	}
	while (index1 < size1)
	{
		temp[index++] = array1[index1++];
	}
	while (index2 < size2)
	{
		temp[index++] = array2[index2++];
	}
	return temp;
}
//时间复杂度为0（m+n）
//空间复杂度也为0（m+n）
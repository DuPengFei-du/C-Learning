#define  _CRT_SECURE_NO_WARNINGS 1


//�ϲ��������飬�ϲ�֮���������Ȼ����
//array1��array2Ԫ���ǵ�����
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
//ʱ�临�Ӷ�Ϊ0��m+n��
//�ռ临�Ӷ�ҲΪ0��m+n��
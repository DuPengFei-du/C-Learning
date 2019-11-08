//class Solution {
//public:
//	// Parameters:
//	//        numbers:     an array of integers
//	//        length:      the length of array numbers
//	//        duplication: (Output) the duplicated number in the array number
//	// Return value:       true if the input is valid, and there are some duplications in the array number
//	//                     otherwise false
//	bool duplicate(int numbers[], int length, int* duplication) {
//		if (length <= 0 || numbers == NULL)
//			return false;
//		//判断每一个元素是否非法
//		for (int i = 0; i < length; ++i)
//		{
//			if (numbers[i] <= 0 || numbers[i] > length - 1)
//				return false;
//		}
//		for (int i = 0; i < length; ++i)
//		{
//			while (numbers[i] != i)
//			{
//				if (numbers[i] == numbers[numbers[i]])
//				{
//					*duplication = numbers[i];
//					return true;
//				}
//				//交换numbers[i]和numbers[numbers[i]]
//				int temp = numbers[i];
//				numbers[i] = numbers[temp];
//				numbers[temp] = temp;
//			}
//		}
//		return false;
//	}
//};
//class Printer {
//public:
//	vector<int> arrayPrint(vector<vector<int> > arr, int n)
//	{
//		vector <int>temp;
//		for (int j = n - 1; j >= 0; j--)
//		{
//			int i = 0;
//			int m = j;
//			while (m <= n - 1)
//			{
//				temp.push_back(arr[i][m]);
//				i++;
//				m++;
//			}
//		}
//		for (int i = 1; i <= n - 1; i++)
//		{
//			int j = 0;
//			int m = i;
//			while (m <= n - 1)
//			{
//				temp.push_back(arr[m][j]);
//				m++;
//				j++;
//			}
//		}
//		return temp;
//	}
//};
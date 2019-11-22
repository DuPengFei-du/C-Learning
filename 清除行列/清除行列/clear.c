//class Clearer {
//public:
//	vector<vector<int> > clearZero(vector<vector<int> > mat, int n)
//	{
//		if (mat.size() <= 0)
//			return mat;
//		bool* row = new bool[mat.size()];
//		bool* col = new bool[mat[0].size()];
//		for (unsigned int i = 0; i < mat.size(); i++)
//			row[i] = false;
//		for (unsigned int i = 0; i < mat[0].size(); i++)
//			col[i] = false;
//		for (unsigned int i = 0; i < mat.size(); i++)
//		{
//			for (unsigned int j = 0; j < mat[0].size(); j++)
//			{
//				if (mat[i][j] == 0)
//				{
//					row[i] = true;
//					col[j] = true;
//				}
//			}
//		}
//		for (unsigned int i = 0; i < mat.size(); i++)
//		{
//			for (unsigned int j = 0; j < mat[0].size(); j++)
//				if (row[i] || col[j])
//				{
//					mat[i][j] = 0;
//				}
//		}
//		return mat;
//	}
//};

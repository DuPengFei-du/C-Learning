/*
class Solution {
public:
	bool Find(int target, vector<vector<int> > array)
	{
		int rows = array.size() - 1;
		int cols = array[0].size() - 1;
		int i = rows, j = 0;
		while (i >= 0 && j <= cols)
		{
			if (target > array[i][j])
				j++;
			else if (target < array[i][j])
				i--;
			else
				return true;
		}
		return false;
	}
};
*/
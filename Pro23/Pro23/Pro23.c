//#include <iostream>
//#include <string>
//using namespace std;
////����̫���޷�ͨ�������������ͱ�ʾ�����ַ�����ʾ���
////����ÿ���ַ�����β����ʼ���м򵥵ĳ˷�����λ
//void Core(string& res, const int n)
//{
//	int t = 0;
//	for (int i = res.size() - 1; i >= 0; i--)
//	{
//		int tmp = t;
//		t = ((res[i] - '0') * n + t) / 10;
//		res[i] = (((res[i] - '0') * n + tmp) % 10) + '0';
//	}
//	//��t != 0 �����ڽ�λ
//	if (t)
//	{
//		res = to_string(t) + res;
//	}
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	string res = "1";
//	for (int i = 1; i <= n; ++i)
//	{
//		Core(res, i);
//	}
//	cout << res;
//	return 0;
//}
//
//
//#include<iostream>
//using namespace std;
//class Solution
//{
//public:
//	vector <int> twoSum(vector<int>& nums, int target) {
//		int length = nums.size();
//		vector<int> result;
//		if (length == 0)
//			return result;
//		for (int i = 0; i < length; i++) {
//			for (int j = i + 1; j < length; j++) {
//				if (nums[i] + nums[j] == target) {
//					result.push_back(i);
//					result.push_back(j);
//					return result;
//				}
//			}
//		}
//		return result;
//	}
//};
int main()
{
	int nums[] = { 2,7,11,15 };
	int target = 9;
	int twoSum(nums, target);
	return 0;
}



#include<stdio.h>
int main()
{
	int N, n;
	scanf("%d", &N);
	N = 1024 - N;
	n = N / 64 + N % 64 / 16 + N % 16 / 4 + N % 4;
	printf("%d", n);
	return 0;
}
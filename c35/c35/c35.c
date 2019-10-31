class Solution {
public:
	vector<int> levelOrder(TreeNode* root)
	{
		vector<int> ret;
		queue<TreeNode*> q;
		if (root)
			q.push(root);
		while (!q.empty())
		{
			TreeNode* temp = q.front();
			ret.push_back(temp->val);
			q.pop();
			if (temp->left)
				q.push(temp->left);
			if (temp->right)
				q.push(temp->right);
		}
		return ret;
	}
};


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int m, n, c, y;
	(void)scanf("%d %d", &a, &b);
	m = a;
	n = b;
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	y = (m * n) / b;
	printf("%d %d", b, y);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	(void)scanf("%d %d", &a, &b);
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	printf("%d", b);
	return 0;
}



#include<stdio.h>
long fib(long n)
{
	long a = 1;
	long b = 1;
	if (n <= 2)
		return 1;
	for (long i = 3; i <= n; i++)
	{
		long res = (a + b) % (long)1e9 + 7;
		a = b;
		b = res;
	}
	return b;
}
int main()
{
	long n = 0;
	long ret = 0;
	(void)scanf("%ld", &n);
	ret = fib(n);
	printf("%ld", ret);
	return 0;
}
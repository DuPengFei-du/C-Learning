#include<stdio.h>
int main()
{
	for (int i = 1; i <= 100; i += 2)
	{
		printf("%d ", i);
	}
	return 0;
}


#include<stdio.h>
#include<string.h>
#define inf 0x3f3f3f3f
long long int m, n;
int from[1001][1001];
int ans = 0;
int vis[1001], dis[1001];
void prim()
{
	int i, j, k;
	int idex = 0;
	int flag = 0;
	ans = 0;
	memset(vis, 0, sizeof(vis));
	vis[1] = 1;//������顡�����Ǵ˵��߹��ͱ��Ϊһ������ʱ�ǽ�������Ϊ·�Ŀ�ͷ
	for (i = 2; i <= n; i++)
		dis[i] = from[1][i];//���ӣ���������ľ���ȫ��������dis������//������������û��·��ôdis�д���ľ������ֵinf
	for (i = 2; i <= n; i++)//����ÿ���㡡����Ϊ��С����������Ҫ�����еĵ�ȫ������
	{
		long long int max = inf;
		idex = 0;
		for (j = 1; j <= n; j++)//����ÿһ���㡡�ҵ�һ���룱����ĵ�
		{
			if (!vis[j] && dis[j] < max)//������������û�б���ǹ���
			{
				max = dis[j];//ά����Сֵ
				idex = j;
			}
		}
		if (!idex)//����һ�������ĵ��򲻻������С������
		{
			flag = 1;
			break;
		}
		ans = ans + max;//��ÿһ������Сֵ������ans
		//printf("%d\n",ans);
		vis[idex] = 1;//���ߵĵ���
		for (k = 1; k <= n; k++)
			if (!vis[k] && dis[k] > from[idex][k])//����dis����//��ԭ���Ǵ�Ŀǰ���ڵĵ������֮ǰ����dis�е�ֵ���ȽϽ���С��ֵ������
				dis[k] = from[idex][k];
	}
	if (!flag)
		printf("%d\n", ans);
	else
		printf("?\n");
}

int main()
{
	int i, S, E, W;
	while (scanf("%lld%lld", &n, &m) != EOF && (n || m))
	{
		memset(from, inf, sizeof(from));//��from�����ʼ��Ϊ���ֵ���Ժ�����а���
		for (i = 0; i < m; i++)
		{
			(void)scanf("%d %d %d", &S, &E, &W);
			if (from[S][E] > W) {
				from[S][E] = W;//������֮��ľ������෴��ȫ��������
				from[E][S] = W;
			}
		}
		prim();//���뺯��
	}
	return 0;
}
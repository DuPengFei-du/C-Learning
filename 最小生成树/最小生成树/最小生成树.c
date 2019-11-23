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
	vis[1] = 1;//标记数组　　若是此点走过就标记为一　　此时是将１点作为路的开头
	for (i = 2; i <= n; i++)
		dis[i] = from[1][i];//将从１到各个点的距离全部储存在dis数组中//若是两个点中没有路那么dis中储存的就是最大值inf
	for (i = 2; i <= n; i++)//遍历每个点　　因为最小生成树就是要把所有的点全部遍历
	{
		long long int max = inf;
		idex = 0;
		for (j = 1; j <= n; j++)//遍历每一个点　找到一个离１最近的点
		{
			if (!vis[j] && dis[j] < max)//而且这个点必须没有被标记过　
			{
				max = dis[j];//维护最小值
				idex = j;
			}
		}
		if (!idex)//若是一个独立的点则不会存在最小生成树
		{
			flag = 1;
			break;
		}
		ans = ans + max;//将每一步的最小值都加在ans
		//printf("%d\n",ans);
		vis[idex] = 1;//将走的点标记
		for (k = 1; k <= n; k++)
			if (!vis[k] && dis[k] > from[idex][k])//更新dis数组//其原则是从目前所在的点出发和之前存在dis中的值作比较将较小的值存起来
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
		memset(from, inf, sizeof(from));//将from数组初始化为最大值对以后计算有帮助
		for (i = 0; i < m; i++)
		{
			(void)scanf("%d %d %d", &S, &E, &W);
			if (from[S][E] > W) {
				from[S][E] = W;//将两点之间的距离正相反相全部存起来
				from[E][S] = W;
			}
		}
		prim();//进入函数
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int a[10], b[6] = { 0 };
	int i;
	printf("������ʮ���˵ĳɼ�:");
	for (i = 0; i < 10; ++i)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 10; ++i)
	{
		if (60 <= a[i] && a[i] <= 69)
		{
			++b[0];
		}
		else if (70 <= a[i] && a[i] <= 79)
		{
			++b[1];
		}
		else if (80 <= a[i] && a[i] <= 89)
		{
			++b[2];
		}
		else if (90 <= a[i] && a[i] <= 99)
		{
			++b[3];
		}
		else if (a[i] == 100)
		{
			++b[4];
		}
		else if (a[i] < 60)
		{
			++b[5];
		}
	}
	printf("�ɼ�Ϊ60-69������:%d\n\
            �ɼ�Ϊ70-79������:%d\n\
            �ɼ�Ϊ80-89������:%d\n\
            �ɼ�Ϊ90-99������:%d\n\
            �ɼ�Ϊ100�ֵ�����:%d\n\
            �ɼ�Ϊ60�����µ�����:%d\n",
		b[0], b[1], b[2], b[3], b[4], b[5]
	);
}
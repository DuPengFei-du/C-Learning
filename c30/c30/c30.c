//�õݹ����n�Ľ׳�
#include<stdio.h>
int fac(int n)
{
	if (n == 1||n == 0)
	{
		return 1;
	}
	else
	{
		return n * fac(n - 1);
	}
}
int main()
{
	int n = 0;
	int ret = 0;
	(void)scanf("%d", &n);
	ret = fac(n);
	printf("%d", ret);
	return 0;
}


//����10������Ҫ���������ֵ����Ԫ�غ͸�Ԫ���ǵڼ�����
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int max = arr[0];
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("�����������е�Ԫ�أ�\n");
	for (i = 0; i < sz; i++)
	{
		(void)scanf("%d", &arr[i]);
	}
	for (i = 0; i < sz; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d", max);
	return 0;
}


//��һ��һά����score���ڷ�10��ѧ���ɼ�����ƽ���ɼ�
#include<stdio.h>
int main()
{
	int score[10] = { 0 };
	int i = 0;
	int sz = sizeof(score) / sizeof(score[0]);
	float average = 0.0;
	float sum = 0.0;
	printf("������ѧ���ĳɼ�\n");
	for (i = 0; i < sz; i++)
	{
		(void)scanf("%d", score + i);
	}
	for (i = 0; i < sz; i++)
	{
		sum = sum + score[i];
	}
	average = sum / sz;
	printf("%lf", average);
	return 0;
}


#include<stdio.h>
#include<math.h>
int main()
{
	printf("%lf", round(11.5));
}
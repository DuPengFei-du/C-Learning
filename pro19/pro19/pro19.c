#include<stdio.h> 
int main()
{
	int a[20][20], m, i, j, t;
	while (scanf("%d", &m) && m)
	{
		t = 1;
		for (i = 1; i <= m; i++)
			for (j = 1; j <= m; j++)
				scanf("%d", &a[i][j]);
		for (i = 1; i <= m; i++)
			for (j = 1; j <= m; j++)
				if (a[i][j] != a[j][i])
					t = 0;

		if (t) printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}

#include<stdio.h>
#include<math.h>

int a(int b)//�������ܣ�����һ��������b��λ��
{
	int n = 0;
	do
	{
		b = b / 10;
		n += 1;
	} while (b != 0);
	return (n);
}

int b(int b)//�������ܣ�����b�ĵ�һλ
{
	int i, d;
	i = a(b);
	d = b / pow(10, i - 1);
	return(d);
}

int main()
{
	int c, i, f;
	scanf("%d", &c);
	i = a(c);//iΪc��λ��
	do//����b����������λ������c-���λ��ʮ��һ�η������ú�λ����ѭ��ʹ��b������ֱ��λ��Ϊ0
	{
		printf("%d ", b(c));
		c = c - b(c) * pow(10, i - 1);
		i -= 1;
	} while (i != 0);
	return 0;
}

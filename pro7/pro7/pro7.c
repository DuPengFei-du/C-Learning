//�ж��Ƿ�Ϊ����
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("count =%d", count);
	return 0;
}


/*
�߼��ͱ���������C99�����ӵ�һ���������ͣ����Խ���ϵ������߼�����Ľ���浽һ��
�߼��ͱ������У��Ա��ڷ���������
�����߼����������ͷ�_Bool
*/
#include<stdio.h>
#include<stdbool.h>
int main()
{
	int score = 0;
	scanf("%d", &score);
	bool a, b;//a��b��������߼��ͱ���
	a = score >= 60;
	b = score <= 69;
	if (a == true && b == true)
	{
		printf("the grade is C\n");
	}
	return 0;
}


//����������нϴ��һ����
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int max = 0;
	if (a > b)
	{
		max = a;
	}
	if (a < b)
	{
		max = b;
	}
	printf("%d", max);
	return 0;
}


//����һ���ַ��б����ǲ��Ǵ�д��ĸ������ǣ�
//����ת����Сд��ĸ��������ǣ���ô�Ͳ�ת����Ȼ��������õ����ַ�
#include<stdio.h>
int main()
{
	char a;
	scanf("%c", &a);
	a = (a >= 'A' && a <= 'Z') ? (a + 32) : a;
	printf("%c", a);
	return 0;
}


//��дһ������
#include<stdio.h>
int main()
{
	int x = 0;
	int y = 0;
	scanf("%d", &x);
	if (x < 0)
	{
		y = -1;
	}
	if (x == 0)
	{
		y = 0;
	}
	if (x > 0)
	{
		y = 1;
	}
	printf("%d", y);
	return 0;
}
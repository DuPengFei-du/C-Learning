#include<stdio.h>
int main()
{
	int a[10], b[6] = { 0 };
	int i;
	printf("请输入十个人的成绩:");
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
	printf("成绩为60-69的人数:%d\n\
            成绩为70-79的人数:%d\n\
            成绩为80-89的人数:%d\n\
            成绩为90-99的人数:%d\n\
            成绩为100分的人数:%d\n\
            成绩为60分以下的人数:%d\n",
		b[0], b[1], b[2], b[3], b[4], b[5]
	);
}
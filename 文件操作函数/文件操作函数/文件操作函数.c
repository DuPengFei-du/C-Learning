//�ļ�����
#include<stdio.h>
int main()
{
	FILE* pf = fopen("test.txt", "w");
	fclose(pf);
	pf = NULL;
	return 0;
}


#include<stdio.h>
#include<errno.h>
#include<string.h>
int main()
{
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//�����ļ�������
	fclose(pf);
	pf = NULL;
	return 0;
}


//fputc
#include<stdio.h>
#include<string.h>
#include<errno.h>
int main()
{
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//д�ļ�
	fputc('a', pf);
	fputc('b', pf);
	fputc('b', pf);
	fclose(pf);
	pf = NULL;
	return 0;
}


//fgetc
#include<stdio.h>
#include<string.h>
#include<errno.h>
int main()
{
	FILE* pf = fopen("test.txt", "r");
	int ch = 0;
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//���ļ�
	ch = fgetc(pf);
	printf("%c\n", ch);
	fclose(pf);
	pf = NULL;
	return 0;
}



//fgets
#include<stdio.h>
#include<string.h>
#include<errno.h>
int main()
{
	FILE* pf = fopen("test.txt", "r");
	int ch = 0;
	char buf[20] = { 0 };
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//���ļ�
	fgets(buf, 20, pf);
	printf("%s\n", buf);
	fclose(pf);
	pf = NULL;
	return 0;
}


//fputs
#include<stdio.h>
#include<string.h>
#include<errno.h>
int main()
{
	FILE* pf = fopen("test.txt", "w");
	int ch = 0;
	char buf[20] = { 0 };
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//д�ļ�
	fputs("hello world\n", pf);
	fclose(pf);
	pf = NULL;
	return 0;
}


//fprintf
//д��
//#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
struct Stu
{
	char name[20];
	int age;
	float score;
};
int main()
{
	struct Stu s = { "����",20,100 };
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		printf("%s", strerror(errno));
		return 0;
	}
	//д�ļ�
	fprintf(pf, "%s %d %f", s.name, s.age, s.score);
	fclose(pf);
	pf = NULL;
	return 0;
}


//fscnaf
//��ȡ
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
struct Stu
{
	char name[20];
	int age;
	float score;
};
int main()
{
	struct Stu s = { 0 };
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s", strerror(errno));
		return 0;
	}
    //���ļ�
	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
	printf("%s %d %f", s.name, s.age, s.score);
	fclose(pf);
	pf = NULL;
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
struct Stu
{
	char name[20];
	int age;
	float score;
};
int main()
{
	struct Stu s = { "����",20,100 };
	FILE* pf = fopen("test.txt", "wb");
	if (pf == NULL)
	{
		printf("%s", strerror(errno));
		return 0;
	}
	//д�ļ�
	fwrite(&s,sizeof(s),1,pf);
	fclose(pf);
	pf = NULL;
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
struct Stu
{
	char name[20];
	int age;
	float score;
};
int main()
{
	struct Stu s = { 0 };
	FILE* pf = fopen("test.txt", "rb");
	if (pf == NULL)
	{
		printf("%s", strerror(errno));
		return 0;
	}
	//���ļ�
	fread(&s, sizeof(s), 1, pf);
	fclose(pf);
	pf = NULL;
	return 0;
}
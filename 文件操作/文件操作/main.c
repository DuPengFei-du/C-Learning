#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>
int main()
{
	int a = 10000;
	FILE* pf = fopen("test.txt", "wb");
	fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ���
	//д�ĸ��ֽڣ�ֻдһ�Σ�д��pf�ļ�ָ����ȥ
	fclose(pf);
	pf = NULL;
	return 0;
}


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
	//д�ļ�
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
	if(pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//д�ļ�
	fputc('a', pf);
	fputc('b', pf);
	fputc('c', pf);
	fclose(pf);
	pf = NULL;
	return 0;
}


#include<stdio.h>
#include<errno.h>
#include<string.h>
int main()
{
	FILE* pf = fopen("test.txt", "r");
	int ch = 0;
	if(pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//д�ļ�
	ch=fgetc(pf);
	printf("%c\n", ch);
	fclose(pf);
	pf = NULL;
	return 0;
}


#include<stdio.h>
#include<errno.h>
#include<string.h>
int main()
{
	FILE* pf = fopen("test.txt", "r");
	int ch = 0;
	char buf[20] = {0};
	if(pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//���ļ�
	fgets(buf, 20, pf);
	printf("%s", buf);
	fclose(pf);
	pf = NULL;
	return 0;
}


#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
int main()
{
	FILE* pf = fopen("test.txt", "w");
	int ch = 0;
	char buf[20] = {0};
	if(pf == NULL)
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


#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
struct S
{
	char name[20];
	int age;
	float score;
};

int main()
{
	struct S s = {0};

	FILE* pf = fopen("test.txt", "r");
	if(pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//���ļ�
	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
	printf("%s %d %f\n", s.name, s.age, s.score);
	fclose(pf);
	pf = NULL;
	return 0;
}


#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
struct S
{
	char name[20];
	int age;
	float score;
};

int main()
{
	struct S s = {0};

	FILE* pf = fopen("test.txt", "r");
	if(pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//���ļ�
	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
	printf("%s %d %f\n", s.name, s.age, s.score);
	fclose(pf);
	pf = NULL;
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct S
{
	char name[20];
	int age;
	float score;
};
int main()
{
	struct S s = {"zhangsan", 20, 59.5f};
	FILE* pf = fopen("test.txt", "wb");
	if(pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//д�ļ�
	fwrite(&s, sizeof(s), 1, pf);
	fclose(pf);
	pf = NULL;
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct S
{
	char name[20];
	int age;
	float score;
};
int main()
{
	struct S s = {0};
	FILE* pf = fopen("test.txt", "rb");
	if(pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//�����ƶ��ļ�
	fread(&s, sizeof(s), 1, pf);
	printf("%s %d %f\n", s.name, s.age, s.score);
	fclose(pf);
	pf = NULL;
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{

	FILE* pf = fopen("test.txt", "r");
	int ch = 0;
	if(pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//���ļ�
	ch = fgetc(pf);
	printf("%c\n", ch);
	fseek(pf, -3, SEEK_END);
	ch = fgetc(pf);
	printf("%c\n", ch);
	printf("%d\n", ftell(pf)); //ftell������ƫ����
	fclose(pf);
	pf = NULL;
	return 0;
}


#include<stdio.h>
#include<errno.h>
#include<string.h>
int main()
{
	FILE* pf = fopen("test.txt", "r");
	int ch = 0;
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	while ((ch = fgetc(pf)) != EOF)
	{
		printf("%c\n", ch);
	}
	//feof
	fclose(pf);
	pf = NULL;
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
int main()
{
	int a = 10000;
	FILE* pf = fopen("test.txt", "wb");
	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
	fclose(pf);
	pf = NULL;
	return 0;
}


#include <errno.h>
#include <string.h>

int main()
{
	FILE* pf = fopen("test.txt", "w");
	if(pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//写文件
	fputc('a', pf);
	fputc('b', pf);
	fputc('c', pf);

	fclose(pf);
	pf = NULL;

	return 0;
}


int main()
{
	FILE* pf = fopen("test.txt", "r");
	int ch = 0;
	if(pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//读文件
	ch = fgetc(pf);
	printf("%c\n", ch);
	ch = fgetc(pf);
	printf("%c\n", ch);
	ch = fgetc(pf);
	printf("%c\n", ch);
	fclose(pf);
	pf = NULL;

	return 0;
}

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
	//读文件
	fgets(buf, 20, pf);
	printf("%s", buf);
	fgets(buf, 20, pf);
	printf("%s", buf);
	fclose(pf);
	pf = NULL;

	return 0;
}



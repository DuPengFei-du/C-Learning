//文件操作
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
	//进行文件操作：
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
	//写文件
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
	//读文件
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
	//读文件
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
	//写文件
	fputs("hello world\n", pf);
	fclose(pf);
	pf = NULL;
	return 0;
}


//fprintf
//写入
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
	struct Stu s = { "张三",20,100 };
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		printf("%s", strerror(errno));
		return 0;
	}
	//写文件
	fprintf(pf, "%s %d %f", s.name, s.age, s.score);
	fclose(pf);
	pf = NULL;
	return 0;
}


//fscnaf
//读取
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
    //读文件
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
	struct Stu s = { "张三",20,100 };
	FILE* pf = fopen("test.txt", "wb");
	if (pf == NULL)
	{
		printf("%s", strerror(errno));
		return 0;
	}
	//写文件
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
	//读文件
	fread(&s, sizeof(s), 1, pf);
	fclose(pf);
	pf = NULL;
	return 0;
}
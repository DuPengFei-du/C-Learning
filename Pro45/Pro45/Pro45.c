struct S
{
	char name[20];
	int age;
	float score;
};

//size_t fwrite( const void *buffer, size_t size, size_t count, FILE *stream );

//
//int main()
//{
//	struct S s = {"zhangsan", 20, 59.5f};
//
//	FILE* pf = fopen("test.txt", "wb");
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//д�ļ�
//	fwrite(&s, sizeof(s), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//size_t fread( void *buffer, size_t size, size_t count, FILE *stream );
//
//
//int main()
//{
//	struct S s = {0};
//
//	FILE* pf = fopen("test.txt", "rb");
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//�����ƶ��ļ�
//	fread(&s, sizeof(s), 1, pf);
//	printf("%s %d %f\n", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//stdin stdout stderr FILE*

//int main()
//{
//	struct S s = {0};
//	fscanf(stdin, "%s %d %f", s.name, &(s.age), &(s.score));
//	//fprintf(stdout, "%s %d %f\n", "����", 20, 59.5f);
//	fprintf(stdout, "%s %d %f\n", s.name, s.age, s.);
//	return 0;
//}
//
//int sprintf( char *buffer, const char *format [, argument] ... );

//
//int main()
//{
//	struct S s = {"����", 20, 59.5f};
//	struct S tmp = {0};
//
//	char buf[30] = {0};
//
//	//�ѽṹ��ת�����ַ���
//	sprintf(buf, "%s %d %f", s.name, s.age, s.score);
//
//	printf("�ַ���: %s\n", buf);
//	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
//	printf("�ṹ��: %s %d %f\n", tmp.name, tmp.age, tmp.score);
//	return 0;
//}
//
//int main()
//{
//
//	FILE* pf = fopen("test.txt", "r");
//	int ch = 0;
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	fseek(pf, -3, SEEK_END);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	printf("%d\n", ftell(pf));//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	int ch = 0;
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c\n", ch);
//	}
//	//feof
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
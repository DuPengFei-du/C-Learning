#define  _CRT_SECURE_NO_WARNINGS 1



//�⺯����
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	const char str[] = "http://www.runoob.com";
//	const char ch = '.';
//	const char* ret;
//
//	ret = strchr(str, ch);
//
//	printf("|%c| ֮����ַ����� - |%s|\n", ch, ret);
//
//	return(0);
//}



//ģ��ʵ��strchrn
//#include<stdio.h>
//#include<stdlib.h>
//char* my_strchr(const char* msg, char dest)
//{
//	char* m = NULL;
//	while (*msg != NULL)
//	{
//		if (*msg == dest)
//		{
//			return (char*)msg;
//		}
//		msg++;
//	}
//	return NULL;
//}
//int main()
//{
//	const char* a = "abcderf";
//	char b = 'e';
//	char* c = NULL;
//	c = my_strchr(a, b);
//	printf("%s", c);
//}
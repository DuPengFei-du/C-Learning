//strstr
#include<stdio.h>
int main()
{
	char arr1[] = "abcdefabcdef";
	char arr2[] = "bcd";
	char* ret = strstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("找不到\n");
	}
	else
	{
		printf("%s\n", ret);

	}
	return 0;
}



//模拟实现strstr
/*
当*start！='\0'的时候，就把start赋值给s1，让他去查找,把str2赋值给s2
让s2也从起始位置开始，然后循环的判断条件 *s1 != '\0' && *s2 != '\0' && *s1 == *s2
然后s1和s2进行加加，加加完了之后，再上去判断，当有一次，s1或者s2
等于'\0’的时候，或者他们不相等的时候，就跳出来，如果*str2=='\0'的时候，就是找到了，然后跳出来
如果找不到的话，就返回空指针。
如果要找一个空字符串的话（特殊情况）：
在库里面，对于这种特殊情况的处理，就是直接返回str1
*/
#include<stdio.h>
#include<assert.h>
char* my_strstr(const char* str1, const char* str2)
{
	const char* s1 = str1;
	const char* s2 = str2;
	const char* start = str1;
	assert(str1 != NULL);
	assert(str2 != NULL);
	if (*str2 == '\0')
	{
		return (char *)str1;
	}
	while (*start!='\0')//当start遇到'\0'的时候就没有比要再继续查找了，那一定是查找不到的了
	{
		s2 = str2;
		s1 = start;
		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char *)start;
		}
		start++;
	}
	return NULL;
}
int main()
{
	char arr1[] = "abcdefabcdef";
	char arr2[] = "bcd";
	char* ret = my_strstr(arr1, arr2);
	if (*ret == NULL)
	{
		printf("不存在\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}


//strchr
#include <stdio.h>
#include <string.h>
int main()
{
	const char str[] = "http://www.runoob.com";
	const char ch = '.';
	const char* ret;
	ret = strchr(str, ch);
	printf("|%c| 之后的字符串是 - |%s|\n", ch, ret);
	return 0;
}


//strtok
#include<stdio.h>
#include<string.h>
int main()
{
	const char* p = "@.";
	char* ret = NULL;
	char arr1[] = "xiaodu@learn.ing";
	char temp[50] = { 0 };
	strcpy(temp, arr1);
	for (ret = strtok(temp, p); ret != NULL; ret = strtok(NULL, p))
	{
		printf("%s\n", ret);
	}
	return 0;
}
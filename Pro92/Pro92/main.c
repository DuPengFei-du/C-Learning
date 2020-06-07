#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
int main()
{
	const int num = 10;
	int n = 100;
	int* const p = &num;
	*p = 20;
	p = &n;
	//const修饰指针变量
	//1.const int *p; //const修饰*p,修饰得是指针所指向得内容，使得*p不能被改变
	//但是p本身是可以改变的
	//2.int *const p; //const修饰p，修饰的是指针变量本身，使p不能再指向其他变量
	//但是*p是可以改变的
	printf("%d\n", num);
	return 0;
}


#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* source)  //返回目标字符串的起始地址
{
	char* ret = dest;
	assert(dest != NULL);
	assert(source != NULL);
	while (*dest++ = *source++)    //\0也一起都复制过去了，后置加加，先使用再加加
	{
		;
	}
	return ret;  //如果这里写 return dest的话，是不行的，因为dest已经变化了，所以需要在开头记录下来dest的起始地址。
}
int main()
{
	char arr1[20] = "################";
	char arr2[] = "Hello World";
	my_strcpy(arr1, NULL);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<assert.h>
void my_strcpy(char* dest, const char* source)
{
	assert(dest != NULL);
	assert(source != NULL);
	while (*dest++ = *source++)    //\0也一起都复制过去了，后置加加，先使用再加加
	{
		;
	}
}
int main()
{
	char arr1[20] = "################";
	char arr2[] = "Hello World";
	my_strcpy(arr1, NULL);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
void my_strcpy(char* dest, const char* source)
{
	while (*dest++ = *source++)    //\0也一起都复制过去了，后置加加，先使用再加加
	{
		;
	}
}
int main()
{
	char arr1[20] = "################";
	char arr2[] = "Hello World";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
void my_strcpy(char* dest, char* source)
{
	while (*source != '\0')
	{
		*dest = *source;
		dest++;
		source++;
	}
	*dest = *source;
}
int main()
{
	char arr1[20] = "################";
	char arr2[] = "Hello World";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)
{
  assert(str);
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)
{
	assert(str);
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen(str+1);
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
#include<assert.h>
int my_strlen(char* str)
{
	assert(str);
	char* ret = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - ret;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* source)
{
	assert(dest);
	assert(source);
	char* ret = dest;
	while (*dest++ = *source++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = " ";
	char arr2[] = "hello world";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<assert.h>
char* my_strcat(char* dest, const char* source)
{
	assert(dest);
	assert(source);
	char* ret = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*dest++ = *source++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = "hello";
	my_strcat(arr1, " world");
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<assert.h>
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1);
	assert(str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}
	return *str1 - *str2;
}
int main()
{
	char arr1[20] = "hello";
	char arr2[20] = "abcdef";
	int ret = my_strcmp(arr1, arr2);
	printf("%d", ret);
	return 0;
}


#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)
{
	assert(str);
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen(str + 1);
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)
{
	assert(str);
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)
{
	assert(str);
	char* ret = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - ret;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* source)
{
	assert(dest);
	assert(source);
	char* ret = dest;
	while (*dest++ = *source++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello world";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<assert.h>
char* my_strcat(char* str1, const char* str2)
{
	assert(str1);
	assert(str2);
	char* ret = str1;
	while (*str1 != '\0')
	{
		str1++;
	}
	while (*str1++ = *str2++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = "hello";
	my_strcat(arr1, " world");
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<assert.h>
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1);
	assert(str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}
	return *str1 - *str2;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "bcdef";
	int ret = my_strcmp(arr1, arr2);
	printf("%d", ret);
	return 0;
}


//模拟实现strncpy
#include<stdio.h>
#include<string.h>
#include<assert.h>
char* my_strncpy(char* dest, const char* source, size_t count)
{
	assert(dest);
	assert(source);
	char* ret = dest;
	int sz = 0;
	if (strlen(source) < count)
	{
		sz = count - strlen(source);
		count = strlen(source);
	}
	while (count--)
	{
		*dest++ = *source++;
	}
	while (sz--)
	{
		*dest = '\0';
	}
	return ret;
}
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "abcdef";
	my_strncpy(arr1, arr2, 8);
	printf("%s", arr1);
	return 0;
}


模拟实现strncat
#include<stdio.h>
#include<assert.h>
char* my_strncat(char* str1, const char* str2, size_t count)
{
	assert(str1);
	assert(str2);
	char* ret = str1;
	while (*str1 != '\0')
	{
		str1++;
	}
	while (count--)
	{
		*str1++ = *str2++;
	}
	*str1 = '\0';
	return ret;
}
int main()
{
	char arr1[20] = "abcdef";
	char arr2[] = "ghijk";
	my_strncat(arr1, arr2, 3);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<assert.h>
int my_strncmp(char* str1, char* str2, int len)
{
	assert(str1);
	assert(str2);

	while (*str1 && *str2 && len--)
	{
		if (str1 == str2)
		{
			str1++;
			str2++;
		}
		else
			break;
	}
	return *str1 - *str2;
}
int main()
{
	char* str = "nihao";
	char* str1 = "niha";
	int ret = my_strncmp(str, str1, 3);
	printf("%d ", ret);
}
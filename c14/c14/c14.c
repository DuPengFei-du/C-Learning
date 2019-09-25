//模拟实现strlen(用递归）
#include<stdio.h>
int my_strlen(const char* str)
{
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen(str + 1);
}
int main()
{
	int len = my_strlen("abc");
	printf("%d", len);
	return 0;
}

//用非递归实现strlen
#include<stdio.h>
int my_strlen(const char* str)
{
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
	int len = my_strlen("abcdef");
	printf("%d", len);
	return 0;
}


//非递归
#include<stdio.h>
int my_strlen(const char* str)
{
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
	int len = my_strlen("abcdef");
	printf("%d", len);
	return 0;
}

//递归
#include<stdio.h>
int my_strlen(const char* str)
{
	if (*str == 0)
	{
		return 0;
	}
	else
	{
		return 1 + my_strlen(str + 1);
	}
}
int main()
{
	int len = my_strlen("abcdef");
	printf("%d", len);
	return 0;
}


/*
编写一个函数 reverse_string(char * string)（递归实现）
实现：将参数字符串中的字符反向排列。
要求：不能使用C函数库中的字符串操作函数。
*/
#include<stdio.h>
#include<stdio.h>
int my_strlen(const char* str)
{
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen(str + 1);
}

void reverse_string(char arr[])
{
	int left = 0;
	int right = my_strlen(arr) - 1;
	while (left < right)
	{
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen("abcdef");
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}
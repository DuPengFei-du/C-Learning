//ģ��ʵ��strlen(�õݹ飩
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

//�÷ǵݹ�ʵ��strlen
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


//�ǵݹ�
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

//�ݹ�
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
��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
ʵ�֣��������ַ����е��ַ��������С�
Ҫ�󣺲���ʹ��C�������е��ַ�������������
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
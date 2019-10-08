//模拟实现strlen
#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)
{
	if (*str == 0)
	{
		return 0;
	}
	else
		return 1 + my_strlen(str + 1);
}
int main()
{
	char arr[20] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}

#include<stdio.h>
int main()
{
	char arr[20] = "abcdef";
	int len = strlen(arr);
	printf("%d", len);
	return 0;
}


//用计数器实现strlen
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
	char arr[20] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


//优化模拟实现strlen的代码
#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)
{
	int count = 0;
	assert(str != '\0');
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[20] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello word";
	strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


//写一个函数返回参数二进制中1的个数
//补码中的个数
#include<stdio.h>
int count_one_bit(int n)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int n = 0;
	int ret = 0;
	(void)scanf("%d", &n);
	ret = count_one_bit(n);
	printf("%d", ret);
	return 0;
}


#include<stdio.h>
int count_one_bit(int n)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int n = 0;
	int ret = 0;
	(void)scanf("%d", &n);
	ret = count_one_bit(n);
	printf("%d", ret);
	return 0;
}


//获取一个二进制序列中的偶数位和奇数位，分别输出二进制序列
#include<stdio.h>
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	int i = 0;
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d", (n >> i) & 1);
	}
	printf("\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", (n >> i) & 1);
	}
}


//输出一个整数的每一位
#include<stdio.h>
int print(int n)
{
	if (n > 9)
		print(n / 10);
	printf("%d ", n % 10);
	return n;
}
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	print(n);
	return 0;
}


/*
编程实现：
两个int（32位）整数m和n的二进制表达式中
有多少个为不同
思路：用异或，两个整数的32个比特位通过循环是可以得到的
然后通过异或，异或的规则是：相同为0，相异为1；
所以可以计算所有1的个数，就可以得出，两个数字有多少个比特位是不一样的了
*/
#include<stdio.h>
int count_one_bit(int n)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int m = 1999;
	int n = 2299;
	int temp = m ^ n;
	int ret = 0;
	ret = count_one_bit(temp);
	printf("%d", ret);
	return 0;
}
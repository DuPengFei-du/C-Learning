/*
编写函数：
unsigned int reverse_bit(unsigned int value)
这个函数的返回值是value的二进制位模式从左到右
翻转后的值
如：
在32位机器上25这个值包含下列各位
00000000000000000000000000011001
翻转后：（2550136832）
10011000000000000000000000000000
程序结果返回 2550136832

返回的应该是无符号的整形
写成unsigned int 因为不希望翻转后的最高位是符号位，希望他是有效位
所以写成unsigned int 类型的

思路：(n>>i)&1可以得到二进制位的每一位，然后再去乘以权重，也就是pow（2，31-i）
也就是相当于最后一位和第一位交换位置，就会得到最终的结果
//*/
#include<stdio.h>
#include<math.h>
unsigned int reverse_bit(unsigned int n)
{
	unsigned int temp = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		temp += ((n >> i) & 1) * pow(2, 31 - i);
	}
	return temp;
}
int main()
{
	unsigned int num = 0;
	unsigned int ret = 0;
	(void)scanf("%d", &num);
	ret = reverse_bit(num);
	printf("%u", ret);
	return 0;
}


#include<stdio.h>
#include<math.h>
unsigned int reverse_bit(unsigned int n)
{
	unsigned int temp = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		temp += ((n >> i) & 1) * 1<<(31-i);
	}
	return temp;
}
int main()
{
	unsigned int num = 0;
	unsigned int ret = 0;
	(void)scanf("%d", &num);
	ret = reverse_bit(num);
	printf("%u", ret);
	return 0;
}


/*
有一个字符数组的内容为"student a am i"
请你将字符数组的内容改为 i am a student
要求：不能使用库函数。
只能开辟有限个空间（空间个数和字符串的长度无关）。
*/

//编写实现reverse
#include<stdio.h>
int my_strlen(char* str1)
{
	char* temp = str1;
	while (*temp != '\0')
	{
		temp++;
	}
	return temp - str1;
}
void my_reverse(char* str)
{
	int i = 0;
	int len = my_strlen(str);
	for (i = 0; i < len / 2; i++)
	{
		char temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
	}
}
int main()
{
	char arr[] = "student a am i";
	printf("没有倒置过的字符串为%s", arr);
	my_reverse(arr);
	printf("\n");
	printf("倒置过的字符串为%s",arr);
	return 0;
}


#include<stdio.h>
int my_strlen(char* str1)
{
	char* temp = str1;
	while (*temp != '\0')
	{
		temp++;
	}
	return temp - str1;
}


//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
#include<stdio.h>
void Swap(int* a, int* b,int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		int temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}
int main()
{
	int arrA[5] = { 1,3,5,7,9};
	int arrB[5] = { 2,4,6,8,10 };
	int i = 0;
	int len = sizeof(arrA) / sizeof(arrA[0]);
	Swap(arrA, arrB, len);
	for (i = 0; i < len; i++)
	{
		printf("%d", arrA[i]);
	}
	printf("\n");
	for (i = 0; i < len; i++)
	{
		printf("%d", arrB[i]);
	}
	return 0;
}


//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定， 输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	int j = 0;
	(void)scanf("%d", &n);
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}
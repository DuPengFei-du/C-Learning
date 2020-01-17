#define _CRT_SECURE_NO_WARNINGS 1



//操作符
#include<stdio.h>
int main()
{
	int a = 10;
	int b = a << 1;
	//<<左移操作符
	//左边丢弃，右边补0
	printf("%d\n", b);
	printf("%d\n",a);
	//return 0;
}


#include<stdio.h>
int main()
{
	int a = -1;
	int b = a << 1;
	//整数在内存中存储的是二进制补码
	//-1的在内存中存储，就是存储32个1，32个1为-1的补码。
	//正数的原，反，补码相同
	//负数：写先原码，最高位为符号位，负数的最高位为1，负数的符号位为1，正数为0
	//反码：在原码的基础上，符号位不动，其他位按位取反，得到反码
	//反码+1得到补码
	printf("%d\n", b);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = -1;
	int b = a >> 1;
	printf("%d\n", b);
	return 0;
	//采用的是算数右移
}


#include<stdio.h>
int main()
{
	int a = 16;
	int b = a >> 1;
	printf("%d", b);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 3;   //011
	int b = 5;   //101
	int c = a & b;    //001
	printf("%d\n", c);
	return 0;
	//结果是1
}


#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	int c = a | b;
	printf("%d\n", c);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 3;  //011
	int b = 5;  //101
	int c = a ^ b;   //110
	printf("%d\n", c);
	return 0;
}


//编写代码实现，求一个整数存储在二进制中1的个数
#include<stdio.h>
int main()
{
	int num = 0;
	int count = 0;
	int i = 0;
	(void)scanf("%d", &num);
	for (i = 0; i < 32; i++)
	{
		if (((num >> i) & 1 )== 1)
			count++;
	}
	printf("%d\n", count);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	a = a + 2;
	a + 2;
	printf("%d\n", a);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	int b = !a;
	printf("%d\n", b);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 3;
	int b = -a;
	printf("%d\n", b);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	printf("%p\n", &a);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	printf("%p\n", &a);
	printf("%x\n", &a);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	int* p = &a;
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr);
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", arr + 1);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);
	return 0;
}

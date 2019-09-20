#include<stdio.h>
int main()
{
	int a = 5;
	float b = 2.0;
	printf("%lf", a / b);
}

#include<stdio.h>
int main()
{
	int a = 10;
	int b = 3;
	int c = a % b;
	printf("%d", c);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 10;
	int b = a << 1;
	printf("%d", b);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = -1;
	int b = a << 1;
	printf("%d", b);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = -1;
	int b = a >> 1;
	printf("%d", b);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	int c = a & b;
	printf("%d", c);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	int c = a | b;
	printf("%d", c);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	int c = a ^ b;
	printf("%d", c);
	return 0;
}

//交换两个数
#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d", a, b);
	return 0;
}


//编写代码实现，求一个整数存储在内存中的二进制中的1的个数
#include<stdio.h>
int main()
{
	//
	//一个整数，存储在内存中的是二进制位的补码，由0和1组成，给一个数字
	//按位与1，得到最低位，然后不要了，得到最低位之后，再接着看第二位，就将这个数字
	//向右移动一位，第二位就来到了最低位，然后利用同样的方法，一直向右移动
	//一直向右移动到向右移动32位。得到内存中的二进制中的1的个数。
	//
	//方法1：
	int num = 10;
	int count = 0;//用来计数
	while (num)
	{
		if (num % 2 == 1)
			count++;
		num = num / 2;
	}
	printf("%d", count);
	return 0;
}
//方法2：
#include<stdio.h>
int main()
{
	int num = 0;
	int i = 0;
	int count = 0;//用来计数
	scanf("%d", &num);
	for (i = 0; i < 32; i++)
	{
		if (((num >> i) & 1) == 1)
			count++;
	}
	printf("%d", count);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 10;
	int b = !a;
	printf("%d", b);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 10;
	int* p = &a;
	*p = 20;
	printf("%d", p);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 10;
	printf("%d", sizeof(a));
	printf("\n");
	printf("%d", sizeof(int));
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 10;
	printf("%d", sizeof a);
	return 0;
}

#include<stdio.h>
int main()
{
	int a[10] = { 0 };
	printf("%d", sizeof(a));//单位为字节
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
int main()
{
	int a = 1;
	char* pa = (char*)& a;
	if (*pa == 1)
		printf("小端\n");
	else
		printf("大端\n");
	return 0;
}


#include<stdio.h>
int CheckSystem()
{
	int a = 1;
	char* pa = (char*)& a;
	return *pa;
}
int main()
{
	int ret = CheckSystem();
	if (ret == 1)
		printf("小端\n");
	else
		printf("大端\n");
	return 0;
}


#include<stdio.h>
int CheckSystem()
{
	union Un
	{
		int i;
		char c;
	}u;
	u. i= 1;
	return u.c;
}
int main()
{
	int ret = CheckSystem();
	if (ret == 1)
		printf("小端\n");
	else
		printf("大端\n");
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
	while (*str)
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
int my_strlen(char* str)
{
	assert(str);
	char* ret = str;
	while (*str)
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
char* My_strcpy(char* dest, const char* source)
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
	char arr[] = "abcdef";
	My_strcpy(arr1, arr);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<assert.h>
char* My_strcat(char* dest, const char* source)
{
	assert(dest);
	assert(source);
	char* ret = dest;
	while (*dest)
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
	char arr1[20] = "ABC";
	char arr[] = "abcdef";
	My_strcat(arr1, arr);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<assert.h>
int My_strcmp(char* str1, const char* str2)
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
	char arr1[20] = "ABC";
	char arr[] = "abcdef";
	int ret = My_strcmp(arr1, arr);
	printf("%d", ret);
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


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "abcdef";
	strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


//模拟实现strcpy
//字符串的拷贝
#include<stdio.h>
void my_strcpy(char* dest, char* source)//用指针接收
{
	while (*source != '\0')
	{
		*dest = *source;
		dest++;
		source++;
	}
	*dest = *source;   //\0最后同样需要拷贝一下
}
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello word";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = "Hello";
	char arr2[] = " world";
	strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "bdefetfsf";
	char arr2[] = "abc";
	int ret = strcmp(arr1, arr2);
	printf("%d", ret);
	return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
	char arr[20] = { 0 };
	char arr1[] = "abc";
	strncpy(arr, arr1, 5);
	printf("%s", arr);
	return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
	char arr[20] = { 0 };
	char arr1[] = "abc";
	strncpy(arr, arr1, 2);
	printf("%s", arr);
	return 0;
}


#include<stdio.h>
#include<assert.h>
#include<string.h>
char* my_strncpy(char* dest, const char* source,size_t count)
{
	assert(dest);
	assert(source);
	int sz = 0;
	char* ret = dest;
	if (strlen(source)< count)
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
	char arr[20] = { 0 };
	char arr1[] = "abc";
	my_strncpy(arr, arr1, 5);
	printf("%s", arr);
	return 0;
}


#include<stdio.h>
int main()
{
	char arr1[30] = "hello world";
	char arr2[] = "change world";
	strncat(arr1, arr2, 3);
	printf("%s", arr1);
	return 0;
}
//追加的时候要主动放一个\0过去
//如果希望追加的字符个数大于我字符串本身的个数的话，不会再像后面追加0.只会链接我字符串本身的长度，然后放一个\0，别的什么操作都没有


#include<stdio.h>
#include<assert.h>
char* my_strncat(char* dest, const char* source, int n)
{
	assert(dest);
	assert(source);
	char* ret = dest;
	while (*dest)
	{
		dest++;
	}
	while(*dest++=*source++)
	{
		;
	}
	*dest = '\0';
	return ret;
}
int main()
{
	char arr[20] = "AB";
	char arr1[] = "abc";
	my_strncat(arr, arr1, 5);
	printf("%s", arr);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	int b = a << 1;
	//<<左移操作符
	//左边丢弃，右边补0
	printf("%d\n", b);
	printf("%d\n", a);
	return 0;
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
	int a = 3;  //011
	int b = 5;  //101
	int c = a ^ b;   //110
	printf("%d\n", c);
	return 0;
}
//结果为6


#include<stdio.h>
int main()
{
	int a = 10;
	a = a + 2;
	a += 2;
	printf("%d\n", a);
	return 0;
}
//其他的诸如此类都是这样的


#include<stdio.h>
int main()
{
	int n = 0;
	int count = 0;
	(void)scanf("%d", &n);
	for (int i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
			count++;
	}
	printf("%d", count);
	return 0;
}


#include<stdio.h>
int main()
{
	int n = 0;
	int count = 0;
	(void)scanf("%d", &n);
	while(n)
	{
		n = n & (n - 1);
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
	printf("%p\n", &a);   //003DF718
	printf("%x\n", &a);   //3df718
	return 0;
}
//%x表示用16进制打印，如果用16进制打印，前面就会少00


#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);      //首元素的地址
	printf("%p\n", &arr[0]); //首元素的地址
	printf("%p\n", &arr);    //数组的地址
	return 0;
}
//三个的值均为00FBFCF0


#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", arr + 1);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0] + 1);
	printf("%p\n", &arr);   //数组的地址
	printf("%p\n", &arr + 1); //数组的地址加1
	return 0;
}
//数组的地址加1跳过的是整个数组


#include<stdio.h>
int main()
{
	int a = 1;
	printf("%d\n", sizeof(a));  //4
	printf("%d\n", sizeof(int));   //4
	return 0;
}
//printf("%d\n",sizeof a);
//sizeof可以对变量省略括号，不能对类型省略括号


#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr)); //40  计算的是数组的大小
	return 0;
}


#include<stdio.h>
void test(int arr[])
{
	printf("%d\n", sizeof(arr));   //数组传参传过来的是首元素的地址，所以结果是4
	//要用指针接收
}
int main()
{
	int arr[10] = { 0 };
	test(arr);
}


#include<stdio.h>
int main()
{
	short a = 10;
	int b = 3;
	printf("%d\n", sizeof(a = b + 5));  //2
	printf("%d\n", a);         //10
	return 0;
}
//值得需要注意的是：
//sizeof是运算符，并不是函数。
//所以sizeof括号中的内容只能算的上是传参，括号中的表达式是不会被计算的。
//所以a的值是并没有发生改变的。
//把int类型的东西非要放在short类型中，那当然是short说了算的，所以sizeof算出来的字节数的结果是2


#include<stdio.h>
int main()
{
	int a = 10;
	int b = a++;
	printf("%d\n", b);  //10
	printf("%d\n", a);  //11
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	int b = ++a;
	printf("%d\n", b);  //11
	printf("%d\n", a);  //11
	return 0;
}


#include <stdio.h>
void test1(int arr[])
{
	printf("%d\n", sizeof(arr));//(2)   //用指针接收的，大小为4
}
void test2(char ch[])
{
	printf("%d\n", sizeof(ch));//(4)  //这里是一个易错的点，他是用指针接收的
	//所以大小还是4，与char是没有任何关系的
}
int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));//(1)
	printf("%d\n", sizeof(ch));//(3)
	test1(arr);
	test2(ch);
	return 0;
}


#include<stdio.h>
int main()
{
	int arr1[] = "abcdef";
	if (arr1 == "abcdef")
	{
		printf("hehe\n");
	}
	return 0;
}
//这段代码是不会打印任何结果的
//arr1其实是首元素的地址，所以是不等于abcdef的
//不能用==来判断字符串和数组是否相等


#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	int c = a && b;
	printf("%d\n", c);
	return 0;
}
//结果为1，逻辑与只看数字的真假


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 5;
	int c = a && b;
	printf("%d\n", c);
	return 0;
}
//结果为0


#include <stdio.h>
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ || ++b || d++;
	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
	return 0;
}
//打印的值为1 3 3 4


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", arr[5]);
	return 0;
}


#include<stdio.h>
struct Stu
{
	char name[20];
	int age;
	char sex[5];
};
int main()
{
	struct Stu s = { "张三", 30, "男" };
	printf("%s\n", s.name);
	printf("%d\n", s.age);
	printf("%s\n", s.sex);
	return 0;
}
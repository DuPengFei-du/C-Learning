#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
struct Stu
{
	//成员变量
	//成员列表
	char name[20];
	short age;
	char sex[5];
	float score;
}s1, s2, s3;  //学生s1,s2,s3   //创建了三个学生出来
int main()
{
	struct Stu s;
	return 0;
}


#include<stdio.h>
struct Stu
{
	//成员变量
	//成员列表
	char name[20];
	short age;
	char sex[5];
	float score;
};
int main()
{
	struct Stu s;      //s是局部变量
	return 0;
}


#include<stdio.h>
typedef struct Stu
{
	char name[20];
	short age;
	char sex[5];
	float score;
}Stu;   //Stu==struct Stu  此处得Stu为类型名，不是变量名
int main()
{
	return 0;
}


#include<stdio.h>
struct Point
{
	int x;
	int y;
	//注意结构体中不能包含自己这一结构体，但是可以包含别的结构体
	//包含自己这个结构体，在算结构体大小的时候就不好算了
};
struct Test
{
	int a;
	char arr[10];
	int* p;
	struct Point;
};
int main()
{
	return 0;
}


#include<stdio.h>
struct Point
{
	int x;
	int y;
}p1;  //声明类型的同时定义p1
int main()
{
	struct Point p2;     //定义结构体变量p2
	return 0;
}
//通常采用p2的方式


#include<stdio.h>
struct Point
{
	int x;
	int y;
};
struct T
{
	char arr[10];
	int age;
	struct Point p;
	int arr2[5];
};
int main()
{
	struct Point p = { 1,2 };
	struct T t = { "hehe",20,{2,4},{1,2,3,4} };
	printf("%s %d %d %d %d %d\n", t.arr, t.age, t.p.x, t.p.y, t.arr2[0], t.arr2[1]);
	return 0;
}


struct Stu
{
	char name[20];
	int age;
};
//如果只有这些代码的话，他是没有向内存中申请空间的。
struct Stu s = { "zhangsan",20 };
//有了上面的创建s对象的那句语句，才算向内存中申请了一定的空间。
//想找到name的话，就用s.name，想找到age的话，就用s.age


#include<stdio.h>
struct Stu
{
	char name[20];
	int age;
};
void Print(struct Stu* s)  //结构体指针
{
	printf("%s %d", s->name, s->age);
}
int main()
{
	struct Stu s = { "张三",20 };
	Print(&s);
	return 0;
}


//解题思路：
//我们可以通过把1存在内存中，然后通过看他的存储形式，我们来判断当前机器到底是大端还是小端
//1的16形式的格式为00000001
//如果存储形式是01000000那么就是小端
//如果存储形式是00000001那么就是大段
//我们可以通过读取第一个字节的内容，来判断到底是大端还是小端，想要读取一个整形的第一个字节，那么存储在char*类型的变量中就可以了。
#include<stdio.h>
int main()
{
	int a = 1;
	char* pa = (char*)& a;
	if (*pa == 1)
		printf("小端");
	else
		printf("大端");
	return 0;
}

//封装成一个函数
#include<stdio.h>
int check_system()
{
	int a = 1;
	char* pa = (char*)& a;
	if (*pa == 1)
		return 1;
	else
		return 0;
}
int main()
{
	int ret = check_system();
	if (ret == 1)
		printf("小端");
	else
		printf("大端");
	return 0;
}


#include<stdio.h>
struct Stu
{
	char name[20];
	int age;
};
union Un
{
	int i;
	char c;
};    //联合体类型
int main()
{
	union Un u = { 0 };   //u为联合体对象
	printf("%d\n", sizeof(u));   //结果为4
	printf("%p\n", &u);
	printf("%p\n", &(u.i));
	printf("%p\n", &(u.c));
	//三个的地址是一模一样的，说明i和c占用同一块空间
	//所以联合体又叫共用体，共用体的意思就是我的成员要共用同一块空间
	//那么我给i里面放东西c就会发生变化
	//我给c里面放东西，i也会发生变化
	//c是i占的四个字节中的第一个字节，这也解决了大小端算法的另一种解法问题
	return 0;
}


#include<stdio.h>
int check_system()
{
	union Un
	{
		int i;
		char c;
	}u;
	u.i = 1;
	return u.c;
}
int main()
{
	int ret = check_system();
	if (ret == 1)
		printf("小端");
	else
		printf("大端");
	return 0;
}


#include<stdio.h>
int main()
{
	int n = 9;
	//9存在内存中，存储的时他的补码
	//00000000000000000000000000001001
	float* pFloat = (float*)& n;
	//要把一个整形，转换层成一个浮点型，那么现在就来转换一下
	//0 00000000 00000000000000000001001
	//又因为上述浮点型的存储中E全为0，所以这个数字是一个无限接近于0的数字 ，所以打印的结果为0.000000
	printf("n的值为:%d\n", n);
	//以整形的形式存入，再以整形的形式取出，那么结果当然还是整形了，所以说结果为9;
	printf("*pFloat的值为:%f\n", *pFloat);
	//要把一个整形，转换层成一个浮点型，那么现在就来转换一下
	//0 00000000 00000000000000000001001
	//又因为上述浮点型的存储中E全为0，所以这个数字是一个无限接近于0的数字 ，所以打印的结果为0.000000
	*pFloat = 9.0;
	printf("n的值为:%d\n", n);
	//以浮点数的形式存进去，以浮点数的形式往出拿
	//先将9写成二进制的形式
	//1001.0
	//1.001*2^3;
	//0 100000010 00100000000000000000000  --补码
	//整数，原，反，补相同
	//所以结果为010000001000100000000000000000000  --结果为1091567616
	printf("*pFloat的值为:%f\n", *pFloat);
	//以浮点数形式存进去，再以浮点是结果拿出来，结果是不会变化的
	//结果为9.000000
	return 0;
}
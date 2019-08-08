//求方程ax方+bx+c的根
/*
a,b,c由键盘输入，设b方-4ac>0;
解题思路：首先要知道求方程式根的方法。由数学知识可以知道，如果b方-4ac>=0，则一元二次方程就有两个实根
x1=（-b+根号下b方-4ac）/2a；x2=（-b+根号下b方-4ac）/2a；
可以将上面的式子拆分为两项，一项为p，另一项为q，有了这些式子，只要知道a,b,c的值，就可以求出方程的根了
*/
#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, z, x1, x2, p, q;
	scanf("%lf %lf %lf", &a, &b, &c);
	z = b * b - 4 * a * c;
	p = -b / (2.0 * a);
	q = sqrt(z) / (2.0 * a);
	x1 = p + q;
	x2 = p - q;
	printf("x1=%7.2f\nx2=%7.2f\n", x1, x2);
	return 0;
}
/*
在printf函数中，不是简单地用%lf格式说明，而是在格式符lf前面加了7.2
表示在输出x1和x2的时候，指定了数据占7列，其中小数占2列
这样做的好处是：1）可以根据实际需要来输出小数的位数，因为并不是任何时候都需要六位小数的
例如价格只需要两位小数就可以了（第三位按四舍五入来处理）
2）如果输出多个数据，各占一行，而用同一个格式声明（如%7.2f）即使输出的数据整数部分值不同，
但输出时上下行必然按小数点对齐，使得输出的数据美观
*/


#include<stdio.h>
int main()
{
	printf("%5d\n%5d\n", 12, -345);
	return 0;
}

#include<stdio.h>
int main()
{
	char ch = 'a';
	printf("%c", ch);
	return 0;
}

#include<stdio.h>
int main()
{
	double a = 1.0;
	printf("%f\n", a / 3);
	return 0;
}

#include<stdio.h>
int main()
{
	char a = 'B';
	char b = 'O';
	char c = 'Y';
	putchar(a);
	putchar(b);
	putchar(c);
	putchar('\n');//向像是其输出一个换行符
	return 0;
}


#include<stdio.h>
int main()
{
	char a, b, c;
	a = getchar();//从键盘输入一个字符，送给字符变量a
	b = getchar();//从键盘输入一个字符，送给字符变量b
	c = getchar();//从键盘输入一个字符，送给字符变量c
	putchar(a);
	putchar(b);
	putchar(c);
	putchar('\n');
	return 0;
}



//假如我国国民生产总值的年增长率为%9
//计算10年后我国国民生产总值与现在相比增长多少百分比
//计算公式为p=（1+r)的n次方
//r为年增长率，n为年数，p为与现在相比的倍数
#include<stdio.h>
#include<math.h>
int main()
{
	float p, r, n;
	r = 0.09;
	n = 10;
	p = pow(1 + r, n);
	printf("%f", p);
	return 0;
}
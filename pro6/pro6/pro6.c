//�󷽳�ax��+bx+c�ĸ�
/*
a,b,c�ɼ������룬��b��-4ac>0;
����˼·������Ҫ֪���󷽳�ʽ���ķ���������ѧ֪ʶ����֪�������b��-4ac>=0����һԪ���η��̾�������ʵ��
x1=��-b+������b��-4ac��/2a��x2=��-b+������b��-4ac��/2a��
���Խ������ʽ�Ӳ��Ϊ���һ��Ϊp����һ��Ϊq��������Щʽ�ӣ�ֻҪ֪��a,b,c��ֵ���Ϳ���������̵ĸ���
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
��printf�����У����Ǽ򵥵���%lf��ʽ˵���������ڸ�ʽ��lfǰ�����7.2
��ʾ�����x1��x2��ʱ��ָ��������ռ7�У�����С��ռ2��
�������ĺô��ǣ�1�����Ը���ʵ����Ҫ�����С����λ������Ϊ�������κ�ʱ����Ҫ��λС����
����۸�ֻ��Ҫ��λС���Ϳ����ˣ�����λ����������������
2��������������ݣ���ռһ�У�����ͬһ����ʽ��������%7.2f����ʹ�����������������ֵ��ͬ��
�����ʱ�����б�Ȼ��С������룬ʹ���������������
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
	putchar('\n');//�����������һ�����з�
	return 0;
}


#include<stdio.h>
int main()
{
	char a, b, c;
	a = getchar();//�Ӽ�������һ���ַ����͸��ַ�����a
	b = getchar();//�Ӽ�������һ���ַ����͸��ַ�����b
	c = getchar();//�Ӽ�������һ���ַ����͸��ַ�����c
	putchar(a);
	putchar(b);
	putchar(c);
	putchar('\n');
	return 0;
}



//�����ҹ�����������ֵ����������Ϊ%9
//����10����ҹ�����������ֵ����������������ٰٷֱ�
//���㹫ʽΪp=��1+r)��n�η�
//rΪ�������ʣ�nΪ������pΪ��������ȵı���
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
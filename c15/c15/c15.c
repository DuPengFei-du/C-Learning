#include<stdio.h>
int main()
{
	int n = 0;
	(void)scanf("%d", &n);
	int a = 1;
	int b = 1;
	int c = 0;
	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	printf("%d", b);
	return 0;
}



int Fib(int first, int second, int n)
{
	if (n <= 2)
	{
		return n - 1;
	}
	else if (n == 3)
	{
		return first + second;
	}
	else
	{
		return Fib(second, first + second, n - 1);
	}

}
int main()
{
	int n;
	scanf("%d", &n);
	int ret = Fib(0, 1, n);
	printf("%d", ret);
	return 0;
}


int Fib(int n)
{
	if (n == 1)
	{
		return 0;
	}
	if (n == 2)
	{
		return 1;
	}
	int f1 = 0;
	int f2 = 1;
	int c = 0;
	for (int i = 3; i <= n; i++)
	{
		c = f1 + f2;
		f1 = f2;
		f2 = c;
	}
	return c;
}
int main()
{
	int n;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d", ret);
	return 0;
}


//实现n的k次方
#include<stdio.h>
double Pow(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	else if (k > 0)
	{
		return n * Pow(n, k - 1);
	}
	else
	{
		return 1.0 / Pow(n, -k);
	}
}
int main()
{
	int n = 0;
	int k = 0;
	double ret = 0;
	(void)scanf("%d %d", &n, &k);
	ret = Pow(n, k);//N的k次方
	printf("%lf", ret);
	return 0;
}


#include<stdio.h>
int Dignum(unsigned int n)
{
	if (n < 9)
	{
		return n;
	}
	else
	{
		return Dignum(n / 10) + n % 10;
	}
}
int main()
{
	unsigned int n = 0;
	int ret = 0;
	(void)scanf("%u", &n);
	ret = Dignum(n);
	printf("%d", ret);
	return 0;
}


//逆序字符串
#include<stdio.h>
int my_strlen(char* str)
{
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + my_strlen(str + 1);
	}
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
	reverse_string(arr);
	my_strlen(arr);
	printf("%s", arr);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 10;
	int* p = &a;
	*p = 20;
	printf("%d", a);
	return 0;
}
/*
汉诺塔问题：
汉诺塔问题是一个古典的数学问题，是一个用递归方法解题的例子。
问题是这样的：古代有一个塔，塔内由三个座，A,B,C，开始时A座上有64个盘子，盘子的大小不等
大的在下面，小的在上面，有一个老和尚想把这64个盘子从A座移动到C座，但规定每次只允许移动一个盘子
并且再移动的过程中在3个座上都始终保持大的盘子在下面，小的盘子在上面，在移动的过程中可以利用B座
要求编程序输出移动盘子的步骤
解题思路：
老和尚可以这样做：
（1）命令第二个和尚将63个盘子从A座移动到B座；
（2）自己将1个盘子（最下面那个最大的盘子）从A座移动到C座；
（3）在命令第二个和尚将63个盘子从B座移动到C座；
至此全部的任务就已经完成了，这就是递归的方法。但是有一个实际的问题并没有解决，第二个和尚如何将63个盘子从
A座移动到B座；为了解决63个盘子从A座移动到B座，第二个和尚又开始想，如果有任能将62个盘子从一个座移动到另一个座，
我就可以将63个盘子从A座移动到B座；
他是这样做的：
(1)命令第三个和尚将62个盘子从A座移动到C座；
（2）自己将最下面的那一个盘子，从A座移动到B座；
（3）在命令第三个和尚将63个盘子从C座移动到B座；
在进行一次递归，如此层层下放，直到后来找到了第63个和尚，让他完成将一个盘子从
一个座移动到另一个座，至此，全部的工作都已经全部落实，都是可以执行的；
可以看出递归结束条件是64个和尚的任务完成之后，第63个和尚的任务才能完成，这是一个典型的递归问题
可得出，移动n个盘子需要经历2的n次方-1步，如移动4个盘子经历15步，5个盘子，经历31步
*/
//#include<stdio.h>
int main()
{
	void hanoi(int n, char one, char two, char three);//对hanoi函数的声明
	int m;
	printf("input the number of diskes:");
	scanf("%d", &m);
	printf("The step to move %d diskes:\n", m);
	hanoi(m, 'A', 'B', 'C');
}
void hanoi(int n, char one, char two, char three)//定义hanoi函数
{
	//将n个盘子从one座借助two座移动到three座
		void move(char x, char y);//对move函数的声明
	if (n == 1)
		move(one, three);
	else
	{
		hanoi(n - 1, one, three, two);
		move(one, three);
		hanoi(n - 1, two, one, three);
	}
}
void move(char x, char y)//定义move函数
{
	printf("%c-->%c\n", x, y);
}
//在本程序中的move函数并未真正的移动盘子，而只是输出移动盘子的方案（从哪移动到哪里）
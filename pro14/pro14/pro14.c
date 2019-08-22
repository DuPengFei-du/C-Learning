//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[] = { "China\nBeijing" };
//	puts(str);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str1[30] = { "People's Republic of " };
//	char str2[] = { "China" };
//	printf("%s", strcat(str1, str2));
//	return 0;
//}


//用do..while在屏幕上打印1-10
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}


//输入一行字符，统计其中有多少个单词，单词之间用空格隔开
/*
问题的关键在于怎样能够确定出现了一个新的单词了；
可以采用这样的方法：从第一个字符开始逐个字符进行检查，判断此字符是否是新单词的开头，如果是
就使得变量num的值加1（用变量num统计单词的个数）最后得到的num的数值就是单词的总数
判断是否出现新的单词，可以由是否有空格的出现来决定（连续的若干个空格作为出现一次空格，一行
开头的空格不统计在内），如果测出某一个字符为非空格，而他的前面的字符是空格，
那么就表示新的单词开始了，此时num的数值就会加1.
如果当前字符为非空格而其前面的字符也为非空格，则意味着仍然是原来那个单词的继续，此时num的
数值不应该发生改变。用变量word作为判别当前是否开始了一个新单词的标志。若word=0表示未出现新单词，
如果出现了新的单词，就把word的值赋为1；
*/
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[100];
//	int word = 0, num = 0, i;
//	char c;
//	//gets(str);//输入一个字符串;
//	for (i = 0; (c = str[i]) != '\0'; i++)
//		if (c == ' ')
//			word = 0;//如果是空格字符，那么就将word的值置为0
//		else if (word == 0)//如果不是空格字符且word的原来的值为0
//		{
//			word = 1;//使word的值置为1
//			num++;//num累加1，表示增加一个单词
//		}
//	printf("%d", num);
//	return 0;
//}


//计算n的阶乘
//#include<stdio.h>
//int main()
//{
//	int n;
//	int i = 1;
//	int sum = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum * i;
//	}
//	printf("%d", sum);
//	return 0;
//}


//计算1的阶乘加到10的阶乘
//#include<stdio.h>
//int main()
//{
//	int n;
//	int i = 1;
//	int sum = 1;
//	int ret = 0;
//	scanf("%d", &n);
//	for (n = 1; n <= 10; n++)
//	{
//		while(i<=n)
//		{
//			sum = sum * i;
//			i++;
//		}
//		ret = ret + sum;
//	}
//	printf("%d", ret);
//	return 0;
//}



//二分查找
//二分查找只能查找有序的一段序列
/*
二分查找，首先要确定所查找范围的左右下标，左边的下标为0；右边的下标为数组的元素的个数-1；
左右下标确定好了之后，就要确定中间位置的下标了，确定中间位置的下标有两种方法可以确定
一种是左边的下标+右边的下标除以2得到中间元素的下标，这是一种
还有一种是left+（right-left）/2然后得到中间元素的下标，这个过程是每次循环都要进行的
然后就是进行左右下表的不断调整，将所要寻找的元素设置成key
*/
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//	int key = 18;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	while (left <= right)
//	{
		//int mid = left + (right - left) / 2;
		//if (arr[mid] > key)
		//{
		//	right = mid - 1;
		//}
		//if (arr[mid] < key)
		//{
		//	left = mid + 1;
		//}
		//else
		//{
		//	printf("找到了，下标是%d\n", mid);
		//	break;
		//}
//	}
//	if (left >right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//写一个函数，实现二分查找
//#include<stdio.h>
//int BinarySearch(int arr[], int sz,int key)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	int ret = 0;
//	int key = 18;
//	ret=BinarySearch(arr, sz,key);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d",ret);
//	}
//}


//多个字符从两端移动向中间汇聚
//#include<stdio.h>
//#include<string.h>//作用于字符串
//int main()
//{
//	char str1[] = { "Welcome to bit!!!\n" };
//	char str2[] = { "#################\n" };
//	int left = 0;
//	int right = strlen(str1) - 1;
//	while (left <= right)
//	{
//		str2[left] = str1[left];
//		str2[right] = str1[right];
//		printf("%s", str2);
//		left++;
//		right--;
//	}
//	return 0;
//}
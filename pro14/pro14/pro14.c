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


//��do..while����Ļ�ϴ�ӡ1-10
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


//����һ���ַ���ͳ�������ж��ٸ����ʣ�����֮���ÿո����
/*
����Ĺؼ����������ܹ�ȷ��������һ���µĵ����ˣ�
���Բ��������ķ������ӵ�һ���ַ���ʼ����ַ����м�飬�жϴ��ַ��Ƿ����µ��ʵĿ�ͷ�������
��ʹ�ñ���num��ֵ��1���ñ���numͳ�Ƶ��ʵĸ��������õ���num����ֵ���ǵ��ʵ�����
�ж��Ƿ�����µĵ��ʣ��������Ƿ��пո�ĳ��������������������ɸ��ո���Ϊ����һ�οո�һ��
��ͷ�Ŀո�ͳ�����ڣ���������ĳһ���ַ�Ϊ�ǿո񣬶�����ǰ����ַ��ǿո�
��ô�ͱ�ʾ�µĵ��ʿ�ʼ�ˣ���ʱnum����ֵ�ͻ��1.
�����ǰ�ַ�Ϊ�ǿո����ǰ����ַ�ҲΪ�ǿո�����ζ����Ȼ��ԭ���Ǹ����ʵļ�������ʱnum��
��ֵ��Ӧ�÷����ı䡣�ñ���word��Ϊ�б�ǰ�Ƿ�ʼ��һ���µ��ʵı�־����word=0��ʾδ�����µ��ʣ�
����������µĵ��ʣ��Ͱ�word��ֵ��Ϊ1��
*/
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[100];
//	int word = 0, num = 0, i;
//	char c;
//	//gets(str);//����һ���ַ���;
//	for (i = 0; (c = str[i]) != '\0'; i++)
//		if (c == ' ')
//			word = 0;//����ǿո��ַ�����ô�ͽ�word��ֵ��Ϊ0
//		else if (word == 0)//������ǿո��ַ���word��ԭ����ֵΪ0
//		{
//			word = 1;//ʹword��ֵ��Ϊ1
//			num++;//num�ۼ�1����ʾ����һ������
//		}
//	printf("%d", num);
//	return 0;
//}


//����n�Ľ׳�
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


//����1�Ľ׳˼ӵ�10�Ľ׳�
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



//���ֲ���
//���ֲ���ֻ�ܲ��������һ������
/*
���ֲ��ң�����Ҫȷ�������ҷ�Χ�������±꣬��ߵ��±�Ϊ0���ұߵ��±�Ϊ�����Ԫ�صĸ���-1��
�����±�ȷ������֮�󣬾�Ҫȷ���м�λ�õ��±��ˣ�ȷ���м�λ�õ��±������ַ�������ȷ��
һ������ߵ��±�+�ұߵ��±����2�õ��м�Ԫ�ص��±꣬����һ��
����һ����left+��right-left��/2Ȼ��õ��м�Ԫ�ص��±꣬���������ÿ��ѭ����Ҫ���е�
Ȼ����ǽ��������±�Ĳ��ϵ���������ҪѰ�ҵ�Ԫ�����ó�key
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
		//	printf("�ҵ��ˣ��±���%d\n", mid);
		//	break;
		//}
//	}
//	if (left >right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}


//дһ��������ʵ�ֶ��ֲ���
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
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d",ret);
//	}
//}


//����ַ��������ƶ����м���
//#include<stdio.h>
//#include<string.h>//�������ַ���
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
#define _CRT_SECURE_NO_WARNGINS 1



#include<stdio.h>
int main()
{
	//����Ҳ��һ���Զ�������
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));                //40
	printf("%d\n", sizeof(int[10]));          //40
	int a = 10;
	sizeof(int);  //���Ե�
	sizeof(a);    //���Ե�
	//��ô�������ˣ������������ʲô�أ�
	//��������ͣ���������ȥ��������ʣ�µĲ���
	//������������������� int arr[10],��ô��������;���int [10]
}


#include<stdio.h>
void test()
{
	printf("hehe");
}
int main()
{
	test(20);
	return 0;
}
//��Ļ�ϴ�ӡ�Ľ����hehe����Ȼtest����ʵ������û�в����ģ�����������������test����ʱ�򣬻��Ǵ��˲�����������û���κ�Ӱ��ġ�
//�㴫��������飬�ҽӲ��������ҵ����顣
//�������û�в����Ļ�����û�����test�����������м�һ��void���������������û�в����ġ�


#include<stdio.h>
int main()
{
	int a = 0x11223344;
	//0x11223344����a�����Ǹոպõ�
	//��Ϊ11��һ���ֽڣ�22��һ���ֽڣ�33��һ���ֽڣ�44��һ���ֽ�
	//ͨ�����ӿ���ת����16���ƣ��۲쵽a��ֵΪ0x11223344
	//ͨ���ڴ濴������&a�����Թ۲쵽��a��ʾΪ44332211
	return 0;
}
//�������ڴ��еĴ洢�д���ֽ����С���ֽ��������


/*
ԭ�룺ֱ�ӽ������ư�����������ʽ����ɶ����ƾͿ�����
���룺��ԭ��ķ���λ���䣬����λ��λȡ���Ϳ��Եõ���
���룺�����1�ǲ���
*/


#include<stdio.h>
int main()
{
	int a = -10;
	//10000000000000000000000000001010  --ԭ��
	//11111111111111111111111111110101  --����
	//11111111111111111111111111110110  --����
	//fffffff6               ---����ת����16���Ƶ�����
	//�������ڴ���&a��ʾ�Ľ����f6ffffff
}


//�жϻ����Ǵ�˻���С��
#include<stdio.h>
int main()
{
	int a = 1;
	char* pa = (char*)& a;
	if (*pa == 1)
		printf("С��");
	else
		printf("���");
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
	if(ret==1)
		printf("С��");
	else
		printf("���");
}


#include<stdio.h>
int CheckSystem()
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
	int ret = CheckSystem();
	if(ret==1)
		printf("С��");
	else
		printf("���");
}
//int* pi;
//char* pc;
//float* pf;
//void* pv;


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
//��Ļ�ϴ�ӡ�Ľ����hehe����Ȼtest����ʵ������û�в�����
//����������������test����ʱ�򣬻��Ǵ��˲�����������û���κ�Ӱ��ġ�
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


#include<stdio.h>
int main()
{
	//����˵������һ��1-1�Ľ���Ƕ���
	//�����ź����ǣ���������������
	//����ֻ�ðѼ���ת��Ϊ�ӷ�����ʽ
	//1 - 1;
	1 + (-1);
	//�����ԭ��������Ļ�
	// 1��ԭ��
	//00000000000000000000000000000001
	//-1��ԭ��
	//10000000000000000000000000000001
	//��������ӵĽ��Ϊ
	//10000000000000000000000000000010
	//�������ԭ��ֱ����ӵĻ��������Ϊ-2������Ȼ�ǲ���ȷ��
	//���Կ�ѧ�����Ƴ��˲���ĸ���
	//�ò��������ʱ�򣬿��������ȷ�Ľ��
}


//����˼·��
//���ǿ���ͨ����1�����ڴ��У�Ȼ��ͨ�������Ĵ洢��ʽ���������жϵ�ǰ���������Ǵ�˻���С��
//1��16��ʽ�ĸ�ʽΪ00000001
//����洢��ʽ��01000000��ô����С��
//����洢��ʽ��00000001��ô���Ǵ��
//���ǿ���ͨ����ȡ��һ���ֽڵ����ݣ����жϵ����Ǵ�˻���С�ˣ���Ҫ��ȡһ�����εĵ�һ���ֽڣ���ô�洢��char*���͵ı����оͿ����ˡ�
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

//��װ��һ������
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
		printf("С��");
	else
		printf("���");
	return 0;
}


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
int CheckCapacity()
{
	int a = 1;
	char* pa = (char*)& a;
	return *pa;
}
int main()
{
	int ret = CheckCapacity();
	if (ret == 1)
		printf("С��");
	else
		printf("���");
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
};    //����������
int main()
{
	union Un u = { 0 };   //uΪ���������
	printf("%d\n", sizeof(u));   //���Ϊ4
	printf("%p\n", &u);
	printf("%p\n", &(u.i));
	printf("%p\n", &(u.c));
	//�����ĵ�ַ��һģһ���ģ�˵��i��cռ��ͬһ��ռ�
	//�����������ֽй����壬���������˼�����ҵĳ�ԱҪ����ͬһ��ռ�
	//��ô�Ҹ�i����Ŷ���c�ͻᷢ���仯
	//�Ҹ�c����Ŷ�����iҲ�ᷢ���仯
	//c��iռ���ĸ��ֽ��еĵ�һ���ֽڣ���Ҳ����˴�С���㷨����һ�ֽⷨ����
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
		printf("С��");
	else
		printf("���");
	return 0;
}


#include<stdio.h>
int main()
{
	char a = -1;
	signed char b = -1;
	//char��signed char��ʵ��һ���ã�����ǰ�����ý��һ����һ����
	//-1�Ĳ���Ϊ��11111111111111111111111111111111
	//���浽char��Ϊ11111111
	//����Ϊ��11111110
	//ԭ��Ϊ��10000001  --����˵ǰ�����Ľ��Ϊ-1 �� -1
	//�з��ŵ����ͣ���λ����Ҫ�����Ƿ���λ
	unsigned char c = -1;
	//c�����ڴ��� 11111111---����
	//����Ϊc���޷����������Ը�c�ĸ�λ��0
	//00000000000000000000000011111111  -- ����
	//����Ϊ���λ��0������˵Ϊ������������ԭ����������ͬ
	//����c�Ľ��Ϊ255  8��1�Ľ��Ϊ255
	printf("a=%d,b=%d,c=%d", a, b, c);
	//-1 -1 255
	return 0;
}


#include<stdio.h>
int main()
{
	unsigned int i;
	//�޷��ŵ�������û�и�����
	//�ж�����Ϊi>=0�������޷��ŵģ�i>=0�����������
	//���Խ��Ϊ��ѭ��
	for (i = 9; i >= 0; i--)
	{
		printf("%u\n", i);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	char a[1000];
	int i;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d", strlen(a));
	//ʲôʱ������\0�����Ⱦ��Ƕ��٣��ο�char�ķ�Χ���ĸ�ԲȦ
	//���Խ��Ϊ255
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"contact.h"
#include<string.h>
#include<assert.h>
void InitContact(Contact* pcon)
{
	pcon->sz = 0;
	memset(pcon->data, 0, MAX * sizeof(PeoInfo));
}
void ShowContact(const Contact* pcon)
{
	int i = 0;
	printf("%10s\t%5s\t%5s\t%12s\t%20s\t\n", "����", "�Ա�", "����", "�绰", "��ַ");
	for (i = 0; i < pcon->sz; i++)
	{
		printf("%10s\t%5s\t%5d\t%12s\t%20s\t\n",
			pcon->data[i].name, 
			pcon->data[i].sex,
			pcon->data[i].age,
			pcon->data[i].tele,
			pcon->data[i].addr);
	}
}
void AddContact(Contact* pcon)
{
	assert(pcon != NULL);
	if (pcon->sz == MAX)
	{
		printf("ͨѶ¼�Ѿ����ˣ��޷����\n");
	}
	else
	{
		printf("���������֣�>");
		(void)scanf("%s", pcon->data[pcon->sz].name);
		printf("���������䣺>");
		(void)scanf("%s", &(pcon->data[pcon->sz].age));
		printf("�������Ա�>");
		(void)scanf("%s", (pcon->data[pcon->sz].sex));
		printf("������绰��>");
		(void)scanf("%s", (pcon->data[pcon->sz].tele));
		printf("�������ַ��>");
		(void)scanf("%s", (pcon->data[pcon->sz].addr));
		pcon->sz++;
		printf("��ӳɹ�\n");
	}
}
static int FindEntry(Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
			return i;
	}
	return -1;
}
void DelContact(Contact* pcon)
{
	char name[NAME_MAX] = { 0 };
	int ret = 0;
	printf("������Ҫɾ�����˵�����\n");
	scanf("%s", name);
	ret = FindEntry(pcon, name);
	if (ret == -1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		//����ɾ������
		int i = 0;
		for (i = 0; i < pcon->sz; i++)
		{
			pcon->data[i] = pcon->data[i + 1];
		}
		pcon->sz--;
		printf("ɾ���ɹ�\n");
	}
}
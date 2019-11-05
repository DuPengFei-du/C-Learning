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
	printf("%10s\t%5s\t%5s\t%12s\t%20s\t\n", "名字", "性别", "年龄", "电话", "地址");
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
		printf("通讯录已经满了，无法添加\n");
	}
	else
	{
		printf("请输入名字：>");
		(void)scanf("%s", pcon->data[pcon->sz].name);
		printf("请输入年龄：>");
		(void)scanf("%s", &(pcon->data[pcon->sz].age));
		printf("请输入性别：>");
		(void)scanf("%s", (pcon->data[pcon->sz].sex));
		printf("请输入电话：>");
		(void)scanf("%s", (pcon->data[pcon->sz].tele));
		printf("请输入地址：>");
		(void)scanf("%s", (pcon->data[pcon->sz].addr));
		pcon->sz++;
		printf("添加成功\n");
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
	printf("请输入要删除的人的名字\n");
	scanf("%s", name);
	ret = FindEntry(pcon, name);
	if (ret == -1)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		//进行删除操作
		int i = 0;
		for (i = 0; i < pcon->sz; i++)
		{
			pcon->data[i] = pcon->data[i + 1];
		}
		pcon->sz--;
		printf("删除成功\n");
	}
}
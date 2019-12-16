


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define N 20
typedef struct {
	char num[10];
	char startsa[10];
	char endsa[10];
	char date[10];
	char startti[10];
	char endti[10];
	char type[10];
	char price[10];
}Fight;
typedef struct {
	Fight elem[N];
	int length;
}Table;
void Save(Table& F, int n)
{
	int i;
	FILE* fp;
	fp = fopen("fight.txt", "r"); //需手动准备好fight.txt文件    
	for (i = 1; i <= n; i++) {
		(void)fscanf(fp, "%s%s%s%s%s%s%s%s", F.elem[i].num, F.elem[i].startsa, F.elem[i].endsa, F.elem[i].date, F.elem[i].startti, F.elem[i].endti, F.elem[i].type, F.elem[i].price);
	}
	F.length = n;
	fclose(fp);
}
void numsort(Table& F) {
	//冒泡排序
	int i, j;
	for (i = 1; i <= F.length; i++) {
		for (j = 1; j <= F.length - i; j++) {
			if (strcmp(F.elem[j].num, F.elem[j + 1].num) == 1) {
				F.elem[0] = F.elem[j];
				F.elem[j] = F.elem[j + 1];
				F.elem[j + 1] = F.elem[0];
			}
		}
	}
}
void numsearch(Table& F, char key[10]) {
	numsort(F);
	//折半查找 
	int mid, low, high;
	low = 1; high = F.length;
	while (low <= high) {
		mid = (low + high) / 2;
		if (strcmp(key, F.elem[mid].num) == 0) {
			printf("%s %s %s %s %s %s %s %s\n", F.elem[mid].num, F.elem[mid].startsa, F.elem[mid].endsa, F.elem[mid].date, F.elem[mid].startti, F.elem[mid].endti, F.elem[mid].type, F.elem[mid].price);
			break;
		}
		else if (strcmp(key, F.elem[mid].num) == -1) {
			high = mid - 1;
		}
		else
			low = mid + 1;
	}
}
void startsasort(Table& F) {
	//冒泡排序
	int i, j;
	for (i = 1; i <= F.length; i++) {
		for (j = 1; j <= F.length - i; j++) {
			if (strcmp(F.elem[j].startsa, F.elem[j + 1].startsa) == 1) {
				F.elem[0] = F.elem[j];
				F.elem[j] = F.elem[j + 1];
				F.elem[j + 1] = F.elem[0];
			}
		}
	}
}
void startsasearch(Table& F, char key[10]) {
	startsasort(F);
	//折半查找 
	int mid, low, high;
	low = 1; high = F.length;
	while (low <= high) {
		mid = (low + high) / 2;
		if (strcmp(key, F.elem[mid].startsa) == 0) {
			printf("%s %s %s %s %s %s %s %s\n", F.elem[mid].num, F.elem[mid].startsa, F.elem[mid].endsa, F.elem[mid].date, F.elem[mid].startti, F.elem[mid].endti, F.elem[mid].type, F.elem[mid].price);
			break;
		}
		else if (strcmp(key, F.elem[mid].startsa) == -1) {
			high = mid - 1;
		}
		else
			low = mid + 1;
	}
}
void endsasort(Table& F) {
	//冒泡排序
	int i, j;
	for (i = 1; i <= F.length; i++) {
		for (j = 1; j <= F.length - i; j++) {
			if (strcmp(F.elem[j].endsa, F.elem[j + 1].endsa) == 1) {
				F.elem[0] = F.elem[j];
				F.elem[j] = F.elem[j + 1];
				F.elem[j + 1] = F.elem[0];
			}
		}
	}
}
void endsasearch(Table& F, char key[10]) {
	endsasort(F);
	//折半查找 
	int mid, low, high;
	low = 1; high = F.length;
	while (low <= high) {
		mid = (low + high) / 2;
		if (strcmp(key, F.elem[mid].endsa) == 0) {
			printf("%s %s %s %s %s %s %s %s\n", F.elem[mid].num, F.elem[mid].startsa, F.elem[mid].endsa, F.elem[mid].date, F.elem[mid].startti, F.elem[mid].endti, F.elem[mid].type, F.elem[mid].price);
			break;
		}
		else if (strcmp(key, F.elem[mid].endsa) == -1) {
			high = mid - 1;
		}
		else
			low = mid + 1;
	}
}
void starttisort(Table& F) {
	//冒泡排序
	int i, j;
	for (i = 1; i <= F.length; i++) {
		for (j = 1; j <= F.length - i; j++) {
			if (strcmp(F.elem[j].startti, F.elem[j + 1].startti) == 1) {
				F.elem[0] = F.elem[j];
				F.elem[j] = F.elem[j + 1];
				F.elem[j + 1] = F.elem[0];
			}
		}
	}
}
void starttisearch(Table& F, char key[10]) {
	starttisort(F);
	//折半查找 
	int mid, low, high;
	low = 1; high = F.length;
	while (low <= high) {
		mid = (low + high) / 2;
		if (strcmp(key, F.elem[mid].startti) == 0) {
			printf("%s %s %s %s %s %s %s %s\n", F.elem[mid].num, F.elem[mid].startsa, F.elem[mid].endsa, F.elem[mid].date, F.elem[mid].startti, F.elem[mid].endti, F.elem[mid].type, F.elem[mid].price);
			break;
		}
		else if (strcmp(key, F.elem[mid].startti) == -1) {
			high = mid - 1;
		}
		else
			low = mid + 1;
	}
}
void endtisort(Table& F) {
	//冒泡排序
	int i, j;
	for (i = 1; i <= F.length; i++) {
		for (j = 1; j <= F.length - i; j++) {
			if (strcmp(F.elem[j].endti, F.elem[j + 1].endti) == 1) {
				F.elem[0] = F.elem[j];
				F.elem[j] = F.elem[j + 1];
				F.elem[j + 1] = F.elem[0];
			}
		}
	}
}
void endtisearch(Table& F, char key[10]) {
	endtisort(F);
	//折半查找 
	int mid, low, high;
	low = 1; high = F.length;
	while (low <= high) {
		mid = (low + high) / 2;
		if (strcmp(key, F.elem[mid].endti) == 0) {
			printf("%s %s %s %s %s %s %s %s\n", F.elem[mid].num, F.elem[mid].startsa, F.elem[mid].endsa, F.elem[mid].date, F.elem[mid].startti, F.elem[mid].endti, F.elem[mid].type, F.elem[mid].price);
			break;
		}
		else if (strcmp(key, F.elem[mid].endti) == -1) {
			high = mid - 1;
		}
		else
			low = mid + 1;
	}
}
void Out(Table F) {
	int i;
	for (i = 1; i <= F.length; i++) {
		printf("%s %s %s %s %s %s %s %s\n", F.elem[i].num, F.elem[i].startsa, F.elem[i].endsa, F.elem[i].date, F.elem[i].startti, F.elem[i].endti, F.elem[i].type, F.elem[i].price);
	}
}
void Search(Table F) {
	int x;
	char n[10];
	printf("1.航班号查询\n");
	printf("2.起点站查询\n");
	printf("3.到达站查询\n");
	printf("4.起飞时间查询\n");
	printf("5.到达时间查询\n");
	(void)scanf("%d", &x);
	switch (x) {
	case 1:
		printf("输入航班号：");
		(void)scanf("%s", n);
		numsearch(F, n);
		break;
	case 2:
		printf("输入起点站：");
		(void)scanf("%s", n);
		startsasearch(F, n);
		break;
	case 3:
		printf("输入到达站：");
		(void)scanf("%s", n);
		endsasearch(F, n);
		break;
	case 4:
		printf("输入起飞时间站：");
		(void)scanf("%s", n);
		starttisearch(F, n);
		break;
	case 5:
		printf("输入到达时间站：");
		(void)scanf("%s", n);
		endtisearch(F, n);
		break;
	}
}
int main() {
	int n;
	Table F;
	printf("输入航班个数：");
	(void)scanf("%d", &n);
	Save(F, n);
	Out(F);
	Search(F);
	return 0;
}
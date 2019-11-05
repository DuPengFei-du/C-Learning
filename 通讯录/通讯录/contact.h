#define _CRT_SECURE_NO_WARNINGS 1
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};
#define NAME_MAX 20
#define SEX_MAX 5
#define ADDR_MAX 12
#define TELE_MAX 30
#define MAX 1000
typedef struct PeoInfo
{
	char name[NAME_MAX];
	char age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}PeoInfo;

//通讯录的结构体
typedef struct Contact
{
	PeoInfo data[MAX];
	int sz;
}Contact;
void InitContact(Contact* pcon);
void AddContact(Contact* pcon);
void ShowContact(const Contact* pcon);
void DelContact(Contact* pcon);
#include"Contact.h"
#include"SeqList.h"
void ContactInit(Contact* con)
{
	SLInit(con);
}

void ContactDesTory(Contact* con)
{
	SLdestory(con);
}

void ContactAdd(Contact* con)
{
	peoInfo info;
	printf("������������ӵ�������\n");
	scanf("%s", info.name);
	printf("������������ӵ��Ա�\n");
	scanf("%s", info.gender);
	printf("������������ӵ����䣺\n");
	scanf("%d", &info.age);
	printf("������������ӵĵ绰���룺\n");
	scanf("%s", info.tel);
	printf("������������ӵ�סַ��\n");
	scanf("%s", info.addr);
	SLpushFront(con, info);
}

int find_by_name(Contact* con, char name[])
{
	int i = 0;
	//while (strcmp(con->arr[i].name, name))
	//{
	//	i++;
	//	if (i == con->size)
	//	{
	//		return -1;
	//	}
	//}
	for (int i = 0; i < con->size; i++)
	{
		if (!strcmp(con->arr[i].name, name))
		{
			return i;
		}
	}
	return -1;
}
void ContactDel(Contact* con)
{
	char name[NAME_MAX];
	printf("����������Ҫɾ����������\n");
	scanf("%s", name);
	int find=find_by_name(con, name);
	if (find < 0)
	{
		printf("ɾ������Ϣ������\n");
		return;
	}
	else
	{
		SLErase(con, find);
	}
	printf("ɾ���ɹ�\n");
}

void ContactShow(Contact* con)
{
	printf("%-20s%-10s%-20s%-20s%-20s\n", "����", "�Ա�", "����", "�绰", "סַ");
	for (int i = 0; i < con->size; i++)
	{
		printf("%-20s%-10s%-20d%-20s%-20s\n", 
			con->arr[i].name,
			con->arr[i].gender,
			con->arr[i].age,
			con->arr[i].tel,
			con->arr[i].addr);
	}
}

void ContactModify(Contact* con)
{
	char name[NAME_MAX];
	printf("�����������޸ĵ�����");
	scanf("%s", name);
	int find = find_by_name(con, name);
	if (find < 0)
	{
		printf("�޸ĵ���Ϣ������\n");
		return;
	}
	else
	{
		printf("������������ӵ�������\n");
		scanf("%s", con->arr[find].name);
		printf("������������ӵ��Ա�\n");
		scanf("%s", con->arr[find].gender);
		printf("������������ӵ����䣺\n");
		scanf("%d", &con->arr[find].age);
		printf("������������ӵĵ绰���룺\n");
		scanf("%s", con->arr[find].tel);
		printf("������������ӵ�סַ��\n");
		scanf("%s", con->arr[find].addr);
	}
	printf("�޸ĳɹ�\n");
}

void ContactFind(Contact* con)
{
	char name[NAME_MAX];
	printf("����������Ҫ���ҵ�������\n");
	scanf("%s", name);
	int find = find_by_name(con, name);
	if (find < 0)
	{
		printf("���ҵ���Ϣ������\n");
		return;
	}
	else
	{
		printf("%-20s%-10s%-20s%-20s%-20s\n", "����", "�Ա�", "����", "�绰", "סַ");
		printf("%-20s%-10s%-20d%-20s%-20s\n",
			con->arr[find].name,
			con->arr[find].gender,
			con->arr[find].age,
			con->arr[find].tel,
			con->arr[find].addr);
	}
}
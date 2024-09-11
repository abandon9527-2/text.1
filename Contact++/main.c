#include"text.h"
void InitContact()
{
	struct Contact* ps = (struct Contact*)realloc(NULL, sizeof(struct Contact*) + 0 * sizeof(struct PeoInfo));
	if (ps != NULL)
	{
		ps->capacity = 0;
		Con = ps;
		ps->size = 0;
	}
	else
	{
		exit(-1);
	}
}

void Newcapacity(struct Contact* ps)
{
	int n = 0;
	n = (ps->capacity == 0 ? 3 : ps->capacity * 2);
	struct Contact* pp = (struct Contact*)realloc(Con, sizeof(struct Contact*) + n * sizeof(struct PeoInfo));
	if (pp == NULL)
	{
		printf("%s\n", strerror(errno));
		exit(-1);
	}
	else
	{
		Con = pp;
		Con->capacity += n;

	}


}


void AddContact()
{
	if (Con->size == Con->capacity)
	{
		Newcapacity(Con);
	}
	struct Contact* ps = Con;
		printf("��������ӵ����֣�");
		scanf("%s", ps->arr[ps->size].name);
		printf("��������ӵ�������");
		scanf("%d", &ps->arr[ps->size].age);
		printf("��������ӵ��Ա�");
		scanf("%s", ps->arr[ps->size].sex);
		printf("��������ӵĵ绰�ţ�");
		scanf("%s", ps->arr[ps->size].tele);
		printf("��������ӵĵ�ַ��");
		scanf("%s", ps->arr[ps->size].addr);
		ps->size++;
		printf("��ӳɹ�\n");
}
void ShowContact(struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		printf("%-20s%-4s%-5s%-12s%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		for (int i = 0; i < ps->size; i++)
		{
			printf("%-20s%-4d%-5s%-12s%-20s\n", ps->arr[i].name, ps->arr[i].age, ps->arr[i].sex, ps->arr[i].tele, ps->arr[i].addr);
		}
	}
}
int Find_by_name(struct Contact* ps, char name[NAME_MAX])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(name, ps->arr[i].name) == 0)
		{
			break;
		}
	}
	if (i == ps->size)
	{
		return -1;
	}
	return i;
}
void DelContact(struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("�޿�ɾ����Ԫ��\n");
	}
	else
	{
		char name[NAME_MAX];
		printf("����������ɾ�������֣�");
		scanf("%s", name);
		int i=Find_by_name(ps, name);
		if (i == -1)
		{
			printf("�޸�Ԫ��\n");
		}
		else
		{
			ps ->size--;
			for (i; i < ps->size; i++)
			{
				ps->arr[i] = ps->arr[i + 1];
			}
			printf("ɾ���ɹ�\n");
		}
	}
}
void SearchContact(struct Contact* ps)
{
	char name[NAME_MAX];
	printf("������������ҵ����֣�");
	scanf("%s", name);
	int i = Find_by_name(ps, name);
	if (i == -1)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("%-20s%-4s%-5s%-12s%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s%-4d%-5s%-12s%-20s\n", ps->arr[i].name, ps->arr[i].age, ps->arr[i].sex, ps->arr[i].tele, ps->arr[i].addr);
	}
}
void ModifyContact(struct Contact* ps)
{
	char name[NAME_MAX];
	printf("�����������޸ĵ����֣�");
	scanf("%s", name);
	int i = Find_by_name(ps, name);
	if (i == -1)
	{
		printf("�޸ĵ�����Ϣ������\n");
	}
	else
	{
		printf("��������ӵ����֣�");
		scanf("%s", ps->arr[i].name);
		printf("��������ӵ�������");
		scanf("%d", &ps->arr[i].age);
		printf("��������ӵ��Ա�");
		scanf("%s", ps->arr[i].sex);
		printf("��������ӵĵ绰�ţ�");
		scanf("%s", ps->arr[i].tele);
		printf("��������ӵĵ�ַ��");
		scanf("%s", ps->arr[i].addr);
		printf("�޸����\n");
	}
}
void DestoryContact(struct Contact* ps)
{
	free(Con);
	Con= NULL;
}
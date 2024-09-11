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
		printf("请输入添加的名字：");
		scanf("%s", ps->arr[ps->size].name);
		printf("请输入添加的岁数：");
		scanf("%d", &ps->arr[ps->size].age);
		printf("请输入添加的性别：");
		scanf("%s", ps->arr[ps->size].sex);
		printf("请输入添加的电话号：");
		scanf("%s", ps->arr[ps->size].tele);
		printf("请输入添加的地址：");
		scanf("%s", ps->arr[ps->size].addr);
		ps->size++;
		printf("添加成功\n");
}
void ShowContact(struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		printf("%-20s%-4s%-5s%-12s%-20s\n", "名字", "年龄", "性别", "电话", "地址");
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
		printf("无可删除的元素\n");
	}
	else
	{
		char name[NAME_MAX];
		printf("请输入你想删除的名字：");
		scanf("%s", name);
		int i=Find_by_name(ps, name);
		if (i == -1)
		{
			printf("无该元素\n");
		}
		else
		{
			ps ->size--;
			for (i; i < ps->size; i++)
			{
				ps->arr[i] = ps->arr[i + 1];
			}
			printf("删除成功\n");
		}
	}
}
void SearchContact(struct Contact* ps)
{
	char name[NAME_MAX];
	printf("请输入你想查找的名字：");
	scanf("%s", name);
	int i = Find_by_name(ps, name);
	if (i == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("%-20s%-4s%-5s%-12s%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s%-4d%-5s%-12s%-20s\n", ps->arr[i].name, ps->arr[i].age, ps->arr[i].sex, ps->arr[i].tele, ps->arr[i].addr);
	}
}
void ModifyContact(struct Contact* ps)
{
	char name[NAME_MAX];
	printf("请输入你想修改的名字：");
	scanf("%s", name);
	int i = Find_by_name(ps, name);
	if (i == -1)
	{
		printf("修改的人信息不存在\n");
	}
	else
	{
		printf("请输入添加的名字：");
		scanf("%s", ps->arr[i].name);
		printf("请输入添加的岁数：");
		scanf("%d", &ps->arr[i].age);
		printf("请输入添加的性别：");
		scanf("%s", ps->arr[i].sex);
		printf("请输入添加的电话号：");
		scanf("%s", ps->arr[i].tele);
		printf("请输入添加的地址：");
		scanf("%s", ps->arr[i].addr);
		printf("修改完成\n");
	}
}
void DestoryContact(struct Contact* ps)
{
	free(Con);
	Con= NULL;
}
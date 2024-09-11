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
	printf("请输入你想添加的姓名：\n");
	scanf("%s", info.name);
	printf("请输入你想添加的性别：\n");
	scanf("%s", info.gender);
	printf("请输入你想添加的年龄：\n");
	scanf("%d", &info.age);
	printf("请输入你想添加的电话号码：\n");
	scanf("%s", info.tel);
	printf("请输入你想添加的住址：\n");
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
	printf("请输入你想要删除的姓名：\n");
	scanf("%s", name);
	int find=find_by_name(con, name);
	if (find < 0)
	{
		printf("删除的信息不存在\n");
		return;
	}
	else
	{
		SLErase(con, find);
	}
	printf("删除成功\n");
}

void ContactShow(Contact* con)
{
	printf("%-20s%-10s%-20s%-20s%-20s\n", "姓名", "性别", "年龄", "电话", "住址");
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
	printf("请输入你想修改的名字");
	scanf("%s", name);
	int find = find_by_name(con, name);
	if (find < 0)
	{
		printf("修改的信息不存在\n");
		return;
	}
	else
	{
		printf("请输入你想添加的姓名：\n");
		scanf("%s", con->arr[find].name);
		printf("请输入你想添加的性别：\n");
		scanf("%s", con->arr[find].gender);
		printf("请输入你想添加的年龄：\n");
		scanf("%d", &con->arr[find].age);
		printf("请输入你想添加的电话号码：\n");
		scanf("%s", con->arr[find].tel);
		printf("请输入你想添加的住址：\n");
		scanf("%s", con->arr[find].addr);
	}
	printf("修改成功\n");
}

void ContactFind(Contact* con)
{
	char name[NAME_MAX];
	printf("请输入你想要查找的姓名：\n");
	scanf("%s", name);
	int find = find_by_name(con, name);
	if (find < 0)
	{
		printf("查找的信息不存在\n");
		return;
	}
	else
	{
		printf("%-20s%-10s%-20s%-20s%-20s\n", "姓名", "性别", "年龄", "电话", "住址");
		printf("%-20s%-10s%-20d%-20s%-20s\n",
			con->arr[find].name,
			con->arr[find].gender,
			con->arr[find].age,
			con->arr[find].tel,
			con->arr[find].addr);
	}
}
#pragma once

#define NAME_MAX 20
#define GENDER_MAX 10
#define TEL_MAX 20
#define ADDR_MAX 100

typedef struct stu Contact;

typedef struct PersonInfo
{
	char name[NAME_MAX];
	char gender[GENDER_MAX];
	int age;
	char tel[TEL_MAX];
	char addr[ADDR_MAX];
}peoInfo;

//通讯录的初始化
void ContactInit(Contact* con);
//通讯录的销毁
void ContactDesTory(Contact* con);
//通讯录的删除
void ContactDel(Contact* con);
//通讯录的添加
void ContactAdd(Contact* con);
//通讯录的修改
void ContactModify(Contact* con);
//通讯录的查找
void ContactFind(Contact* con);
//通讯录的展示
void ContactShow(Contact* con);
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

//ͨѶ¼�ĳ�ʼ��
void ContactInit(Contact* con);
//ͨѶ¼������
void ContactDesTory(Contact* con);
//ͨѶ¼��ɾ��
void ContactDel(Contact* con);
//ͨѶ¼�����
void ContactAdd(Contact* con);
//ͨѶ¼���޸�
void ContactModify(Contact* con);
//ͨѶ¼�Ĳ���
void ContactFind(Contact* con);
//ͨѶ¼��չʾ
void ContactShow(Contact* con);
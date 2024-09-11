#define _CRT_SECURE_NO_WARNINGS
#pragma once
#define MAX 1000
#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30
#include<stdio.h>
#include<string.h>
enum Optinon
{
	Exit,
	Add,
	Del,
	Search,
	Modify,
	Show,
	Sort,
};
struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
};
struct Contact
{
	struct PeoInfo arr[MAX];
	int size;
};
void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void ShowContact(struct Contact* ps);
void DelContact(struct Contact* ps);
void SearchContact(struct Contact* ps);
void ModifyContact(struct Contact* ps);

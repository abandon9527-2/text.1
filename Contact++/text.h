#define _CRT_SECURE_NO_WARNINGS
#pragma once
#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Contact* Con;
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
	int size;
	int capacity;
	struct PeoInfo arr[0];
};
void InitContact();
void AddContact();
void ShowContact(struct Contact* ps);
void DelContact(struct Contact* ps);
void SearchContact(struct Contact* ps);
void ModifyContact(struct Contact* ps);
void DestoryContact(struct Contact* ps);
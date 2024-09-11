#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int ListDatetype;
typedef struct Listnode
{
	ListDatetype date;
	struct Listnode* next;
	struct Listnode* prve;
}LTnode;

void LTnodeInit(LTnode** pphead);

void LTnodepushback(LTnode* phead, ListDatetype x);//尾插

void LTnodepushfront(LTnode* phead, ListDatetype x);//头插

void LTnodepopback(LTnode* phead);//尾删

void LTnodepopfront(LTnode* phead);//头删

void LTPint(LTnode* phead);

LTnode* LTFind(LTnode* phead,ListDatetype x);

void Insert(LTnode* pos, ListDatetype x);//在指定位置之后插入x

void LTDestory(LTnode* *pphed);
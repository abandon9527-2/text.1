#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include"Contact.h"

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef peoInfo SLDateType;

typedef struct stu
{
	SLDateType* arr;
	int size;
	int capacity;
}SL;

void SLInit(SL *ps);
void SLdestory(SL* ps);
void SLpushFront(SL* ps, SLDateType x);//尾插
void SLpushLast(SL* ps, SLDateType x);//头插
void SLpopFront(SL* ps);//头删
void SLpopLast(SL* ps);//尾删
void SLInsert(SL* ps, int pos, SLDateType x);//在指定位置插入数据
void SLErase(SL* ps, int pos);
int SLFind(SL* ps,SLDateType x);
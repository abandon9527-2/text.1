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
void SLpushFront(SL* ps, SLDateType x);//β��
void SLpushLast(SL* ps, SLDateType x);//ͷ��
void SLpopFront(SL* ps);//ͷɾ
void SLpopLast(SL* ps);//βɾ
void SLInsert(SL* ps, int pos, SLDateType x);//��ָ��λ�ò�������
void SLErase(SL* ps, int pos);
int SLFind(SL* ps,SLDateType x);
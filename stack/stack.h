#pragma once
//����ʵ��ջ�Ĳ���
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>
typedef int stackDateType;
typedef struct stack
{
	stackDateType* arr;
	int size;
	int capacity;
}Stack;

void StackInit(Stack* ps);//ջ�ĳ�ʼ��

void StackDestory(Stack* ps);//ջ������

void StackPush(Stack* ps,stackDateType x);//��ջ����

stackDateType StackPop(Stack* ps);//��ջ����

int StackEmpty();

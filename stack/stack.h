#pragma once
//数组实现栈的操作
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

void StackInit(Stack* ps);//栈的初始化

void StackDestory(Stack* ps);//栈的销毁

void StackPush(Stack* ps,stackDateType x);//入栈操作

stackDateType StackPop(Stack* ps);//出栈操作

int StackEmpty();

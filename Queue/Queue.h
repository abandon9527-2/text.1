#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int QNDatetype;
typedef struct QueueNode
{
	QNDatetype x;
	struct QueueNode* next;
}QueueNode;

typedef struct Queue
{
	QueueNode* head;
	QueueNode* ptail;
}Queue;

void QueueInit(Queue* ps);

void QueuePush(Queue* ps, QNDatetype x);

void QueuePop(Queue* ps);

void QueueDestory(Queue* ps);
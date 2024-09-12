#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int HPDatetype;
typedef struct Heap
{
	HPDatetype* arr;
	int capacity;
	int size;
}Heap;

void HeapInit(Heap* ps);

void HeapPush(Heap* ps, HPDatetype x);

void HeapPop(Heap* ps);

HPDatetype HeapTop(Heap* ps);

bool HeapEmpty(Heap* ps);

void HeapDestory(Heap* ps);
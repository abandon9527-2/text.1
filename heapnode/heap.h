#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<time.h>
#include <stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int HPDateType;

typedef struct Heap
{
	HPDateType* arr;
	int capacity;
	int size;
}HP;

void HPInit(HP* php);//¥Ú”°

void HPDesTory(HP* php);

void HPPush(HP* php, HPDateType x);

void HPPop(HP* php);

int HPempty(HP* php);

HPDateType HPTop(HP* php);

void AdJustDown(HPDateType* arr, int parent, int n);

void AdjustUp(HPDateType* arr, int child);
void swap(int* x, int* y);
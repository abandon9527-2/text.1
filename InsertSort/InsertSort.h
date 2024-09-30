#pragma once
#include<stdio.h>
#include<assert.h>

void InsertSort(int* arr, int n);//arr为排序的数组，n为被排序的个数

void ShellSort(int* arr, int n);

void SelectSort(int* arr, int n);

int _QuickSort(int* arr, int left, int right);
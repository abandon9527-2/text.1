#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BTDataType;

typedef struct BinaryTreeNode
{
	BTDataType x;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
}BTNode;

void PreOrder(BTNode* root);//ǰ�����

void MinOrder(BTNode* root);

void PostOrder(BTNode* root);//�������

int BinaryNodeSize(BTNode* root);

int BinaryTreeLeafSize(BTNode* root);//������Ҷ�ӽڵ����

int BinaryTreeLeveLKSize(BTNode* root, int k);//��K��ڵ����

int BinaryTreeDepth(BTNode* root);//�����������

BTNode* BinaryTreeFind(BTNode* root, BTDataType x);//�������Ĳ���

void BinaryDestory(BTNode** root);//������������

void LevelOrder(BTNode* root);//�������Ĳ������

bool BinaryTreeComplete(BTNode* root);
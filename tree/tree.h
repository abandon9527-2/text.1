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

void PreOrder(BTNode* root);//前序遍历

void MinOrder(BTNode* root);

void PostOrder(BTNode* root);//后序遍历

int BinaryNodeSize(BTNode* root);

int BinaryTreeLeafSize(BTNode* root);//二叉树叶子节点个数

int BinaryTreeLeveLKSize(BTNode* root, int k);//第K层节点个数

int BinaryTreeDepth(BTNode* root);//二叉树的深度

BTNode* BinaryTreeFind(BTNode* root, BTDataType x);//二叉树的查找

void BinaryDestory(BTNode** root);//二叉树的销毁

void LevelOrder(BTNode* root);//二叉树的层序遍历

bool BinaryTreeComplete(BTNode* root);
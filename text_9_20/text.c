#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

typedef int BTDataType;
typedef struct TreeNode {
    int x;
    struct TreeNode* left;
    struct TreeNode* right;

}BTNode;
BTNode* buynode(BTDataType x)
{
    BTNode* newnode = (BTNode*)malloc(sizeof(BTNode));
    if (newnode == NULL)
    {
        perror("malloc fail");
        exit(1);
    }
    newnode->x = x;
    newnode->right = newnode->left = NULL;
    return newnode;
}


int mesize(struct TreeNode* root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + mesize(root->left) + mesize(root->right);
}

void RSPush(int* ps, int* x, int y)
{
    ps[(*x)] = y;
    (*x)++;
}

void peroder(struct TreeNode* root, int* returnSize, int* k)
{
    if (root == NULL)
    {
        return;
    }
    RSPush(returnSize, k, root->x);
    peroder(root->left, returnSize, k);
    peroder(root->right, returnSize, k);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int n = mesize(root);
    returnSize = (int*)malloc(sizeof(int) * n);
    int k = 0;
    peroder(root, returnSize, &k);
    return returnSize;
}

int main()
{
    int* returnSize=NULL;
    BTNode* node1 = buynode(1);
    BTNode* node2 = buynode(2);
    BTNode* node3 = buynode(3);
    BTNode* node4 = buynode(4);
    BTNode* node5 = buynode(4);
    BTNode* node6 = buynode(4);
    BTNode* node7 = buynode(4);
    node1->left = node2;
    node1->right = node3;
    node2->right = node4;
    node2->left = node5;
   
    int arr[5];
       = preorderTraversal(node1, returnSize);
}
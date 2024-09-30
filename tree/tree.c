#include"tree.h"
#include"Queue.h"
void PreOrder(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}
	printf("%d", root->x);
	PreOrder(root->left);
	PreOrder(root->right);
}

void  MinOrder(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}

	MinOrder(root->left);
	printf("%d", root->x);
	MinOrder(root->right);
}

void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}

	PostOrder(root->left);
	PostOrder(root->right);
	printf("%d", root->x);
}

int BinaryNodeSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}

	return 1 + BinaryNodeSize(root->left) + BinaryNodeSize(root->right);
}

int BinaryTreeLeafSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	if (root->left == NULL && root->right == NULL)
	{
		return 1;
	}
	return  BinaryTreeLeafSize(root->left) + BinaryTreeLeafSize(root->right);
}

int BinaryTreeLeveLKSize(BTNode* root, int k)
{
	if(root == NULL)
	{
		return 0;
	}
	if (k == 1)
	{
		return 1;
	}
	return BinaryTreeLeveLKSize( root->left, k-1)+ BinaryTreeLeveLKSize(root->right, k - 1);
}

int BinaryTreeDepth(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	int left = BinaryTreeDepth(root->left);
	int right= BinaryTreeDepth(root->right);
	return left > right ? left + 1 : right + 1;
}

BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
	{
		return NULL;
	}
	if (root->x == x)
	{
		return root;
	}
	BTNode* findleft = BinaryTreeFind(root->left,x);
	if (findleft)
	{
		return findleft;
	}
	BTNode* findright = BinaryTreeFind(root->right,x);
	if (findleft)
	{
		return findright;
	}
	return NULL;
}

void BinaryDestory(BTNode** root)
{
	if (*root == NULL)
	{
		return;
	}
	BinaryDestory(&((*root)->left));
	BinaryDestory(&((*root)->right));
	free(*root);
	*root = NULL;
}

void LevelOrder(BTNode* root)
{
	//ÈëÕ»
	Queue q1;
	QueueInit(&q1);
	QueuePush(&q1, root);
	while (!ifempty(&q1))
	{
		printf("%d", QueueTop(&q1)->x);
		if (QueueTop(&q1)->left)
		{
			QueuePush(&q1, QueueTop(&q1)->left);
		}
		if (QueueTop(&q1)->right)
		{
			QueuePush(&q1, QueueTop(&q1)->right);
		}
		QueuePop(&q1);

	}
	QueueDestory(&q1);
	//³öÕ»
}

bool BinaryTreeComplete(BTNode* root)
{
	Queue q1;
	QueueInit(&q1);
	QueuePush(&q1, root);
	while (!ifempty(&q1))
	{
		if (QueueTop(&q1)== NULL)
		{
			break;
		}
		
		QueuePush(&q1, QueueTop(&q1)->left);
		QueuePush(&q1, QueueTop(&q1)->right);
		QueuePop(&q1);
	}
	while (!ifempty(&q1))
	{
		if (QueueTop(&q1))
		{
			return false;
		}
		QueuePop(&q1);
	}
	return true;
}
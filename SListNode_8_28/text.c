#include "SList.h"
void text()
{
	SLTNode* phead=NULL;
	SLTPushBack(&phead, 1);
	SLTPushBack(&phead, 2);
	SLTPushBack(&phead, 3);
	SLTPushFront(&phead, 3);
	SLTPushFront(&phead, 2);
	SLTPushFront(&phead, 1);
	SLTprint(phead);
	SLTPopFront(&phead);
	SLTPopFront(&phead);
	SLTPopFront(&phead);
	SLTprint(phead);
}
int main()
{
	text();
}
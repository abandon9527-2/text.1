#include"SListNode.h"
void textSList1()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 1);
	SListprint(plist);
}
int main()
{
	SLTNode s1;
	textSList1();
}
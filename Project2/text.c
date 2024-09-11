#include"LtNode.h"

void text1()
{
	LTnode* phead = NULL;
	LTnodeInit(&phead);
	LTnodepushback(phead, 1);
	LTnodepushback(phead, 3);
	LTnodepushback(phead, 4);
	LTnodepushback(phead, 0);
	LTPint(phead);
	LTnodepushfront(phead, 1);
	LTnodepushfront(phead, 1);
	LTnode* pos = LTFind(phead, 1);
	Insert(pos, 5);
	LTnodepushfront(phead, 1);
	LTnodepushfront(phead, 1);
	LTPint(phead);
	LTDestory(&phead);
	/*LTnodepopfront(phead);
	LTnodepopfront(phead);
	LTnodepopfront(phead);
	LTnodepopfront(phead);
	LTPint(phead);
	LTnodepopback(phead);
	LTnodepopback(phead);
	LTnodepopback(phead);
	LTnodepopback(phead);
	LTPint(phead);*/

}

int main()
{
	text1();
}
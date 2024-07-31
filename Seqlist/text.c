#include"Seqlist.h"
void Seqlist2(SL* s1)
{
	SeqListPushFront(s1, 10);
	SeqListPushFront(s1, 20);
	SeqListPushFront(s1, 30);
	//SeqListPopFront(s1);
	SeqListprint(s1);
	//SeqListPushFront(&s1, 40);
	//SeqListPushFront(&s1, 0);
	//SeqListPopFront(s1);
	//SeqListPopFront(s1);
	//SeqListPopFront(s1);
	//SeqListPopFront(s1);
	//SeqListprint(s1);
}
void Seqlist1()
{
	SL s1;
	SeqListInit(&s1);
	SeqListPushBack(&s1,1);
	SeqListPushBack(&s1,2);
	SeqListPushBack(&s1,3);
	SeqListPushBack(&s1,4);
	SeqListPushBack(&s1,5);
	SeqListprint(&s1);

	Seqlist2(&s1);

	//SeqListPopBack(&s1);
	//SeqListPopBack(&s1);
	//SeqListPopBack(&s1);
	//SeqListPopBack(&s1);
	//SeqListprint(s1);
	//SeqListPopBack(&s1);
	//SeqListPopBack(&s1);
	//SeqListPopBack(&s1);
	//SeqListprint(&s1);
	//int m=SeqListFind(&s1, 3);
	//if (m != -1)
	//{
	//	SeqListInsert(&s1, m, 5);
	//}
	//SeqListprint(s1);
}

int main()
{
	Seqlist1();
	//Seqlist2();
	return 0;
}

#include"SeqList.h"
#include"Contact.h"
//void text1()
//{
//	SL s1;
//	SLInit(&s1);
//
//	SLpushFront(&s1, 1);
//	SLpushFront(&s1, 2);
//	SLpushFront(&s1, 3);
//	Print(&s1);
//	SLInsert(&s1, 0, 0);
//	SLInsert(&s1, 3, 4);
//	SLInsert(&s1, 3, 4);
//	Print(&s1);
//	SLErase(&s1, 0);
//	SLErase(&s1, 3);
//	SLErase(&s1, s1.size-1);
//	Print(&s1);
//	SLdestory(&s1);
//
//}
void text2()
{
	Contact con;
	ContactInit(&con);
	ContactAdd(&con);
	ContactAdd(&con);
	ContactShow(&con);
	//ContactDel(&con);
	ContactModify(&con);
	ContactShow(&con);

	ContactDesTory(&con);
}
int main()
{
	//text1();//≤‚ ‘≥ı ºªØ
	text2();

}
#include"Queue.h"
void text1()
{
	Queue s1;
	QueueInit(&s1);
	QueuePush(&s1, 1);
	QueuePop(&s1);
	QueueDestory(&s1);
}
int main()
{
	text1();
}
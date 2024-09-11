#include"stack.h"

void text1()
{
	Stack s1;
	int a=1;
	StackInit(&s1);
	while (a)
	{
		scanf("%d", &a);
		StackPush(&s1, a);
	}
	a = 10;
	while (StackEmpty(&s1))
	{
		printf("%d", StackPop(&s1));
	}
	StackDestory(&s1);
}
int main()
{
	text1();
}
#include"text.h"
void nume()
{
	printf("************************************\n");
	printf("*********1.add         2.del********\n");
	printf("*********3.search      4.modify*****\n");
	printf("*********5.show        6.sort*******\n");
	printf("*********0.exit ********************\n");
	printf("************************************\n");
	printf("************************************\n");
}

int main()
{
	int input;
	InitContact();
	do
	{
		nume();
		printf("����������Ҫ�Ĺ���:");
		scanf("%d", &input);
		switch (input)
		{
		case Add:
			AddContact();
			break;
		case Del:
			DelContact(Con);
			break;
		case Search:
			SearchContact(Con);
			break;
		case Modify:
			ModifyContact(Con);
			break;
		case Show:
			ShowContact(Con);
			break;
		case Sort:
			break;
		case Exit:
			DestoryContact(Con);
			printf("�˳�����\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
}
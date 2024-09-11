//通过固定列表模拟统续录，2024.8.9第一个c语言小项目
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
	int input = 0;
	struct Contact Con;
	InitContact(&Con);
	do
	{
		nume();
		printf("请输入你需要的功能:");
		scanf("%d", &input);
		switch (input)
		{
		case Add:
			AddContact(&Con);
			break;
		case Del:
			DelContact(&Con);
			break;
		case Search:
			SearchContact(&Con);
			break;
		case Modify:
			ModifyContact(&Con);
			break;
		case Show:
			ShowContact(&Con);
			break;
		case Sort:
			break;
		case Exit:
			printf("退出程序\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
}
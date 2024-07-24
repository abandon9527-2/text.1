#include "game.h"
void game()
{
	int count=0;
	//创建表格
	char Board[ROW][COL] = { 0 };
	//表格初始化
	binboard(Board, ROW, COL);
	//表格打印
	display(Board, ROW, COL);
	//玩家移动，玩家输入*
	while (1)
	{
		playermove(Board, ROW, COL);
		display(Board, ROW, COL);
		//判断是否胜利
		char p = Iswin(Board, ROW, COL);
		if (p == '*')
		{
			printf("玩家赢\n");
			break;
		}
		if (p == '#')
		{
			printf("电脑赢\n");
			break;
		}
		if (p == 'Q')
		{
			printf("平局\n");
			break;
		}
		//电脑移动
		computermove(Board, ROW, COL);
		display(Board, ROW, COL);

		char a = Iswin(Board, ROW, COL);
		if (p == '*')
		{
			printf("玩家赢\n");
			break;
		}
		if (p == '#')
		{
			printf("电脑赢\n");
			break;
		}
		if (p == 'Q')
		{
			printf("平局\n");
			break;
		}
	}
}
int main()
{
	int input;
	
	do
	{
		srand((unsigned int)time(NULL));
		nume();
		printf("请输入你的选择：>");
		scanf("%d", &input);
		while (getchar() != '\n');
		switch (input)
		{
		case 1:
			printf("游戏开始\n");
			game();
			//玩家移动
	/*		playermove();*/
			break;
		case 0:
			printf("游戏结束\n");
				break;
		default:
			printf("输入错误，重新输入\n");
			break;
		}
	} while (input);
}

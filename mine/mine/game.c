#include"game.h"

//目前指的是哪个函数
void game()
{
	char board[ROWS][COLS] = { 0 };
	char mine[ROWS][COLS] = { 0 };
	initialize(board, ROWS, COLS,'0');//初始化board
	initialize(mine, ROW, COL, '*');//初始化mine
	//appear(board, ROWS, COLS);
	appear(mine, ROW, COL);//类型是没对上的
	Setmine(board, ROW, COL);//放置雷区
	appear(board, ROWS, COLS);
	player(board, ROW, COL,mine);
}
int main()
{
	int input = 0;
	do
	{
		srand((unsigned int)time(NULL));
		menu();
		scanf("%d", &input);
		while (getchar() != '\n');
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误重新输入\n");
		}
	} while (input);
}
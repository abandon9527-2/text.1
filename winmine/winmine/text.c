#include"game.h"
void nume()
{
	printf("***************************\n");
	printf("********1.play     ********\n");
	printf("********0.exit     ********\n");
	printf("***************************\n");
	printf("***************************\n");
}
void binboard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//   |   |   
//---|---|---
//   |   |   
//---|---|---
//   |   |   
void display(char board[ROW][COL], int row, int col)
{
	
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (j < col - 1)
				printf(" %c |",board[i][j]);
			else
				printf(" %c ",board[i][j]);
		}
		printf("\n");
		if (i < row - 1)
		{
			for (int m = 0; m < col; m++)
			{
				if (m < col - 1)
					printf("---|");
				else
					printf("---");
			}
			printf("\n");
		}
	}
}
void playermove(char board[ROW][COL])
{
	int a, b;
	while (1)
	{
		printf("请输入你需要走的(row:1~3,col:1~3)坐标：");
		scanf("%d%d", &a, &b);
		//while (getchar() != '\n');
		if ( a <= 3 && b <= 3 && a>0 && b>0)
		{
			if (board[a - 1][b - 1] == ' ')
			{
				board[a - 1][b - 1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用\n");
			}
		}
		else
		{
			printf("输入错误，重新输入\n");
		}
	}
}
void computermove(char board[ROW][COL], int row, int col)
{

	while (1)
	{
		int a = rand() % ROW;//生成0~row的数
		int b = rand() % COL;//生成0~col的数
		if (board[a][b] == ' ')
		{
			board[a][b] = '#';
			break;
		}
	}
}
char Iswin(char board[ROW][COL], int row, int col)
{
	//判断
	//"*"玩家赢
	//"#"电脑赢
	//"Q"平局
	//"C"继续
	for (int i = 0; i < row; i++)
	{
		if (board[i][1] == board[i][2] && board[i][0] == board[i][1] && board[i][0] != ' ')
			return board[i][1];
	}
	for (int j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[2][j] == board[1][j] && board != ' ')
			return board[0][j];
	}
	if (board[0][0] == board[1][1] && board[2][2] == board[1][1] && board != ' ')
		return board[0][0];
	if (board[0][2] == board[1][1] && board[2][0] == board[1][1] && board != ' ')
		return board[1][1];
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (board[i][j] == ' ')
				return 'C';
		}
	}
	return 'Q';
}


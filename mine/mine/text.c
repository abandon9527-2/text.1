#include"game.h"
void menu()
{
	printf("*******************************\n");
	printf("**********1.play***************\n");
	printf("**********2.exit***************\n");
	printf("*******************************\n");
}
void initialize(char board[ROWS][COLS], int rows, int cols, char a)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			board[i][j] = a;
		}
	}
}
void appear(char board[ROWS][COLS], int rows, int cols)
{
	for (int j = 0; j <= cols; j++)
	{
		printf("%2d", j);
	}
	printf("\n");
	for (int i = 0; i < rows; i++)
	{
		printf("%2d", i+1);

		for (int j = 0; j < cols; j++)
		{
			printf("%2c", board[i][j]);
		}
		printf("\n");
	}
}
void Setmine(char board[ROWS][COLS], int row, int col)
{
	int a = main1;
	while (a)
	{
		int i = rand() % row+1;
		int j = rand() % col+1;
		if (board[i][j] == '0')
		{
			board[i][j] = '1';
			a--;
		}
	}
}
char hanshu(char board[ROWS][COLS], int i, int j)
{
	return board[i + 1][j + 1] + board[i + 1][j] + board[i + 1][j - 1] + board[i][j] + board[i][j - 1] + board[i][j + 1] + board[i - 1][j - 1] + board[i - 1][j] + board[i - 1][j + 1];
}
void player(char board[ROWS][COLS], int row, int col, char mine[ROWS][COLS])
{
	int x, y;
	int suc = main1;
	int count = 0;
	while (row*col-suc-count>0)
	{
		printf("请输入你排雷的坐标>:");
		scanf("%d%d", &x, &y);
		if (x <= row && x >= 0 && y >= 0 && y <= row && mine[x][y] == '*')
		{
			if (board[x][y] == '0')
			{
				mine[x][y] = hanshu(board, x, y);
				appear(mine, ROW, COL); 
				count++;
			}
			else
			{
				printf("你被炸死了\n");
				break;
			}
		}
		else
		{
			printf("你输入的坐标被占用\n");
		}
	}
	if (row * col - suc - count == 0)
	{
		printf("恭喜你排雷成功\n");
	}
}
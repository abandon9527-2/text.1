#include"game.h"

//Ŀǰָ�����ĸ�����
void game()
{
	char board[ROWS][COLS] = { 0 };
	char mine[ROWS][COLS] = { 0 };
	initialize(board, ROWS, COLS,'0');//��ʼ��board
	initialize(mine, ROW, COL, '*');//��ʼ��mine
	//appear(board, ROWS, COLS);
	appear(mine, ROW, COL);//������û���ϵ�
	Setmine(board, ROW, COL);//��������
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
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("���������������\n");
		}
	} while (input);
}
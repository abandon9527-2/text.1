#include "game.h"
void game()
{
	int count=0;
	//�������
	char Board[ROW][COL] = { 0 };
	//����ʼ��
	binboard(Board, ROW, COL);
	//����ӡ
	display(Board, ROW, COL);
	//����ƶ����������*
	while (1)
	{
		playermove(Board, ROW, COL);
		display(Board, ROW, COL);
		//�ж��Ƿ�ʤ��
		char p = Iswin(Board, ROW, COL);
		if (p == '*')
		{
			printf("���Ӯ\n");
			break;
		}
		if (p == '#')
		{
			printf("����Ӯ\n");
			break;
		}
		if (p == 'Q')
		{
			printf("ƽ��\n");
			break;
		}
		//�����ƶ�
		computermove(Board, ROW, COL);
		display(Board, ROW, COL);

		char a = Iswin(Board, ROW, COL);
		if (p == '*')
		{
			printf("���Ӯ\n");
			break;
		}
		if (p == '#')
		{
			printf("����Ӯ\n");
			break;
		}
		if (p == 'Q')
		{
			printf("ƽ��\n");
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
		printf("���������ѡ��>");
		scanf("%d", &input);
		while (getchar() != '\n');
		switch (input)
		{
		case 1:
			printf("��Ϸ��ʼ\n");
			game();
			//����ƶ�
	/*		playermove();*/
			break;
		case 0:
			printf("��Ϸ����\n");
				break;
		default:
			printf("���������������\n");
			break;
		}
	} while (input);
}

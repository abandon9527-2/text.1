//ͨ��c����ʵ�ֲ�������Ϸ
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("**************************\n");
	printf("*******1.star play********\n");
	printf("*******2.exit     ********\n");
	printf("**************************\n");
}
void game()
{
	int a = rand() % 100 + 1;//����һ��1~100�������
	int guess = 0;



	while (1)
	{
		printf("��������µ�����>:");
		scanf("%d", &guess);
		while (getchar() != '\n');//����scanf���յ��Ƿ������ַ��������ѭ��
		if (guess > a)
			printf("�´���\n");
		else if (guess < a)
			printf("��С��\n");
		else
		{
			printf("�¶���\n");
			break;
		}
		
	}
	
}
int main()
{
	srand((unsigned int)time(NULL));
	int input;
	do {

		menu();
		printf("���������ѡ��>:");
		scanf_s("%d", &input);
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
				printf("ѡ���������ѡ��\n");
				break;
			};
			while (getchar() != '\n');//����scanf���յ��Ƿ������ַ��������ѭ��
		} while (input);

}
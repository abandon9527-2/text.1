//通过c语言实现猜数字游戏
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
	int a = rand() % 100 + 1;//生成一个1~100的随机数
	int guess = 0;



	while (1)
	{
		printf("请输入你猜的数字>:");
		scanf("%d", &guess);
		while (getchar() != '\n');//避免scanf接收到非法访问字符，造成死循环
		if (guess > a)
			printf("猜大了\n");
		else if (guess < a)
			printf("猜小了\n");
		else
		{
			printf("猜对了\n");
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
		printf("请输入你的选择>:");
		scanf_s("%d", &input);
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
				printf("选择错误，重新选择\n");
				break;
			};
			while (getchar() != '\n');//避免scanf接收到非法访问字符，造成死循环
		} while (input);

}
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void menu()
{
	printf("*****************\n");
	printf("**1,play 0,exit**\n");
	printf("*****************\n");
}
void game()//定义游戏函数
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;
	while (1)
	{
		printf("请猜数字\n");
		scanf_s("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你,猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//调用定义的菜单函数
		printf("请选择:");
		scanf_s("%d", &input);//输入数字选择开始还是退出游戏
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
		}
	} while (input);
	return 0;
}

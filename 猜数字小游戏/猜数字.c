#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void menu()
{
	printf("*****************\n");
	printf("**1,play 0,exit**\n");
	printf("*****************\n");
}
void game()//������Ϸ����
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;
	while (1)
	{
		printf("�������\n");
		scanf_s("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ��,�¶���\n");
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
		menu();//���ö���Ĳ˵�����
		printf("��ѡ��:");
		scanf_s("%d", &input);//��������ѡ��ʼ�����˳���Ϸ
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
		}
	} while (input);
	return 0;
}

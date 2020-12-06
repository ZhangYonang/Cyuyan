#include"game.h"
void menu()
{
	printf("**********************\n");
	printf("****1.play 0.exit*****\n");
	printf("**********************\n");
}
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	initboard(board,ROW,COL);
	displayboard(board,ROW,COL);
	while (1)
	{
		playermove(board,ROW,COL);
		displayboard(board, ROW, COL);
		ret=iswin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		computermove(board, ROW, COL);
		displayboard(board, ROW, COL);
		ret=iswin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
	 }
	    if (ret == '*')
	   {
		printf("���Ӯ\n");
	   }
       	else if (ret == '#')
	   {
		printf("����Ӯ\n");
	   }
	   else if(ret=='Q')
	   {
	 	printf("ƽ��");
	   }
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{

		menu();
		printf("��ѡ��\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
		{
			game();
			printf("������\n");
			break;
		}
			
		case 0:
		{
			printf("�˳���Ϸ\n");
			break;
		}
			
		default:
		{
			printf("����������������롢����\n");
			break;
		}
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}
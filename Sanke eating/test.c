#include"test.h"
void Menu()
{
	printf("                                                                                         \n");
	printf("                       __________                                                        \n");
	printf("                      /          \\                                                      \n");
	printf("                     /  ________  \\                                                     \n");
	printf("                     |  |      |__|                                                      \n");
	printf("                     |  |                                                                \n");
	printf("                     \\  \\_______                              ____                    \n");
	printf("                      \\         \\    ____ ____      ____   __ |  |  ___   ______       \n");
	printf("                       \\_______  \\   |  |/    \\    /    \\_/ / |  | /  /  /      \\   \n");
	printf("                               \\  \\  |    ___  \\  / ____   /  |  |/  /  /  ____  \\   \n");
	printf("                     __        |  |  |   /   \\  \\ | |  |  /   |     /  |  /____\\  |   \n");
	printf("                    \\  \\_______|  |  |  |    |  | | |__|  |   |     \\  |  ________/   \n");
	printf("                     \\            /  |  |    |  |  \\       \\  |  |\\  \\  \\  \\____  \n");
	printf("                      \\__________/   |__|    |__|   \\___/\\__\\ |__| \\__\\  \\______/ \n");
	printf("                                                                                         \n");
	printf("                      ___________________________________________________________________\n");
	printf("                     |                                                                   |\n");
	printf("                     |*******************1.PLAY******************0.EXIT******************|\n");
	printf("                     |*******************2.HIGH******************3.REWARD****************|\n");
	printf("                     |___________________________________________________________________|\n");
	return 0;
}
void Select()
{
	int a = 0;
	do
	{
		Menu();
		printf("��ѡ�񡢡���������:>\n");
		scanf_s("%d", &a);
		switch (a)
		{
		case 0:
			return 0;
			break;
		case 1:
			Game(); 
			 break;
		case 2:
			High();
			break;
		case 3:
			Reward();
			break;
		default:
			printf("�� ������� �˱� ���ֶ������ ����\n");
			break;
		}
	} while (a);

}
void Game()
{

}
void Reward()
{
	printf("��ѡ����ͷ�ʽ 1.΢�� 2.֧���� 3.����\n");
	int a = 0;
	scanf_s("%d", &a);
	do
	{
		switch (a)
		{
		case 1:
			printf("zya20010922 ����������� ��л ����_����(��_��)\n");
			return 0;
			break;
		case 2:
			printf("2784729102@qq.com ת�˾����� ��л ����_����(��_��)\n");
			return 0;
			break;
		case 3:
			return 0;
			break;
		default:
			printf("������� ���ٸ���һ�λ��� ����ס �����Ǯ �ݣ�\n");
			return a;
			break;
		}
	} while (a);
	Menu();
}
void High()
{

}
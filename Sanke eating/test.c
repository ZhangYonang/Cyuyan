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
		printf("请选择、、、、、、:>\n");
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
			printf("草 你输错了 菜逼 数字都能输错 垃圾\n");
			break;
		}
	} while (a);

}
void Game()
{

}
void Reward()
{
	printf("请选择打赏方式 1.微信 2.支付宝 3.返回\n");
	int a = 0;
	scanf_s("%d", &a);
	do
	{
		switch (a)
		{
		case 1:
			printf("zya20010922 发红包就行了 感谢 （滑_稽）(滑_稽)\n");
			return 0;
			break;
		case 2:
			printf("2784729102@qq.com 转账就行了 感谢 （滑_稽）(滑_稽)\n");
			return 0;
			break;
		case 3:
			return 0;
			break;
		default:
			printf("你输错了 我再给你一次机会 把握住 （快打钱 草）\n");
			return a;
			break;
		}
	} while (a);
	Menu();
}
void High()
{

}
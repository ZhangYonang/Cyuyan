#include"标头.h"
int main()
{
	int haf(int, int);
	int lcd(int, int, int);
	int u, v, h, l;
	scanf_s("%d,%d", &u, &v);
	h = haf(u, v);
	l = lcd(u, v, h);
	printf("最小公约数为:%d\n", h);
	printf("最大公倍数为:%d\n", l);
	return 0;
}
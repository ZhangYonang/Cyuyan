#include"��ͷ.h"
int main()
{
	int haf(int, int);
	int lcd(int, int, int);
	int u, v, h, l;
	scanf_s("%d,%d", &u, &v);
	h = haf(u, v);
	l = lcd(u, v, h);
	printf("��С��Լ��Ϊ:%d\n", h);
	printf("��󹫱���Ϊ:%d\n", l);
	return 0;
}
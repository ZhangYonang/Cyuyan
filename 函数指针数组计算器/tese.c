#include"tese.h"
int main()
{
	int input = 0;
	menu();
	int (*parr[])(int, int) = { 0, Add,Sub,Mul,Div,Xor };
	do
	{
		printf("��ѡ��:>");
		scanf_s("%d", &input);
		if (input >= 1 && input <= 5)
		{
			int a = 0;
			int b = 0;
			printf("��������Ҫ���������:>");
			scanf_s("%d%d", &a, &b);
			printf("���Ϊ:");
			printf("%d\n", parr[input](a, b));
		}
		else if (input == 0
		{
			return 0;
		}
		else
		{
			printf("�������,���������롢��");
		}
	} while (input);
	return 0;
}

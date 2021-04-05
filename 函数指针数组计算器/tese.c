#include"tese.h"
int main()
{
	int input = 0;
	menu();
	int (*parr[])(int, int) = { 0, Add,Sub,Mul,Div,Xor };
	do
	{
		printf("请选择:>");
		scanf_s("%d", &input);
		if (input >= 1 && input <= 5)
		{
			int a = 0;
			int b = 0;
			printf("请输入需要运算的数字:>");
			scanf_s("%d%d", &a, &b);
			printf("结果为:");
			printf("%d\n", parr[input](a, b));
		}
		else if (input == 0
		{
			return 0;
		}
		else
		{
			printf("输入错误,请重新输入、、");
		}
	} while (input);
	return 0;
}

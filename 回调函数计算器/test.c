#include"computer.h"
int main()
{
	menu();
	int input = 0;
	do
	{
		printf("��ѡ��:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			Calc(Add);
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 5:
			Calc(Xor);
			break;
		default:
			printf("����������������롢����");
			break;
		}
	} while (input);
	printf("�˳�������");
}




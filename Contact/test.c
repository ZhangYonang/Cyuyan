#include<stdio.h>
void menu()
{
	printf("**********************************\n");
	printf("**********************************\n");
	printf("**********************************\n");
	printf("**********************************\n");
	printf("**********************************\n");
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf_s("%d", &input);
	} while ();
		return 0;
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int Xor(int x, int y)
{
	return x ^ y;
}
void Calc(int(*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("请输入需要进行计算的数字:>");
	scanf_s("%d%d", &x, &y);
	printf("%d\n", pf(x, y));
}
void menu()
{
	printf("********************\n");
	printf("** 1. Add  2. Sub **\n");
	printf("** 3. Mul  4. Div **\n");
	printf("** 5. Xor  0.exit **\n");
	printf("********************\n");
}

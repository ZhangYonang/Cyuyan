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
void menu()
{
	printf("********************\n");
	printf("** 1. Add  2. Sub **\n");
	printf("** 3. Mul  4. Div **\n");
	printf("** 5. Xor  0.exit **\n");
	printf("********************\n");
}
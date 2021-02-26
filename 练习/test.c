#include<stdio.h>
//void Print(char*str)
//{
//	printf("%s\n",str);
//}
//int main()
//{
//	void(*p)(char*) = Print;
//	(*p)("wuhuqifei");
//	return 0;
//}
//void test(int** p)
//{
//}
//阴间代码1
//(*(void(*)()0)();
//阴间代码2
//void (*signal(int, void(*)(int)))(int);

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//}
//int main()
//{
//	int(*pa)(int, int) = Add;
//	printf("%d\n",pa(2,3));
//	printf("%d\n", (pa)(2, 3));
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int (*parr[4]) (int, int) = { Add,Sub,Mul,Div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//}
//char* my_strcpy(char* dest, const char* src);
//1.写一个函数指针pf, 能够指向my_strcpy
//char* (*pf)(char*, const char*);
//2.写一个函数指针数组pfArr, 能够存放4个my_strcpy函数的地址
//char*(*pfArr[4])(char*, const char*);

//回调函数
//回调函数就是一个通过函数指针调用的函数.如果你把函数的指针(地址)作为参数传递给另一
//个函数，当这个指针被用来调用其所指向的函数时, 我们就说这是回调函数.回调函数不是由
//该函数的实现方直接调用，而是在特定的事件或条件发生时由另外的一 - 方调用的，用于对
//该事件或条件进行响应。

//用函数指针数组实现计算器
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
int main()
{
	int input = 0;
	menu();
	int (*parr[])(int, int) = {0, Add,Sub,Mul,Div,Xor };
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
		else if (input == 0)
		{
			return 0;
		}
		else
		{
			printf("输入错误,请重新输入、、、");
		}
	} while (input);
	return 0;
}





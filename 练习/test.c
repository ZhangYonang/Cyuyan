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
//�������1
//(*(void(*)()0)();
//�������2
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
//1.дһ������ָ��pf, �ܹ�ָ��my_strcpy
//char* (*pf)(char*, const char*);
//2.дһ������ָ������pfArr, �ܹ����4��my_strcpy�����ĵ�ַ
//char*(*pfArr[4])(char*, const char*);

//�ص�����
//�ص���������һ��ͨ������ָ����õĺ���.�����Ѻ�����ָ��(��ַ)��Ϊ�������ݸ���һ
//�������������ָ�뱻������������ָ��ĺ���ʱ, ���Ǿ�˵���ǻص�����.�ص�����������
//�ú�����ʵ�ַ�ֱ�ӵ��ã��������ض����¼�����������ʱ�������һ - �����õģ����ڶ�
//���¼�������������Ӧ��

//�ú���ָ������ʵ�ּ�����
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
		else if (input == 0)
		{
			return 0;
		}
		else
		{
			printf("�������,���������롢����");
		}
	} while (input);
	return 0;
}





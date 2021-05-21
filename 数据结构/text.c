//#include<stdio.h>
//#include<malloc.h>
//typedef struct wuhu
//{
//	char date;
//	struct wuhu* next;
//} Wuhu, * qifei;
//qifei Initialize()//初始化
// {
//	qifei L = NULL;
//	Wuhu* s, * r = NULL;
//	char flag = '0';
//	char x;
//	scanf_s("%d", &x);
//	while (x != flag)
//	{
//		s = (Wuhu*)malloc(sizeof(Wuhu));
//		if (L == NULL)
//			L = s;
//		else
//			r->next = s;
//		r = s;
//		scanf_s("%c",&x); 
//	}
//	if (r != NULL)
//		r->next = NULL;
//	return L;
//}
//void Show(qifei L)//打印
//{
//	qifei p = L;
//	while (p != NULL)
//	{
//		printf("%c", p->date);
//		p = p->next;
//	}
//}
//Wuhu* Use(qifei L, char i)
//{
//	Wuhu* p = L;
//	int j = 0;
//	while (p->next != NULL && j < i)
//	{
//		p = p->next;
//		j++;
//	}
//	if (j == i)
//		return p;
//	else
//		return NULL;
//}
//int Interposition(qifei L, int i, char x)//插入
//{
//	Wuhu *p, *s;
//	p = Use(L, i - 1);
//	if (p == NULL)
//	{
//		printf("参数i错");
//		return 0;
//	}
//	else
//	{
//		s = (Wuhu*)malloc(sizeof(Wuhu));
//		s->date = x;
//		s->next = p->next;
//		p->next = s;
//		return 1;
//	}
//}
//int Delete(qifei L, int i)
//{
//	qifei p, s;
//	p = Use(L, i - 1);
//	if (p == NULL)
//	{
//		printf("第i-1个节点不存在");
//		return 0;
//	}
//	else
//	{
//		if (p->next == NULL)
//		{
//			printf("第i个节点不存在");
//			return 0;
//		}
//		else
//		{
//			s = p->next;
//			p->next = s->next;
//			free(s);
//			return 1;
//		}
//	}
//}
//int count(qifei L)
//{
//	int i = 0;
//	qifei p;
//	p = L;
//	while (p->next != NULL)
//	{
//		p = p->next;
//        i++;
//	}
//	return i;
//}
//
//int main()
//{
//	qifei L;
	/*printf("(1)采用尾插法建立单链表（输入0结束）\0");
	L = Initialize();
	printf("(2)输出单链表L：\n");
	Show(L);
	printf("(3)在第三个元素位置上插入x元素\n");
	Interposition(L, 3, 'x');
	printf("(4)输出单链表L:\n");
	Show(L);
	printf("(5)删除L的第二个元素\n");
	Delete(L, 2);
	printf("(6)输出单链表L：\n");
	Show(L);
	int i = count(L);
	printf("长度为%d",i);
	return 0;
}*/
//#include<stdio.h>
//#include<malloc.h>
//typedef struct bit
//{
//	int a;
//	struct bit* next;
//}Bit;
//Bit* Initialize(int X)
//{
//	Bit* L=NULL;
//	int input = 0;
//	int i = 0;
//	Bit* s=NULL;
//	Bit* r=NULL;
//	for (i = 0; i < X - 1; i++)
//	{
//		printf("请输入储存的第%d个内容:>",i+1);
//		scanf_s("%d", &input); 
//		s = (Bit*)malloc(sizeof(Bit));
//		s->a = input;
//		if (i == 0)
//		{
//			L = s;
//		}
//		else
//		{
//			r->next = s;
//		}
//		r = s;
//		if (r != NULL)
//		{
//			r->next = NULL;
//		}
//	}
//	return L;
//}
//int count(Bit* L)
//{
//	int i = 0;
//	Bit* p;
//	p = L;
//	while (p->next != NULL)
//	{
//		p = p->next;
//        i++;
//	}
//	return i;
//}
//int main()
//{
//	Bit* L;
//	int x = 0;
//	int output = 0;
//	printf("请输入链表长度:>");
//	scanf_s("%d", &x);
//	L=Initialize(x);
//	output = count(L);
//	printf("节点有%d个", output);
//	return 0;
//}
//
//#include<stdio.h>
//#include<malloc.h>
//typedef struct wuhu
//{
//	int a;
//	struct wuhu* befor;
//	struct wuhu* next;
//}WUHU;
//int main()
//{
//
//	
//}
//
//*s;
//s = B->next;
//
//B->next = B->next->next;
//B->next->next->befor = B;
//
//free(s);
//s = NULL;
#include<stdio.h>
#include<malloc.h>
enum
{
	exit,
	add,
	dlr,
	ldr,
	lrd,
};
typedef struct wuhu
{
	int a;
	struct wuhu* left;
	struct wuhu* right;
}WUHU;
typedef struct size
{
	WUHU* Fist;
	WUHU* p;
	int size;
}Size;
void Menu()
{
	printf("******1.添加*********2.先序遍历输出********\n");
	printf("******3.中序遍历输出**4.后续遍历输出*******\n");
	printf("*****************0.退出********************\n");
}
Size* Initialization()//初始化二叉树
{
	WUHU* p = (WUHU*)malloc(sizeof(WUHU));
	Size* fp = (Size*)malloc(sizeof(Size));
	p->left = NULL;
	p->right = NULL;
	fp->Fist = p;
	fp->p = p;
	fp->size = 0;
	return fp;
}
Size* Add(Size* P)//添加
{
	int A = 0;
	if (P->size == 0)
	{
		printf("输入存入的元素:>");
		scanf("%d",&A);
		P->Fist->a = A;
		P->size++;
	}
	else 
	{
		WUHU* fp = (WUHU*)malloc(sizeof(WUHU));
		fp->left = NULL;
		fp->right = NULL;
		printf("输入存入的元素:>");
		scanf("%d",&A);
		fp->a = A;
		if (P->p->left == NULL)
		{
			P->p->left = fp;
			P->size++;
		}
		else if (P->p->right == NULL)
		{
			P->p->right = fp;
			P->p = fp;
			P->size++;
		}
		return P;
	}
}
void Dlr(WUHU* P)//先序遍历输出
{
	if ( P == NULL)
		return 0;
		printf("%d", P->a);
		Dlr(P->left);
		Dlr(P->right);
}
void Ldr(WUHU* P)//中序遍历输出
{
	if (P == NULL)
		return 0;
	Ldr(P->left);
	printf("%d", P->a);
	Ldr(P->right);
}
void Lrd(WUHU* P)//后序输出
{
	if (P == NULL)
		return 0;
	Lrd(P->left);
	Lrd(P->right);
	printf("%d ", P->a);
}
int main()
{
	int input;
	Size* p;
	p = Initialization();//二叉树的初始化
	do
	{
		Menu();
		WUHU* fp = p->Fist;
		printf("请输入:>");
		scanf("%d", &input);
		switch (input)
		{
		case(exit):
			printf("退出...");
			free(p);
			break;
		case(add)://添加
			p=Add(p);
			break;
		case(dlr)://先序遍历
			Dlr(fp);
			printf("\n");
			break;
		case(ldr)://中序遍历
			Ldr(fp);
			printf("\n");
			break;
		case(lrd)://后续输出
			Lrd(fp);
			printf("\n");
			break;
		default:
			break;
		}
	} while (input);

	return 0;
}
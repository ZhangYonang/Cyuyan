#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10]= &arr;
//	int(*pfArr[4])(int, int);
//	int(*(ppfArr)[4])(int, int) = &pfArr;
//	
//
//	return 0;
//}
	
//qsort�⺯����ʹ��

//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int cmp_float(const void* e1, const void* e2)
//{
//	return *(float*)e1 - *(int*)e2;
//}
//void test()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	float f[10] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0,0.0 };
//	int sz2 = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz2, sizeof(f[0]), cmp_float);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz2; i++)
//	{
//		printf("%.2f ", f[i]);
//	}
//}
//int main()
//{
//	test();
//}

//com_float �����Ż�
//int cmp_float(const void* e1, const void* e2)
//{
//	if (*(float*)e1 == *(float*)e2)
//		return 0;
//	else if (*(float*)e1 > *(float*)e2)
//		return 1;
//	else
//		return -1;
//}


//дһ�δ���������ǵ�ǰ�������ֽ�����ʲô
//int a = 1;
//char* p = (char*)&a;
//if (*p == 1)
//{
//	printf("С��");
//}
//else
//{
//	printf("���")��
//}


//�ַ�����
//char arr = { 'a','b','c','d','e','f' };
//printf("%d\n", sizeof(arr));//������������С 6*1=6�ֽ�
//printf("%d\n", sizeof(arr + 0));//4/8 arr����Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ ��ַ�Ĵ�С��4��8�ֽ�
//printf("%d\n", sizeof(*arr));//1  arr����Ԫ�صĵ�ַ��*arr������Ԫ�أ���Ԫ�����ַ���С��һ���ֽ�
//printf("%d\n", sizeof(arr[1]));//1
//printf("%d\n", sizeof(&arr));//&arr ��Ȼ������ĵ�ַ�����ǻ��ǵ�ַ����ַ��С��4/8���ֽ�
//printf("%d\n", sizeof(&arr + 1));//&arr+1 ���������������ĵ�ַ����ַ��С��4/8���ֽ�
//printf("%d\n", sizeof(&arr[0] + 1));//4/8 �ڶ���Ԫ�صĵ�ַ


//printf("%d\n", strlen(arr));//���ֵ
//printf("%d\n", strlen(arr + 0));//���ֵ
////printf("%d\n", strlen(*arr));//err
////printf("%d\n", strlen(arr[1]));//err 
//printf("%d\n", strlen(&arr));//���ֵ
//printf("%d\n", strlen(&arr + 1));//���ֵ-6
//printf("%d\n", strlen(&arr[0] + 1));//���ֵ

//char arr[] = "abcdef";
//printf("%d\n", sizeof(arr));//sizeof(arr)�ļ��������Ĵ�С����λ���ֽڣ�7
//printf("%d\n", sizeof(arr + 0));//������ǵ�ַ����ַ�Ĵ�С��4/8
//printf("%d\n", sizeof(*arr));//*arr����Ԫ�أ�sizeof(*arr)������Ԫ�صĴ�С��1
//printf("%d\n", sizeof(arr[1]));//����ڶ���Ԫ�صĴ�С��1
//printf("%d\n", sizeof(&arr));//����&arr�Ĵ�С����ַ��С��4/8
//printf("%d\n", sizeof(&arr + 1));//��������һ�������ĵ�ַ����ַ��СΪ��4/8
//printf("%d\n", sizeof(&arr[0] + 1));//&arr[0]+1�ǵڶ���Ԫ�صĵ�ַ����ַ��СΪ��4/8
//
//char arr[] = "abcdef";
//printf("%d\n", strlen(arr));//�����ַ������� 6
//printf("%d\n", strlen(arr + 0));//arr+0������Ԫ�صĵ�ַ 6
//printf("%d\n", strlen(*arr));//�Ƿ����� err
//printf("%d\n", strlen(arr[1]));//�Ƿ����� err
//printf("%d\n", strlen(&arr));//��arr��ַ����arr���� 6
//printf("%d\n", strlen(&arr + 1));//����һ��arr��С������������Ԫ�صĴ�С ���
//printf("%d\n", strlen(&arr[0] + 1));//&arr[0]+1��������Ԫ�ؼ���ʣ��Ԫ�ش�С 5

 //char *p[] = "abcdef";
 //printf("%d\n", strlen(p));// 6
 //printf("%d\n", strlen(p + 1));// 5
 //printf("%d\n", strlen(*p));// err
 //printf("%d\n", strlen(p[0]));// err
 //printf("%d\n", strlen());// ���ֵ
 //printf("%d\n", strlen(&p + 1));// ���ֵ
 //printf("%d\n", strlen(&p[0] + 1));// 5
//
//int a[3][4] = { 0 };
//printf("%\n", sizeof(a));
//printf("%\n", sizeof(a[0][0]));
//printf("%\n", sizeof(a[0]));
//printf("%\n", sizeof(a[0] + 1));
//printf("%\n", sizeof(*(a[0] + 1)));
//printf("%\n", sizeof(&a[0] + 1));
//printf("%\n", sizeof(*a));
//printf("%\n", sizeof(a[3]));
//
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));
//	return 0;
//}
//  
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
////����p ��ֵΪ0x100000�����±��ʽ��ֵ�ֱ��Ƕ��٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//} a[3] = { {"zhangsan",20},{"lisi",10},{"wangwu",5} }
//;
//int main()
//{
//	printf("%s", a[0].name);
//	return 0;
//}

//
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}
//
//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00

//#include<stdio.h>
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}
//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}
//
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d,%d", *pulPtr, *(pulPtr + 3));
//	return 0;
//}
//����ˮ���� һƿ��ˮ1Ԫ ������ƿ ���Ի�һƿ��ˮ �� 20��Ǯ ���Ժȶ�����ˮ  
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	printf("Ǯ��");
//	scanf_s("%d", &money);
//	total= money;
//	empty = total;
//	while (empty > 1)
//	{
//		total = total + empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	
//	printf("%d\n",total);
//	return 0;
//}
//
////ʹ�����������ȫ��λ��ż��ǰ��
//void move(int A[], int Sz)
//{
//	int i = 0;
//	int j = 0;
//	int r = 0;
//	int h = 0;
//	for (i = 0; i < Sz; i++)
//	{ 
//		if (A[i] % 2 != 0)
//		{
//			j = A[i];
//			r = A[h];
//			A[h] = j;
//			A[i] = r;
//			h++;
//		}
//
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d",a+b,c);
//	return 0;
//}
//int main()
//{
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));
//	return 0;
//}
//int main()
//{
//	unsigned int a = 0x1234;
//	unsigned char b = *(unsigned char*)&a;
//	printf("%d\n", b);
//	return 0;
//}
//�������
//
//������
//A˵��������
//B˵����C
//C˵����D
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵�˼ٻ�
//���ڸ�����Щ��Ϣ��дһ���������ж�˭������
//int main()
//{
//	int killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		printf("KILLER=%c",killer);
//	}
//	return 0;
//}
//��������
//��36ƥ�� 6���ܵ� û�м�ʱ�� ������ȷ�� 36ƥ�е�ǰ����
//��������������
//��������
// ��25ƥ�� 5���ܵ� û�м�ʱ�� ������ȷ�� 25ƥ���е�ǰ����
// ��������������
//
//LSָ��
//�﷨:[ѡ��][Ŀ¼���ļ���]
//����:����Ŀ¼���������г���Ŀ¼��������Ŀ¼���ļ��������ļ������г��ļ����Լ�������Ϣ��
//����ѡ�
//* -a �г�Ŀ¼�µ������ļ��������ԣ���ͷ�������ļ���
//* -d ��Ŀ¼�ļ�һ����ʾ����������ʾ���µ��ļ����磺ls -dָ��Ŀ¼
//* -i ����ļ���i�ڵ��������Ϣ����ls -aiָ���ļ�
//* -k ��k�ֽڵ���ʽ��ʾ�ļ��Ĵ�С��ls -alkָ���ļ�
//* -l�г��ļ�����ϸ��Ϣ
//* -t��ʱ������
//* -R�г�������Ŀ¼�µ��ļ����ݹ飩
//pwd����
//�﷨��pwd
//���ܣ���ʾ�û���ǰ����λ��
//
//cdָ��
//Linuxϵͳ�У������ϵ��ļ���Ŀ¼�����һ��Ŀ¼����ÿ���ڵ㶼��Ŀ¼���ļ�
//�﷨��cdĿ¼��
//���ܣ��ı乤��Ŀ¼������ǰ����Ŀ¼�ı䵽ָ��Ŀ¼�¡�
//
//touchָ��
//�﷨��touch[ѡ��]...�ļ�...
//���ܣ�touch��������ɸı��ĵ���Ŀ¼������ʱ�䣬������ȡʱ��͸���ʱ�䣬�����½�һ�������ڵ��ļ�
//����ѡ�
//* -a �� -time=atime �� --time=access �� -time=use ֻ���Ĵ�ȡʱ��
//* -d ʹ��ָ�������ں�ʱ�䣬�������ڵ�ʱ�䡣
//* -f �˲��������Բ��账����������BSD�汾touchָ��ļ���������
//* -m ��--time=mtime �� --time=modify ֻ���ı䶯ʱ�䡣
//* -r ��ָ���ĵ���Ŀ¼��ʱ�䣬ͳͳ��ɺͲο��ĵ���Ŀ¼������ʱ����ͬ
//* -t ʹ��ָ��������ʱ�䣬�������ڵ�ʱ�䡣
//typedef struct Wuhu
//{
//	int name[10];
//	int age;
//	struct wuhu* next;
//}Wuhu;
//int main()
//{
//	int i = 0,j=0;
//	printf("�������");
//	scanf_s("%d", j);
//	struct Wuhu* p, * fist, * end;
//	for (i = 0; i < j; i++)
//	{
//		p = (Wuhu*)malloc(sizeof(Wuhu));
//		printf("������");
//		scanf_s("%d", p->name);
//		scanf_s("%d", p->age);
//		fist = p;
//		end = p;
//		end->next = NULL;
//	}
//	return 0;
//}
//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int *ptr1 = (int *)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//}
//
//int main()
//{
//    int input = 2019;
//    int add = 0;
//    int q = 0;
//    int b = 0;
//    int g = 0;
//    for (input = 2019; input > 0; input--)
//    {
//        q = input % 1000;
//        if (q == 9)
//        {
//            add++;
//            continue;
//        }
//        b = input % 100;
//        if (b == 9)
//        {
//            add++;
//            continue;
//        }
//        g = input % 10;
//        if (g == 9)
//        {
//            add++;
//            continue;
//        }
//
//    }
//    printf("%d", add);
//    return 0;
//}
//typedef struct wuhu
//{
//	int number[10];
//	int march[3];
//	struct wuhu* next;
//}wuhu;
//int mian()
//{
//	struct wuhu* p, * fist, * end;
//	p = (wuhu*)malloc(sizeof(wuhu));
//	scanf("%d", p->number);
//	scanf("%d", p->march);
//	fist = p;
//	end = p;
//	end->next = NULL;
//	p = (wuhu*)malloc(sizeof(wuhu));
//	scanf("%d", p->number);
//	scanf("%d", p->march);
//	p = p->next;
//  end = p;
//  end->next = NULL;
//
//}
//typedef struct wuhu
//{
//	int number;
//	struct wuhu* next;
//}wuhu;
//int main()
//{
//	int i = 0;
//	int input = 0;
//	struct wuhu* fist, * p, * end;
//	printf("���������ݸ���:>");
//	scanf_s("%d", &input);//��������
//	for (i = 0; i < input; i++)
//	{
//
//      p = (wuhu*)malloc(sizeof(wuhu));
//	  p->number = 1;//��ֵ
//	    if (i == 0)
//	    {
//		   fist = p;//ָ����Ԫ���׵�ַ��ַ
//		   end = p;
//		   end->next = NULL;//βָ�����
//	    }
//	    else
//	    {
//		   p->next = p;
//		   end = p;
//		   end->next = NULL;//βָ�����
//	    }
//		printf("%d", p->number);
//		p = p->next;
//	}
//	int dingdan;
//	printf("������Ҫ��ѯ�Ķ���:>");
//	scanf_s("%d", &dingdan);
//	while (p != NULL)
//	{
//		if (p->number == dingdan)
//		{
//			break;
//		}
//		p = p->next;
//		else if (p == NULL)
//		{
//			printf("not found");
//		}
//	}
//	return 0;
//}
//
//strcat
//. Appends a copy of the source string to the destination string. The terminating null
//  character in destination is overwritten by the first character of source,and a null
//  -character is included at the end of the new string formed by the concatenation of
//  both in destination.
//. Դ�ַ�������'\0'����
//. Ŀ��ռ�����㹻����������Դ�ַ���������
//. Ŀ��ռ������޸�
//
//




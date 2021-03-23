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
	
//qsort库函数的使用

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

//com_float 函数优化
//int cmp_float(const void* e1, const void* e2)
//{
//	if (*(float*)e1 == *(float*)e2)
//		return 0;
//	else if (*(float*)e1 > *(float*)e2)
//		return 1;
//	else
//		return -1;
//}


//写一段代码告诉我们当前机器的字节序是什么
//int a = 1;
//char* p = (char*)&a;
//if (*p == 1)
//{
//	printf("小端");
//}
//else
//{
//	printf("大端")；
//}


//字符数组
//char arr = { 'a','b','c','d','e','f' };
//printf("%d\n", sizeof(arr));//计算的是数组大小 6*1=6字节
//printf("%d\n", sizeof(arr + 0));//4/8 arr是首元素的地址，arr+0还是首元素的地址 地址的大小是4、8字节
//printf("%d\n", sizeof(*arr));//1  arr是首元素的地址，*arr就是首元素，首元素是字符大小是一个字节
//printf("%d\n", sizeof(arr[1]));//1
//printf("%d\n", sizeof(&arr));//&arr 虽然是数组的地址，但是还是地址，地址大小是4/8个字节
//printf("%d\n", sizeof(&arr + 1));//&arr+1 是跳过整个数组后的地址，地址大小是4/8个字节
//printf("%d\n", sizeof(&arr[0] + 1));//4/8 第二个元素的地址


//printf("%d\n", strlen(arr));//随机值
//printf("%d\n", strlen(arr + 0));//随机值
////printf("%d\n", strlen(*arr));//err
////printf("%d\n", strlen(arr[1]));//err 
//printf("%d\n", strlen(&arr));//随机值
//printf("%d\n", strlen(&arr + 1));//随机值-6
//printf("%d\n", strlen(&arr[0] + 1));//随机值

//char arr[] = "abcdef";
//printf("%d\n", sizeof(arr));//sizeof(arr)的计算的数组的大小，单位是字节：7
//printf("%d\n", sizeof(arr + 0));//计算的是地址，地址的大小是4/8
//printf("%d\n", sizeof(*arr));//*arr是首元素，sizeof(*arr)计算首元素的大小：1
//printf("%d\n", sizeof(arr[1]));//计算第二个元素的大小：1
//printf("%d\n", sizeof(&arr));//计算&arr的大小，地址大小是4/8
//printf("%d\n", sizeof(&arr + 1));//计算跳过一个数组后的地址，地址大小为：4/8
//printf("%d\n", sizeof(&arr[0] + 1));//&arr[0]+1是第二个元素的地址，地址大小为：4/8
//
//char arr[] = "abcdef";
//printf("%d\n", strlen(arr));//计算字符串长度 6
//printf("%d\n", strlen(arr + 0));//arr+0还是首元素的地址 6
//printf("%d\n", strlen(*arr));//非法访问 err
//printf("%d\n", strlen(arr[1]));//非法访问 err
//printf("%d\n", strlen(&arr));//传arr地址计算arr长度 6
//printf("%d\n", strlen(&arr + 1));//跳过一个arr大小的数组计算后面元素的大小 随机
//printf("%d\n", strlen(&arr[0] + 1));//&arr[0]+1跳过了首元素计算剩余元素大小 5

 //char *p[] = "abcdef";
 //printf("%d\n", strlen(p));// 6
 //printf("%d\n", strlen(p + 1));// 5
 //printf("%d\n", strlen(*p));// err
 //printf("%d\n", strlen(p[0]));// err
 //printf("%d\n", strlen());// 随机值
 //printf("%d\n", strlen(&p + 1));// 随机值
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
////假设p 的值为0x100000。如下表达式的值分别是多少？
////以知，结构体Test类型的变量大小是20个字节
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
//喝汽水问题 一瓶汽水1元 两个空瓶 可以换一瓶汽水 问 20快钱 可以喝多少汽水  
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	printf("钱数");
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
////使数组里的奇数全部位于偶数前面
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
//杨辉三角
//
//猜凶手
//A说：不是我
//B说：是C
//C说：是D
//D说：C在胡说
//已知3个人说了真话，1个人说了假话
//现在根据这些信息，写一个程序来判断谁是凶手
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
//赛马问题
//有36匹马 6个跑道 没有计时器 请赛马确定 36匹中的前三名
//请问最少赛马几次
//赛马问题
// 有25匹马 5个跑道 没有计时器 请赛马确定 25匹马中的前三名
// 请问最少赛几次
//
int mian()
{
    int input;
    int a = 0;
    int i = 0;
    scanf_s("%d", &input);
    for (a = 0; a <= input; a++)
    {
        for (i = 0; i <= a; i++)
        {
            printf(" ");
        }
        printf("*");
    }
    return 0;
}

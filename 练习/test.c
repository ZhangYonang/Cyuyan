//#include<stdio.h>
//#include<stdlib.h>
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
//	p = fist;
//	while (p != NULL)
//	{
//		if (p->number == dingdan)
//		{
//			break;
//		}
//		p = p->next;
//	    if (p == NULL)
//		{
//			printf("not found");
//		}
//	}
//return 0;
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
//strcmp
//. This function starts comparing the first character of each string. If they are equal
//  to each other,it continues with the following pairs until the characters differ or 
//  until a terminating null-character is reached
//. ��һ���ַ������ڵڶ����ַ������򷵴���0������
//. ��һ���ַ������ڵڶ����ַ������򷵻�0
//. ��һ���ַ���С�ڵڶ����ַ������򷵻�С��0������
//
//strncpy
//. Copies the first num characters of source to destination, If the end of the source C 
//  string(which is signaled by a null - character) is found before num characters have 
//  been copied, destination is padded with zeros until a total of num characters have 
//  been written to it.
//. ����num���ַ���Դ�ַ�����Ŀ��ռ䡣
//. ���Դ�ַ����ĳ���С��num, �򿽱���Դ�ַ���֮��, ��Ŀ��ĺ��׷��0, ֱ��num����
//
//
//strncat
//�� Appends the first num characters of source to destination, plus a terminating null - character.
//. If the length of the C string in source is less than num, only the content up to the terminating
//  null - character is copied.

//int main()
//{
//	char str[][5] = { "R2D2" , "C3PO" , "R2A6" };
//	int n;
//	puts("Looking for R2 astromech droids...");
//	for (n = 0; n < 3; n++)
//	{
//		if (strncmp(str[n], "R2xx", 2) == 0)
//		{
//			printf("found %s\n", str[n]);
//		}
//	}
//	return 0;
//}

//strtok
//char*strtok(char t str, const char t sep);
//. sep�����Ǹ��ַ���, �����������ָ������ַ����ϡ�
//. ��һ������ָ��һ���ַ�������������0�����߶����sep�ַ�����һ�����߶���ָ����ָ�ı�ǡ�
//  strtok�����ҵ�str�е���һ �����, ��������\0��β, ����һ��ָ�������ǵ�ָ�롣(ע: strtok
//  ������ı䱻�������ַ���, ������ʹ��strtok�����зֵ��ַ���һ�㶼����ʱ���������ݲ��ҿ��޸ġ�)
//. strtok�����ĵ�һ ���� ����ΪNULL, �������ҵ�str�е�һ�����, strtok���������������ַ����е�λ�á�
//. strtok�����ĵ�һ ������ΪNULL, ��������ͬһ���ַ����б������λ�ÿ�ʼ, ������һ����ǡ�
//. ����ַ����в����ڸ���ı��, �򷵻�NULLָ�롣
/*int main()
{
	char arr[] = "123456@234.com";
	char* p = "@.";
	char buf[1024] = { 0 };
	strcpy(buf, arr);
	char* ret = NULL;
	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
	{
		printf("%s\n", ret);
	}
	return 0;
}

*/
//
//����       ������Ĳ����������������ͷ�����
//
//iscntrl   �����κ��ַ�
//isspace   �հ��ַ����ո�' ',��ҳ'\f',����'\n',�س�'\r',�Ʊ��'\t'���ߴ�ֱ�Ʊ��'\v'
//isdigit   ʮ�������� 0~9
//isxdigit  ʮ���������֣���������ʮ�������֣�Сд��ĸa~f����д��ĸA~F
//islower   Сд��ĸa~z
//issupper  ��ĸA~Z
//isalpha   ��ĸa~z��A~Z
//isalnum   ��ĸ�������֣�a~z,A~Z,0~9
//ispunct   �����ţ��κβ��������ֻ�����ĸ��ͼ���ַ����ɴ�ӡ��
//isgraph   �κ�ͼ���ַ�
//isprint   �κοɴ�ӡ�ַ�������ͼ���ַ��Ϳհ��ַ�
//int main()
//{
	//������  ������Ϣ
	//  0  -  No error     
	//  1  -  Operation not permitted 
	//  2  -  No such file or directory
	// ...
	//errno ��һ��ȫ�ֵĴ�����ı���
	//��C���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ�����
	//��ֵ��errno��
	//char* str = strerror(errno);
	//printf("%s", str);
	//return 0;
//}

//void* memcpy(void* destination��const void* source�� size_ t num);
//. ����memcpy��source��λ�ÿ�ʼ�����num���ֽڵ����ݵ�destination���ڴ�λ�á�
//. �������������'\0'��ʱ�򲢲���ͣ������
//. ���source��destination���κε��ص�,���ƵĽ������δ����ġ�
// 
//. ��memcpy�Ĳ�����memmove���������Դ�ڴ���Ŀ���ڴ���ǿ����ص��ġ�
//. ���Դ�ռ��Ŀ��ռ�����ص����͵�ʹ��memmove��������
//int my_strlen(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}

//int my_strlen(char* s)
//{
//	char* p = s;
//	while (*p != '\0')
//		p++;
//	return p - s;
//}
//int main()
//{
//	//01 00 00 00 02 00 00 00 03 00 00 ...
//	//01 00 00 00 02 00 00 00 05 00 00 ...
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 }; 
//	int ret = memcmp(arr1, arr2, 9);//�ԱȵĴ�С��λ���ַ�
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	char arr[10] = "";
//	memset(arr,'#',10);
	//int arr[10] = { 0 };
	//memset(arr, 1, 10);
	//          err ��Ϊ���õ��ڴ��С���ַ���
	//С�˴�����  00 00 00 00 00 00 00 00 00 ...
	//  ������Ϊ  01 01 01 01 01 01 01 01 01 ...
//}
//struct stu
//{
//	char name[10];
//	char telnumber[30];
//}stu4;//ȫ�ֱ���
//
//struct stu stu3;//ȫ�ֱ���
//
//int main()
//{
//	struct stu stu1;//�ֲ�����
//	struct stu stu2;//�ֲ�����
//	return 0;
//}

//�����ṹ������
//struct
//{
//	char name[20];
//	int age;
//}x;//ֻ��ʹ��x���� �޷������µı���

//struct A
//{
//	int a;
//	struct A a;//err
//};
//struct B
//{
//	int a;
//	struct B* next;
//};
//
//
//typedef struct Node
//{
//	int a;
//}node;//typedef ��struct Node������Ϊnode
//typedef struct Wuhu
//{
//	char s;
//	char a;
//	int d;
//	char arr[30];
//}wuhu;
//int main()
//{
//    wuhu hh = {'s','a',6,"helloworld"};
//	printf("%c %c %d %s", hh.s, hh.a, hh.d, hh.arr);
//	return 0;
//}

//
//��μ��� �����ȵ����սṹ��Ķ������
//     1.��һ����Ա��ṹ�����ƫ����Ϊ0�ĵ�ַ����
//	 2.������Ա����Ҫ���뵽ĳ������(������)���������ĵ�ַ����
//������ = ������Ĭ�ϵĵ�һ�������� �� �ó�Ա��С�Ľ�Сֵ��
//    vs ��Ĭ�ϵ�ֵΪ8��
//	 3.�ṹ���ܴ�СΪ��������(ÿ����Ա��������һ��������)����������
//	 4.���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ�����������������
//	   �ṹ��������С����������������(��Ƕ�׽ṹ��Ķ�����)����������

//Ϊʲô�����ڴ����룿
//   �󲿷ֵĲο����϶�����ô˵��(û�йٷ�����)
//   1.ƽ̨ԭ��(��ֲԭ��):��������Ӳ��ƽ̨�� �ܷ��������ַ�ϵ��������ݣ�
//	                  ĳЩӲ��ƽֻ̨����ĳЩ��ַ��ȡĳЩ�ض����͵�����
//                      �����׳�Ӳ���쳣��
//   2.����ԭ��:���ݽṹ(������ջ)Ӧ�þ����ܵ�����Ȼ��߽��϶��롣ԭ������
//	         Ϊ�˷���δ������ڴ棬��������Ҫ�������ڴ���ʣ���������ڴ�
//	         ���ʽ�����Ҫһ�η��ʡ�
//������˵���ṹ����ڴ�������ÿռ�����ȡʱ���������

//λ�ε��ڴ����
//1.λ�εĳ�Ա������ int,unsigned int,signed int ������ char (�������μ���)����
//2.λ�εĿռ����ǰ�����Ҫ��4���ֽ�(int)����1���ֽ�(char)�ķ�ʽ�����ٵġ�
//3.λ���漰�ܶ಻ȷ�����أ�λ���ǲ���ƽ̨�ģ�ע�����ֲ�ĳ���Ӧ�ñ���ʹ��λ�Ρ�

//ö�ٵ��ŵ�
//Ϊʲôʹ��ö�٣�
//���ǿ���ʹ��#define���峣����Ϊʲô��Ҫʹ��ö�٣�
//ö�ٵ��ŵ㣺
//1.���Ӵ���Ŀɶ��ԺͿ�ά���ԡ�
//2.��#define����ı�ʶ���Ƚ�ö�������ͼ�飬�����Ͻ���
//3.��ֹ��������Ⱦ����װ����
//4.���ڵ��ԡ�
//5.ʹ�÷��㣬һ�ο��Զ�����������

//typedef struct stu
//{
//	char name[10];
//	char telnumber[30];
//	char a;
//	int age;
//}wuhu;
//int main()
//{
//	int i;
//	wuhu a = { "abcde","1234",'a',10 };
//	return 0;
//	i=strlen(wuhu);
//	printf("%d", i);
//}

//struct A
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//};

//enum Sex
//{
//	MALE = 2,
//    FEMALE = 3,
//	secret=0
//};
//int main()
//{
//	enum Set s = MALE;
//	return 0;
//}
//
//union Un
//{
//	char i;
//	int j;
//};
//int main()
//{
//
//}
//int main()
//{
//	int x = 0;
//	int* a;
//	a = &x;
//	printf("%p",a);
//
//}
//C�����ṩ��һ����̬�ڴ濪�ٵĺ���
//void* malloc(sizeof(size_t size));
//����������ڴ�����һ���������õĿռ䣬������ָ�����ռ���ָ�롣
//-������ٳɹ����򷵻�һ��ָ�򿪱ٺÿռ��ָ�롣
//-�������ʧ�ܣ��򷵻�һ��NULLָ�룬���malloc�ķ���ֵһ��Ҫ����顣
//-����ֵ��������void*������malloc��������֪�����ٵĿռ�����ͣ�����
// ��ʹ�õ�ʱ��ʹ�����Լ�ȥ������
//-�������sizeΪ0��malloc����Ϊ�Ǳ�׼δ����ģ�ȡ���ڱ�������

//C�����ṩ������һ������free��ר������������̬�ڴ���ͷźͻ��յ�
//void free(void* ptr);
//free���������ͷŶ�̬���ٵ��ڴ�
//-�������ptrָ��Ŀռ䲻�Ƕ�̬���ٵģ���free��������Ϊ��δ����ġ�
//-�������ptr��NULLָ�룬����ʲô�¶�������


//int main()
//{
//	//���ڴ�����10�����εĿռ�
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d",*(p + i));
//		}
//	}
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ��
//	//��Ӧ�û�������ϵͳ
//	free(p);
//	p = NULL;
//	return 0;
//}

//C���Ի��ṩ��һ��������calloc, calloc����Ҳ������̬�ڴ����
//
// ԭ�ͣ� void* calloc(size_t num, size_t size);
//-�����Ĺ�����Ϊnum����СΪsize��Ԫ�ؿ���һ��ռ䣬���Ұѿռ�
// ��ÿ���ֽڳ�ʼ��Ϊ0.
//-��malloc������ֻ����calloc���ڷ��ص�ַ֮ǰ������Ŀռ��ÿ��
// �ֽڳ�ʼ��Ϊȫ0.

//int main()
//{
//	//malloc(10*sizeof(int));
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + 1));
//		}
//	}
//	//�ͷſռ�
//	//free�����������ͷŶ�̬���ٵĿռ��
//	free(p);
//	p = NULL;
//	return 0;
//}

//- realloc�����ĳ����ö�̬�ڴ����������
//- ��ʱ���ǻᷢ�ֹ�ȥ����Ŀռ�̫С�ˣ���ʱ�������־��������
//  �ռ�̫���ˣ���Ϊ�˺����ʹ���ڴ棬����һ������ڴ�������
//  ��������realloc�����Ϳ��������Զ�̬�����ڴ��С�ĵ�����
//  ����ԭ�ͣ�void * realloc(void* ptr, size_t size);
//- ptr��Ҫ�������ڴ��ַ��
//- size����֮���´�С
//- ����ֵΪ����֮����ڴ���ʼλ��
//- �����������ԭ�ڴ�ռ��С�Ļ����ϣ����Ὣԭ���ڴ��е�����
//  �ƶ����µĿռ䡣
//- realloc�ڵ����ڴ�ռ�ʱ�����������
//1��ԭ�пռ�֮�����㹻��Ŀռ�
//
//int main()
//{
//	int* p = (int*)malloc(sizeof(int));
//	int* ptr = realloc(p, INT_MAX);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (NULL == p)
//	{
//		exit(EXIT_FAILURE);
//	}
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = i;//iΪ10ʱԽ�����
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);//����Ϊ��c��������Ϊ�����
//	return 0;
//}
//

//int main()
//{
//	int* p = (int*)malloc(100);
//	p++;
//	free(p);//p++��p������ָ��̬�ڴ���ʼλ��
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(100);
//	free(p);
//	free(p);//�ظ��ͷ�
//}

//void wuhu()
//{
//	int* p = (int*)malloc(100);
//	if (NULL != p)
//	{
//		*p = 20;
//	}
//}
//int main()
//{
//	while (1)
//	{
//		wuhu();
//	}
//	return 0;
//	
//}

//typedef struct wuhu
//{
//	int a;
//	int a[0];//���������Ա
//}WUHU;

//typedef struct wuhu
//{
//	int a;
//	int arr[0];
//}WUHU;
//int main()
//{
//	int i = 0;
//	WUHU* p = (WUHU*)malloc(sizeof(WUHU) + 100 * sizeof(int));
//	//                                �ṹ��+����Ԫ�ظ���*sizeof(int);
//	p->a = 100;//��ֵa
//	for (i = 0; i < 100; i++)
//	{
//		p->arr[i] = i;//��ֵarr������100��Ԫ��
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", p->arr[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//
//}
//
//typedef struct wuhu
//{
//	int a;
//	int* p_a;
//}WUHU;
//int main()
//{
//	int i = 0;
//	WUHU* p = (WUHU*)malloc(sizeof(WUHU));
//	p->a = 100;
//	p->p_a = (int*)malloc(100 * sizeof(int));
//	for (i = 0; i < 100; i++)
//	{
//		p->p_a[i] = i;
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", p->p_a[i]);
//	}
//	free(p->p_a);
//	free(p);
//	p = NULL;
//	return 0;
//}
//
//�������ļ�:�������ڴ����Զ����ƴ��棬�������ת�����浽����Ͼ��Ƕ������ļ���
//
//�ı��ļ�  :���Ҫ�����������ASCII�����ʽ���棬����Ҫ�ڴ���ǰת������ASCII��ֵ��ŵ�����
//          �����ı��ļ���

//�ַ�һ����ASCII���ţ���ֵ�����ݼ�����ASCII��ֵ��ʽ���Ҳ�����Զ�������ʽ��š�

//#include<stdio.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt","wb");
//	fwrite(&a, 4, 1, pf);
//	pf = NULL;
//	return 0;
//}
//����һ���ڳ�����ǰ���#define _CRT_SECURE_NO_DEPRECATE��
//���������ڳ�����ǰ���#define _CRT_SECURE_NO_WARNINGS��
//���������ڳ�����ǰ���#pragma warning(disable:4996)��
//�����ģ���scanf��scanf��Ϊscanf_s��fopen_s�����巽����ٶȣ�
//�����壺�����ڳ�����ǰ������д��룬ֻ�����½���Ŀʱȡ����ѡ��SDL��顱���ɣ�
//������������Ŀ�ѽ����ã�����Ŀ������ر�SDLҲ�У�
//�����ߣ��ڹ�����Ŀ����һ�¾��У��������Ǹ��궨��ŵ� ��Ŀ���� -- C / C++--Ԥ������ -- Ԥ���������壻
//�����ˣ��� ��Ŀ���� -- c / c++ --������ ��ӣ� / D _CRT_SECURE_NO_WARNINGS �����ˡ�

//�ļ�������
//ANSIC��׼���á������ļ�ϵͳ�����������ļ�����ν�����ļ�ϵͳ��ָϵͳ�Զ������ڴ���Ϊÿһ������
//��ÿһ������ʹ�õ��ļ�����һ�顰�ļ��������������ڴ��������������ݻ����͵��ڴ��еĻ�������װ
//�����������һ���͵������ϡ�����Ӵ����������������ݣ���Ӵ����ж�ȡ�������뵽�ڴ滺������
//����������Ȼ���ٴӻ���������Ľ������͵���������������������ȣ����������Ĵ�С����C����ϵͳ
//�����ġ�

//�ļ�ָ��
//�����ļ�ϵͳ�У��ؼ��ĸ����ǡ��ļ�����ָ�롱����ơ��ļ�ָ�롱ÿ����ʹ�õ��ļ������ڴ��п�����һ��
//��Ӧ���ļ���Ϣ������������ļ��������Ϣ�����ļ������֣��ļ�״̬���ļ��ĵ�ǰλ�õȣ�����Щ��Ϣ
//�Ǳ�����һ���ṹ������еģ��ýṹ������ϵͳ�����ģ�ȡ��FILE��


//ÿ����һ���ļ���ʱ��ϵͳ������ļ�������Զ�����һ��FILE�ṹ�ı�������������е���Ϣ
//ʹ���߲��ع�ϵϸ��
//һ�㶼��ͨ��һ��FILE��ָ����ά�����FILE�ṹ�ı�������������е���Ϣ������ʹ������������
//���ǿ��Դ���һ��FILE*��ָ�����
//FILE* pf//�ļ�ָ�����
//
//����pf��һ��ָ��FILE�������ݵ�ָ�����������ʹpfָ��ĳ���ļ����ļ���Ϣ������һ���ṹ�壩��
//ͨ�����ļ���Ϣ���е��ļ����ܷ��ʸ��ļ���ͨ���ļ�ָ������ܹ��ҵ������������ļ�

//�ļ��ڶ�д֮ǰӦ���ȴ��ļ�����ʹ�ý���֮��Ӧ�ùر��ļ���
//�ڱ�д�����ʱ���ڴ��ļ���ͬʱ�����᷵��һ��FILE* ��ָ�����ָ����ļ���Ҳ�൱�ڽ���
//��ָ����ļ��Ĺ�ϵ��
//ANSIC�涨ʹ��fopen���������ļ���fclose���ر��ļ���
//FILE* fopen(const char* filename, const char* mode);
//int fclose(FILE* stream);
//
//�ļ�ʹ�÷�ʽ         ����                                           ����ļ�������
//r  ��ֻ����          Ϊ���������ݣ���һ���Ѿ����ڵ��ı��ļ�          ����
//w  ��ֻд��          Ϊ���������ݣ���һ���ı��ļ�                   ����һ���µ��ļ�
//a  ��׷�ӣ�          ���ı��ļ�β�������                            ����
//rb ��ֻ����          Ϊ���������ݣ���һ���������ļ�                 ����
//wb ��ֻд��          Ϊ��������ݣ���һ���������ļ�                 ����һ���µ��ļ�
//ab ��׷�ӣ�          ��һ���������ļ�β׷������                       ����
//r+ ����д��          Ϊ�˶���д����һ���ı��ļ�                     ����
//w+ ����д��          Ϊ�˶���д������һ���µ��ļ�                     ����һ���µ��ļ�
//a+ ����д��          ��һ���ļ������ļ�β���ж�д                   ����һ���µ��ļ�
//rb+����д��          Ϊ�˶���д��һ���������ļ�                     ����
//wb+����д��          Ϊ�˶���д���½�һ���µĶ������ļ�               ����һ���µ��ļ�
//ab+����д��          ��һ���������ļ������ļ�β���ж���д            ����һ���µ��ļ�
//#include<stdio.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("TEST.txt", "wb");
//	fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ���
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	char s[100] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fgets(s, 12, pf);
//	printf("%s", s);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char* a = "h";
//	FILE* pf = fopen("test.txt","w");
//	fputc(*a, pf);
//	pf = NULL;
//	return 0;
//}



//#include<stdio.h>
//struct wuhu
//{
//	int a;
//	float f;
//};
//int main()
//{
//	struct wuhu wuhu = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fscanf(pf,"%d %f",&wuhu.a,&wuhu.f);
//	fclose(pf);
//	pf = NULL;
//	printf("%d %f", wuhu.a, wuhu.f);
//	return 0;
//}
//#include<stdio.h>
//struct wuhu
//{
//	int a;
//	float f;
//};
//int main()
//{
//	struct wuhu wuhu = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fscanf(pf, "%d %f", &wuhu.a, &wuhu.f);
//	fclose(pf);
//	pf = NULL;
//	printf("%d %f", wuhu.a, wuhu.f);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char arr[30] = { 0 };
//	FILE* pf = fopen("test.txt", "r+");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fputs("Wu   qifei",pf);
//	fseek(pf, 2, SEEK_SET);
//	fputs("hu", pf);
//	rewind(pf);
//	fgets(arr, 10, pf);
//	printf("%s", arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int judge;
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	while ((c = fgetc(pf)) != EOF)//��׼C I/O��ȡ�ļ�ѭ��
//	{
//		putchar(c);
//	}
//	if (ferror(fp))
//	{
//		puts("��ȡʱ����");
//	}
//	else if (feof(fp))
//	{
//		puts("")
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int c;
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}
	while ((c = fgetc(pf)) != EOF)//  I/O��ȡ�ļ�ѭ��
	{
		putchar(c);
	}
	if (ferror(pf))
	{
		puts("��ȡʱ����:");
	}
	else if (feof(pf))
	{
		printf("�ѳɹ������ļ���β");
	}
	return 0;

}
#include<stdio.h>
void swap(int* pa, int* pb)
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("a=%db=%d\n", a, b);
	swap(&a, &b);
	printf("a=%db=%d", a, b);
	return 0;
}
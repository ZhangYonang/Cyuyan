#include<stdio.h>
int main()
{
	char ch='x';
	int x;
	unsigned y;
	float z=0;
	y=x*x;
	z-=y/x;
	printf("ch=%c,x=%d,y=%u,y=%d,z=%f",ch,x,y,z);
	return 0;
}

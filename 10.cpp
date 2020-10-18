#include<stdio.h>
#include<string.h>
int main()
{
	int line=0;
	while(line<20000)
	{
		printf("敲一行代码 %d\n");
		line++;
	}
	if(line<=20000)
	printf("好offer\n");
	return 0;
}

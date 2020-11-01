#include<stdio.h>
int main()
{
    int x,b,s;
    printf("请输入三位数\n");
	scanf("%d",&x);
	b=x/100;
    s=(x-b*100)/10;
	printf("百位数为%d\n",x/100);	
    printf("十位数为%d\n",(x-b*100)/10);
    printf("个位数为%d\n",(x-b*100-s*10));
	return 0;
 } 
	

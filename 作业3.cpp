#include<stdio.h>
int main()
{
	char c1,c2,c3,c4,c5,c6;
	printf("请输入要加密的字母\n");
	scanf("%c%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5,&c6);
	c1+=5,c2+=5,c3+=5,c4+=5,c5+=5,c6+=5;
	printf("%c%c%c%c%c%c",c1,c2,c3,c4,c5,c6);
	return 0; 
 } 

#include<stdio.h>
int main()
{
	char c1,c2;
	printf("ÇëÊäÈë´óÐ´×ÖÄ¸\n");
	scanf("%c",&c1);
	c2=c1+32;
	if(c1>64 && c1<91)
	printf("Êä³öÐ¡Ð´×ÖÄ¸\n""%c",c2);
	else
	printf("ÄúÃ»ÓÐÊäÈë´óÐ´×ÖÄ¸");
	return 0;//ba da xie zi mu zhua huan wei xiao xie zi mu bin pan duan si fou shu ru cuo wu
}

#include<stdio.h>
int main()
{
    int x,b,s;
    printf("��������λ��\n");
	scanf("%d",&x);
	b=x/100;
    s=(x-b*100)/10;
	printf("��λ��Ϊ%d\n",x/100);	
    printf("ʮλ��Ϊ%d\n",(x-b*100)/10);
    printf("��λ��Ϊ%d\n",(x-b*100-s*10));
	return 0;
 } 
	

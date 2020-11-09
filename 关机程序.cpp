#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char input[20]={0};
	system("shutdown -s -t 60");
	again:
	printf("请注意，你的电脑在一分钟内关机如果输入我巨强就取消关机\n请输入:");
	scanf("%s",input);
	if(strcmp(input,"我巨强")==0)
	 {
	 	system("shutdown -a");
	 }
	 else
	 {
	 	goto again;
	 }
	 return 0;
}

#include<stdio.h>
int main()
{
	char c;
	printf("请输入");
	c=getchar();
	if(c>=' ' && c<='/')
	printf("您输入的是一个字符\n");
	else if(c>='0' && c<='9')
	printf("您输入的是一个数字\n");
	else if(c>=':' && c<='@')
	printf("您输入的是一个字符\n");
	else if(c>='A' && c<='Z')
	printf("您输入的是一个大写字母\n");
	else if(c>='[' && c<=',')
	printf("您输入的是一个字符\n");
	else if(c>='a' && c<='z')
	printf("您输入的是一个小写字母\n");
	else
	printf("您输入的是一个字符\n"); 
	return 0; 
	
 } 

#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char input[20]={0};
	system("shutdown -s -t 60");
	again:
	printf("��ע�⣬��ĵ�����һ�����ڹػ���������Ҿ�ǿ��ȡ���ػ�\n������:");
	scanf("%s",input);
	if(strcmp(input,"�Ҿ�ǿ")==0)
	 {
	 	system("shutdown -a");
	 }
	 else
	 {
	 	goto again;
	 }
	 return 0;
}

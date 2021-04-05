#include<stdio.h>
#include<string.h>
#include<assert.h>
void left_move(char* ch,int input)
{
	assert(ch);
	int i = 0;
	int len = strlen(ch);
	for (i = 0; i < input; i++)
	{
		char fist = *ch;
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			*(ch + j) = *(ch + j + 1);
		}
		*(ch + len - 1) = fist;
	}
}
int main()
{
	int k;
	char arr[] = "abcdefg";
	printf("请输入需要左旋字符的个数:>");
	scanf_s("%d",&k);
	left_move(arr,k);
	printf("%s", arr);
	return 0;
}
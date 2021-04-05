#include<stdio.h>
#include<string.h>
#include<assert.h>
void reverse(char* left,char* right)
{
	while (left < right)
	{
		char* p = left;
		left = right;
		right = p;
		left++;
		right--;
	}
}
void left_move(char* arr, int k)
{
	assert(arr);
	int len = strlen(arr);
	reverse(arr,arr+k-1);//ÄæÐò×ó±ß
	reverse(arr+k,arr+len+1);//ÄæÐòÓÒ±ß
	reverse(arr,arr+len-1);//ÄæÐòÕûÌå
}
int main()
{
	int k = 0;
	char arr[] = "qwert";
	printf("ÇëÊäÈëÐèÒªÄæÐòµÄ¸öÊý:>");
	scanf_s("%d", &k);
	left_move(arr, k);
	printf("%s",arr);
	return 0;
}



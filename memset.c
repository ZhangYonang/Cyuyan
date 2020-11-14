#include<stdio.h>
int main()
{
	char arr[] = "hello word";
	memset(arr, '*', 5);
	printf("%s\n", arr);
	return 0;
}
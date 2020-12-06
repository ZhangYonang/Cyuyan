#include<stdio.h>
#include<string.h>
int main()
{
	char a[2][4];
	strcpy(a, "you");
	strcpy(a[1], "me");
	a[0][3] = '&';
	printf("%s\n", a);
	return 0;
}
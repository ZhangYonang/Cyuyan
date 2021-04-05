#include<stdio.h>
#include<assert.h>
char* my_strcat(char* dest,const char* src)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	//1.ÕÒµ½'\0'
	while (*dest != '\0')
	{
		dest++;
	}
	//2.¿½±´
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	my_strcat(arr1, arr2);
	printf("%s", arr1);
	return 0;
}

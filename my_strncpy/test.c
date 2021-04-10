#include<stdio.h>
#include<assert.h>
void my_strncpy(char* str1,char* str2,int k)
{
	int i = 0;
	char tmp;
	assert(str1 != NULL);
	assert(str2 != NULL);
	for (i = 0; i < k; i++)
	{
		*str1 = *str2;
		str1++;
		str2++;
	}
	
}
int main()
{
	char arr1[30] = "hello";
	char arr2[] = "word";
	my_strncpy(arr1, arr2, 4);
	printf("%s", arr1);
	return 0;
}
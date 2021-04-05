#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* str1,const char* str2)//str2不会改变所以拿const修饰
{
	assert(str1 != NULL);
	assert(str2 != NULL);//断言 指针是否为空
	char* ret = str1;
	while (*str1++ = *str2++)//当找到'\0'时 停止循环拷贝
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[10] = "asdfghjkl";
	char arr2[10] = "bit";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
}
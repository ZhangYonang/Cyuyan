#include<stdio.h>
#include<assert.h>
int my_strcmp(const char* str1,const char* str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	while (*str1 == *str2)
	{
		if (*str1 != '\0')//���
		{
			return 0;
		}
		str1++;
		str2++;
	}
	if (*str1 > *str2)//����
	{
		return 1;
	}
	if (*str1 < *str2)//С��
	{
		return -1;
	}
}
int main()
{
	char* p1 = "abcde";
	char* p2 = "cdefg";
	int ret = my_strcmp(p1,p2);
	printf("%d", ret);
	return 0;
}
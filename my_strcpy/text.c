#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* str1,const char* str2)//str2����ı�������const����
{
	assert(str1 != NULL);
	assert(str2 != NULL);//���� ָ���Ƿ�Ϊ��
	char* ret = str1;
	while (*str1++ = *str2++)//���ҵ�'\0'ʱ ֹͣѭ������
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
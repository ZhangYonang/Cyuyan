#include<stdio.h>
#include<string.h>
int is_left_move(char* str1, char* str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2)
	{
		return 0;
	}
//1.��str1�ַ�����׷��һ��str1�ַ���
//strcate(str1,str1);//err
	strncat_s(str1, str1, 6);
//2.�ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ�
//strstr-���Ӵ��Ŀ⺯�� ����ֵ Ϊָ������
	char* ret = strstr(str1, str2);
	if (ret == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	char arr1[100] = "abcdef";
	char arr2[10] = "cdefab";
	int ret = is_left_move(arr1, arr2);
	if (ret == 1)
	{
        printf("YES\n");
	}	
	else
	{
		printf("NO\n");
	}
	return 0;
}





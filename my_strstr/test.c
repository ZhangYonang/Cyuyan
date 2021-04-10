#include<stdio.h>
#include<assert.h>
char* my_strstr(const char* p1,const char* p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	char* s1 = NULL;
	char* s2 = NULL;
	char* cur = p1;
	if (*p2 == '\0')
	{
		return (char*)p1;//��p1ǿ������ת��Ϊchar*���� ��ֹ������
	}
	while (*cur)
	{
		s1 = cur;
		s2 = p2;
		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cur;//�ҵ��Ӵ�
		}
		cur++;
	}
	return NULL;//�Ҳ����Ӵ����ؿ�ָ��
}
int main()
{
	char arr1[30] = "abcdef";
	char arr2[] = "def";
	char* out = my_strstr(arr1,arr2);
	printf("%s", out);
	return 0;
}
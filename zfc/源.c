#include<stdio.h>
#include<string.h>
int main()
{
	char ch[10];
	int a = 0,b=0,c=0,d=0;
	printf("�������ַ�");
	gets(ch);
	b = strlen(ch);
	for (int i = 0; i < b; i++)
	{
		if ((ch[i] >= '0') && (ch[i] <= '9'))
		{
          a++;
		}
		else if ((ch[i] >= 'A') && (ch[i] <= 'Z'))
		{
			c++;
		}
		else if ((ch[i] >= 'a') && (ch[i] <= 'z'))
		{
			d++;
		}
	}
	printf("��д��ĸ��:>%d��\nСд��ĸ��:>%d��\n������%d��:>",c,d,a);
	return 0;
}
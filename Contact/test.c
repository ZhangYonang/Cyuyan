#include"contact.h"
int main()
{
	int input = 0;
	struct type* p;
	p = Initialization();
	p = Read(p);
	do
	{
		Menu();
		printf("����:>");
		scanf("%d", &input);
		switch (input)
		{
		case(add)://�����ϵ����Ϣ
			p=Add(p);
			printf("�����ϵ����Ϣ�ɹ�...\n");
			break;
		case(del)://ɾ����ϵ����Ϣ
			p=Del(p);
			break;
		case(query)://��ѯ��ϵ����Ϣ
			Query(p);
			break;
		case(exit)://�˳����
			Save(p);
			free(p);
			printf("��лʹ��...");
			break;
		case(show)://���������ϵ����Ϣ
			Show(p);
			break;
		case(save):
			Save(p);//�����ݴ������ļ�����
			break;
		case(modify):
			p = Modify(p);//�޸���ϵ����Ϣ
			break;
		default://��������ж�
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}

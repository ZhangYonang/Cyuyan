#include"contact.h"
void Menu()
{
	printf("************************************\n");
	printf("*****1.�����ϵ��**2.ɾ����ϵ*******\n");
	printf("*****3.������ϵ��**4.�޸���ϵ����Ϣ*\n");
	printf("*****5.�鿴��ϵ��**6.����***********\n");
	printf("***********0.�˳�*******************\n");
	printf("************************************\n");
}
void Menu2()
{
	printf("--------------------\n");
	printf("---1.����--2.�绰---\n");
	printf("---3.�Ա�--4.סַ---\n");
	printf("--------------------\n");
}
//ͨѶ¼��ʼ��
struct type* Initialization()
{
	struct contact* p = (struct contact*)malloc(sizeof(struct contact));
	struct type* sp = (struct type*)malloc(sizeof(struct type));
	sp->fist = p;
	sp->pcontact = p;
	p->next = NULL;
	sp->end = p->next;
	sp->size = 1;
	printf("��ʼ���ɹ�...\n");
	return sp;
}
//�����ϵ��
struct type* Add(struct type* p)
{
	struct contact* fp = (struct contact*)malloc(sizeof(struct contact));
	if (fp == NULL)
	{
		printf("��ӿռ�ʧ��...\n");
		return 0;
	}
	else
	{
		printf("��ӿռ�ɹ�...\n");
		printf("��������ϵ������:>");
		scanf("%s", fp->name);
		printf("��������ϵ�˵绰:>");
		scanf("%s", fp->telnumber);
		printf("��������ϵ���Ա�:>");
		scanf("%s", fp->sex);
		printf("��������ϵ��סַ:>");
		scanf("%s", fp->address);
		fp->next = NULL;
		p->end = fp->next;
		p->pcontact->next = fp;
		p->pcontact = fp;
		p->size++;

	}
	return p;
}
//���������ϵ����Ϣ
void Show(struct type* p)
{
	int i = 0;
	struct contact* fp = p->fist->next;
	for (i = 0; i < (p->size - 1); i++)
	{
		printf("����:%-10s �绰��:%-15s �Ա�:%-5s סַ:%-20s\n", fp->name, fp->telnumber, fp->sex, fp->address);
		if (fp->next == NULL)
		{
			return ;
		}
		else 
		{
			fp = fp->next;
		}
	}
}
//��ѯ��ϵ����Ϣ
void Query(struct type* p)
{
	struct contact* fp = p->fist->next;
	int i = 0;
	int j = 0;
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ��ѯ����ϵ������:>");
	scanf("%s", name);
	printf("��ѯ��...\n");
	for (i = 0; i < (p->size-1); i++)
	{
		j = strcmp(fp->name, name);
		if (j == 0)
		{
			printf("����:%-10s �绰��:%-15s �Ա�:%-5s סַ:%-20s\n", fp->name, fp->telnumber, fp->sex, fp->address);
			return ;
		}
		if (i == p->size - 2)
		{
			printf("ͨѶ¼��û�д���ϵ��....\n");
		}
		else
		{
			fp = fp->next;
		}
	}
}
//ɾ����ϵ��
struct type* Del(struct type* p)
{
	struct contact* fp = p->fist->next;
	struct contact* sp = p->fist;
	int i = 0;
	int j = 0;
	int a = 0;
	char name[MAX_NAME] = { 0 };
	printf("������Ҫɾ������ϵ������:>");
	scanf("%s", name);
	printf("ɾ����...\n");
	for (i = 1; i < p->size; i++)
	{
		j = strcmp(fp->name, name);
		if (j == 0)
		{
			sp->next = fp->next;
			p->size--;
			free(fp);
			fp = NULL;
			sp = NULL;
			printf("ɾ���ɹ�...\n");
			break;
		}
		else
		{
			fp = fp->next;
			sp = sp->next;
		}
	}
	return p;
}
//�޸���ϵ����Ϣ
struct type* Modify(struct type* p)
{
	struct contact* fp = p->fist->next;
	int i = 0;
	int j = 0;
	int input = 0;
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�޸���Ϣ����ϵ������:>");
	scanf("%s", name);
	printf("��ѯ��...\n");
	for (i = 0; i < (p->size-1); i++)
	{
		j = strcmp(fp->name, name);
		if (j == 0)
		{
			printf("��ѡ��Ҫ�޸ĵ�����...\n");
			Menu2();
			scanf("%d", &input);
			switch (input)
			{
			case 1:
				printf("�����޸�Ϊ:>");
				scanf("%s", fp->name);
				printf("�޸ĳɹ�...\n");
			case 2:
				printf("��ϵ�˵绰�޸�Ϊ:>");
				scanf("%s", fp->telnumber);
				break;
			case 3:
				printf("�Ա��޸�Ϊ:>");
				scanf("%s", fp->sex);
				break;
			case 4:
				printf("��ϵ��סַ�޸�Ϊ:>");
				scanf("%s", fp->address);
			default:
				break;
			}
			return p;
		}
		else
		{
			fp = fp->next;
		}
	}
	return p;
}
//������ϵ����Ϣ 
void Save(struct type* p)
{
	int i = 0;
	struct contact* sp = p->fist->next;
	FILE* fp = fopen("contact.txt", "wb");
	if (fp == NULL)
	{
		return 0;
	}
	for (i = 0; i < p->size - 1; i++)
	{
		fwrite(sp, sizeof(struct contact), 1, fp);
		sp = sp->next;
	}
	fclose(fp);
	printf("����ɹ�...\n");

}
//���ļ��ж�ȡ����
struct type* Read(struct type* p)
{
	
	int i = 1;
	FILE* fp = fopen("contact.txt", "rb");
	if (fp == NULL)
	{
		return p;
	}
	while (i)
	{
		struct contact* sp = (struct contact*)malloc(sizeof(struct contact));
		i = fread(sp, sizeof(struct contact), 1, fp);
		if (i != 0)
		{
			sp->next = NULL;
		    p->end = sp->next;
		    p->pcontact->next = sp;
		    p->pcontact = sp;
       		p->size++;
		}
		
	}
	fclose(fp);
	printf("��ȡ�ɹ�...\n");
	return p;
}	
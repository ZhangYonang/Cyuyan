#include<stdio.h>
#include<malloc.h>
#include<assert.h>
#include<errno.h>
#define MAX_NAME 10
#define MAX_TELE 30
#define MAX_SEX 5
#define MAX_ADDRESS 30
struct type* Add(struct type* P);
struct type* Initialization();
void Query(struct type* P);
void Show(struct type* P);
struct type* Del(struct type* P);
struct type* Modify(const struct type* P);
void Save(struct type* P);
struct type* Read(struct type* P);
void Menu();
void Menu2();
enum 
{
	exit,//�˳�
	add,//���
	del,//ɾ��
	query,//��ѯ
	modify,//�޸�
	show,//�������
	save,//���浽ϵͳ�ļ�
};
struct contact 
{
	char name[MAX_NAME];//������ϵ������
	char telnumber[MAX_TELE];//������ϵ�˵绰����
	char sex[MAX_SEX];//������ϵ���Ա�
	char address[MAX_ADDRESS];//������ϵ��סַ
	struct contact* next;//������һ���ڵ�
};
struct type
{
	int size;//��¼ͨѶ¼��С
	struct contact* fist;//��¼ͷ��ַ
	struct contact* pcontact;//��ʱ����
	struct contact* end;//��¼βָ��
};   
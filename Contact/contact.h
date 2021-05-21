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
	exit,//退出
	add,//添加
	del,//删除
	query,//查询
	modify,//修改
	show,//遍历输出
	save,//保存到系统文件
};
struct contact 
{
	char name[MAX_NAME];//储存联系人名字
	char telnumber[MAX_TELE];//储存联系人电话号码
	char sex[MAX_SEX];//储存联系人性别
	char address[MAX_ADDRESS];//储存联系人住址
	struct contact* next;//储存下一个节点
};
struct type
{
	int size;//记录通讯录大小
	struct contact* fist;//记录头地址
	struct contact* pcontact;//临时变量
	struct contact* end;//记录尾指针
};   
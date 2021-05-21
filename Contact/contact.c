#include"contact.h"
void Menu()
{
	printf("************************************\n");
	printf("*****1.添加联系人**2.删除联系*******\n");
	printf("*****3.查找联系人**4.修改联系人信息*\n");
	printf("*****5.查看联系人**6.保存***********\n");
	printf("***********0.退出*******************\n");
	printf("************************************\n");
}
void Menu2()
{
	printf("--------------------\n");
	printf("---1.姓名--2.电话---\n");
	printf("---3.性别--4.住址---\n");
	printf("--------------------\n");
}
//通讯录初始化
struct type* Initialization()
{
	struct contact* p = (struct contact*)malloc(sizeof(struct contact));
	struct type* sp = (struct type*)malloc(sizeof(struct type));
	sp->fist = p;
	sp->pcontact = p;
	p->next = NULL;
	sp->end = p->next;
	sp->size = 1;
	printf("初始化成功...\n");
	return sp;
}
//添加联系人
struct type* Add(struct type* p)
{
	struct contact* fp = (struct contact*)malloc(sizeof(struct contact));
	if (fp == NULL)
	{
		printf("添加空间失败...\n");
		return 0;
	}
	else
	{
		printf("添加空间成功...\n");
		printf("请输入联系人姓名:>");
		scanf("%s", fp->name);
		printf("请输入联系人电话:>");
		scanf("%s", fp->telnumber);
		printf("请输入联系人性别:>");
		scanf("%s", fp->sex);
		printf("请输入联系人住址:>");
		scanf("%s", fp->address);
		fp->next = NULL;
		p->end = fp->next;
		p->pcontact->next = fp;
		p->pcontact = fp;
		p->size++;

	}
	return p;
}
//遍历输出联系人信息
void Show(struct type* p)
{
	int i = 0;
	struct contact* fp = p->fist->next;
	for (i = 0; i < (p->size - 1); i++)
	{
		printf("姓名:%-10s 电话号:%-15s 性别:%-5s 住址:%-20s\n", fp->name, fp->telnumber, fp->sex, fp->address);
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
//查询联系人信息
void Query(struct type* p)
{
	struct contact* fp = p->fist->next;
	int i = 0;
	int j = 0;
	char name[MAX_NAME] = { 0 };
	printf("请输入要查询的联系人名字:>");
	scanf("%s", name);
	printf("查询中...\n");
	for (i = 0; i < (p->size-1); i++)
	{
		j = strcmp(fp->name, name);
		if (j == 0)
		{
			printf("姓名:%-10s 电话号:%-15s 性别:%-5s 住址:%-20s\n", fp->name, fp->telnumber, fp->sex, fp->address);
			return ;
		}
		if (i == p->size - 2)
		{
			printf("通讯录中没有此联系人....\n");
		}
		else
		{
			fp = fp->next;
		}
	}
}
//删除联系人
struct type* Del(struct type* p)
{
	struct contact* fp = p->fist->next;
	struct contact* sp = p->fist;
	int i = 0;
	int j = 0;
	int a = 0;
	char name[MAX_NAME] = { 0 };
	printf("请输入要删除的联系人名字:>");
	scanf("%s", name);
	printf("删除中...\n");
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
			printf("删除成功...\n");
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
//修改联系人信息
struct type* Modify(struct type* p)
{
	struct contact* fp = p->fist->next;
	int i = 0;
	int j = 0;
	int input = 0;
	char name[MAX_NAME] = { 0 };
	printf("请输入要修改信息的联系人名字:>");
	scanf("%s", name);
	printf("查询中...\n");
	for (i = 0; i < (p->size-1); i++)
	{
		j = strcmp(fp->name, name);
		if (j == 0)
		{
			printf("请选择要修改的内容...\n");
			Menu2();
			scanf("%d", &input);
			switch (input)
			{
			case 1:
				printf("姓名修改为:>");
				scanf("%s", fp->name);
				printf("修改成功...\n");
			case 2:
				printf("联系人电话修改为:>");
				scanf("%s", fp->telnumber);
				break;
			case 3:
				printf("性别修改为:>");
				scanf("%s", fp->sex);
				break;
			case 4:
				printf("联系人住址修改为:>");
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
//保存联系人信息 
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
	printf("储存成功...\n");

}
//从文件中读取数据
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
	printf("读取成功...\n");
	return p;
}	
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
		printf("输入:>");
		scanf("%d", &input);
		switch (input)
		{
		case(add)://添加联系人信息
			p=Add(p);
			printf("添加联系人信息成功...\n");
			break;
		case(del)://删除联系人信息
			p=Del(p);
			break;
		case(query)://查询联系人信息
			Query(p);
			break;
		case(exit)://退出软件
			Save(p);
			free(p);
			printf("感谢使用...");
			break;
		case(show)://遍历输出联系人信息
			Show(p);
			break;
		case(save):
			Save(p);//将数据储存在文件夹中
			break;
		case(modify):
			p = Modify(p);//修改联系人信息
			break;
		default://输入错误判定
			printf("选择错误请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}

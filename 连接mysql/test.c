#include<stdio.h>
#include<mysql.h>
#include<winsock.h>
#include<stdlib.h>
int main()
{
	MYSQL* mysql = mysql_init(0);
	if (!mysql_real_connect(mysql, "localhost", "root", "zya20010922","contactdate", 0, 0, 0))
	{
		printf("连接MySQL出错:%s", mysql_error(mysql));
	}
	else
	{
		printf("连接MySQL成功...");
	}
	return 0;
}
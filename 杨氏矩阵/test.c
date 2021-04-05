//剑指offer
//题目内容
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中
//查找某个数字是否存在。
//要求：时间复杂度小于o(N);
#include<stdio.h>
int faind(int arr[3][3], int Input)
{
	int x = 0;
	int y = 2;
	while (x <= 2 && y >= 0)
	{
		if (arr[x][y] > 3)
		{
			y--;
		}
		else if (arr[x][y] < 3)
		{
			x++;
		}
		else
		{
			return 1;
		}
	}
}
int main()
{
	int input = 0;
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	printf("请输入需要查找的数字:>");
	scanf_s("%d",&input);
	int ret = faind(arr,input);
	if (ret == 1)
	{
		printf("找到了\n");
	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}
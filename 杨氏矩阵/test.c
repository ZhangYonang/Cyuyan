//��ָoffer
//��Ŀ����
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ�����
//����ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С��o(N);
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
	printf("��������Ҫ���ҵ�����:>");
	scanf_s("%d",&input);
	int ret = faind(arr,input);
	if (ret == 1)
	{
		printf("�ҵ���\n");
	}
	else
	{
		printf("�Ҳ���\n");
	}
	return 0;
}
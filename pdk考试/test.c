#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int a[10] = {9,8,7,6,5,4,3,2,1};
	for (i = 0; i < 10 - 1; i++)
	{
		for (j = 0; j < 9 - i; j++)
		{
			if (a[j] > a[j+1])
			{
				char tamp;
				tamp=a[j];
				a[j]=a[j+1];
				a[j+1] = tamp;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d<", a[i]);
	}
	return 0;
}

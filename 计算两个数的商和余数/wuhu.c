#include<stdio.h>
int main()
{
	int a, b = 1, s, n, sum=2;
	scanf_s("%d", &n);
		a = 2;
		if(n!=1)
		{
			for (s = 1; s <= n; s++)
			{
				s = s * 10;
				b += s;
				a = a * b;
				sum += a;
			}
			printf("%d", sum);
		}
		else
			printf("%d",sum);
	return 0;
}

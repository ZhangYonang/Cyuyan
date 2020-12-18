#include"±êÍ·.h"
int haf(int u, int v)
{
	int t, r;
	if (v > u)
	{
		t = u;
		u = v;
		v = t;
	}
	while ((r = u % v) != 0)
	{
		u = v;
		v = r;
		return (v);
	}
}
int lcd(int u, int v, int h)
{
	return(u * v / h);
}
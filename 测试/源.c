#include<stdio.h>
int main()
{
	int n, b, a;
	int ah, am, ac, bh, bm, bc;
	while (scanf("%d", &n) != EOF)
	{
		int x, y, z;
		for (int i = 0; i < n; i++)
		{
			scanf("%d%d%d%d%d%d%d", &ah, &am, &ac, &bh, &bm, &bc);
			x = ac + bc;
			y = am + bm;
			z = ah + bh;
			if (x >= 60)
			{
				int temp;
				temp = x / 60;
				y += temp;
				x -= temp * 60;
			}
			if (y >= 60)
			{
				int temp;
				temp = y / 60;
				z += temp;
				y -= temp * 60;
			}
		}
		printf("%d\t%d\t%d\n", z, y, x);
	}
	return 0;
}
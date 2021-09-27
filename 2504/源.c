#include <stdio.h>
int fx(int m, int n);
int main(void)
{
	int a, b, c, n;
	while ((scanf("%d", &n)) != EOF)
	{
		while (n--)
		{
			scanf("%d %d", &a, &b);
			for (c = b + 1;; c++)
			{
				if (fx(a, c) == b)
				{
					printf("%d\n", c);
					break;
				}
			}
		}
	}
	return 0;
}
int fx(int m, int n)
{
	int tmp;
	if (m < n)
	{
		tmp = m;
		m = n;
		n = tmp;
	}
	int r = 1;
	while (r != 0)
	{
		r = m % n;
		m = n;
		n = r;
	}
	return m;
}
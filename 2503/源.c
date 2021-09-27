#include <stdio.h>
int fx(int m, int n);
int main(void)
{
	int a, b, c, d, N, x, e, f;
	while ((scanf("%d", &N)) != EOF)
	{
		while (N--)
		{
			scanf("%d%d%d%d", &a, &b, &c, &d);
			e = a * d + b * c;
			f = b * d;
			printf("%d %d\n", e / fx(e, f), f / fx(e, f));
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
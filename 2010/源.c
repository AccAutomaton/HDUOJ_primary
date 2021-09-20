#include <stdio.h>
#include <math.h>
int main(void)
{
	int m, n, N;
	while ((scanf("%d %d", &m, &n)) != EOF)
	{
		N = 0;
		for (int i = m; i <= n; i++)
		{
			int a, b, c;
			a = i / 100;
			b = (i - a * 100) / 10;
			c = i - a * 100 - b * 10;
			if (i == a * a * a + b * b * b + c * c * c)
			{
				N++;
				if (N == 1)
					printf("%d", i);
				else
					printf(" %d", i);
			}
		}
		if (N == 0)
			printf("no\n");
		else
			printf("\n");
	}
	return 0;
}
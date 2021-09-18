#include <stdio.h>
#include <math.h>
int main(void)
{
	int m, n;
	int sum_ou, sum_ji;
	while ((scanf("%d %d", &m, &n)) != EOF)
	{
		sum_ou = 0;
		sum_ji = 0;
		for (; m <= n; m++)
		{
			if (m % 2 == 0)
				sum_ou += pow(m, 2);
			else
				sum_ji += pow(n, 3);
		}
		printf("%d %d\n", sum_ou, sum_ji);
	}
	return 0;
}
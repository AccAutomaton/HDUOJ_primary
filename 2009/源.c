#include <stdio.h>
#include <math.h>
int main(void)
{
	double n, m, sum;
	while ((scanf("%lf %lf", &n, &m)) != EOF)
	{
		sum = n;
		for (int i = 0; i < m - 1; i++)
		{
			sum += sqrt(n);
			n = sqrt(n);
		}
		printf("%.2lf\n", sum);
	}
	return 0;
}
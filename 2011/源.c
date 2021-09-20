#include <stdio.h>
#include <math.h>
double shulie(int n);
int main(void)
{
	int m, C;
	double sum;
	while ((scanf("%d", &m))!= EOF)
	{
		for (int i = 0; i < m; i++)
		{
			sum = 0;
			scanf("%d", &C);
			for (int n = 1; n <= C; n++)
				sum += shulie(n);
			printf("%.2lf\n", sum);
		}
	}
	return 0;
}
double shulie(int n)
{
	double a;
	a = (1.0 / n) * pow(-1, n + 1);
	return a;
}
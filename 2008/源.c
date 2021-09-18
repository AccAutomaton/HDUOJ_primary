#include <stdio.h>
int main(void)
{
	int n, a, b, c;
	double x;
	while ((scanf("%d", &n)) != EOF && n > 0)
	{
		a = b = c = 0;
		for (int i = 0; i < n; i++)
		{
			scanf("%lf", &x);
			if (x < 0)
				a++;
			if (x == 0)
				b++;
			if (x > 0)
				c++;
		}
		printf("%d %d %d\n", a, b, c);
	}
	return 0;
}
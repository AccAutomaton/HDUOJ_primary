#include <stdio.h>
int main(void)
{
	int n, m;
	while (scanf("%d %d", &n, &m) != EOF)
	{
		int i, j, sum = 0, t, flag = 1;
		double a[100][100], sn[50] = { 0 }, sm[5] = { 0 };
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < m; j++)
			{
				scanf("%lf", &a[i][j]);
				sn[i] += a[i][j];
				sm[j] += a[i][j];
			}
		}
		for (i = 0; i < n; i++)
		{
			if (flag)
			{
				printf("%.2lf", sn[i]);
				flag = 0;
			}
			else
				printf(" %.2lf", sn[i]);
		}
		printf("\n");
		for (i = 0; i < m; i++) {
			if (!flag)
			{
				printf("%.2lf", sm[i]);
				flag = 1;
			}
			else
				printf(" %.2lf", sm[i]);
		}
		printf("\n");
		for (i = 0; i < n; i++)
		{
			t = 0;
			for (j = 0; j < m; j++)
			{
				if (a[i][j] >= sm[j])
					t++;
				else
					break;
			}
			if (t == m)
				sum++;
		}
		printf("%d\n\n", sum);
	}
	return 0;
}
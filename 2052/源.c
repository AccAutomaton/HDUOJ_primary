#include <stdio.h>
int main(void)
{
	int n, m, i;
	while ((scanf("%d %d", &n, &m)) != EOF)
	{
		i = 0;
		while (i <= m + 1)
		{
			if (i == 0 || i == m + 1)
			{
				printf("+");
				for (int j = 0; j < n; j++)
					printf("-");
				printf("+\n");
				i++;
			}
			if (i > 0 && i < m + 1)
			{
				printf("|");
				for (int j = 0; j < n; j++)
					printf(" ");
				printf("|\n");
				i++;
			}
		}
		printf("\n");
	}
	return 0;
}
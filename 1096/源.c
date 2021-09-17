#include <stdio.h>
int main(void)
{
	int C, N, I, sum, n;
	while ((scanf("%d", &C)) != EOF)
	{
		while (C--)
		{
			while ((scanf("%d", &N)) != EOF)
			{
				sum = 0;
				for (I = 1; I <= N; I++)
				{
					scanf("%d", &n);
					sum += n;
				}

				if (C > 0)
					printf("%d\n\n", sum);
				else
					printf("%d\n", sum);
			}
		}
	}
}
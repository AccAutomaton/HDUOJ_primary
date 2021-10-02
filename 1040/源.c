#include <stdio.h>
int main(void)
{
	int T, N, temp;
	int num[1001];
	while ((scanf("%d", &T)) != EOF)
	{
		while (T--)
		{
			scanf("%d", &N);
			for (int i = 0; i < N; i++)
				scanf("%d", &num[i]);
			for (int j = 0; j < N - 1; j++)
			{
				for (int i = 0; i < N - 1 - j; i++)
				{
					if (num[i] > num[i + 1])
					{
						temp = num[i];
						num[i] = num[i + 1];
						num[i + 1] = temp;
					}
				}
			}
			for (int i = 0; i < N; i++)
			{
				if (i == 0)
					printf("%d", num[i]);
				else
					printf(" %d", num[i]);
			}
			printf("\n");
		}
	}
	return 0;
}
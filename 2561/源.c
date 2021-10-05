#include <stdio.h>
int main(void)
{
	int c, n, temp;
	while (scanf("%d", &c) != EOF)
	{
		while (c--)
		{
			int num[11] = { 0 };
			scanf("%d", &n);
			for (int i = 0; i < n; i++)
				scanf("%d", &num[i]);
			for (int j = 0; j < n - 1; j++)
			{
				for (int k = 0; k < n - 1 - j; k++)
				{
					if (num[k] < num[k + 1])
					{
						temp = num[k];
						num[k] = num[k + 1];
						num[k + 1] = temp;
					}
				}
			}
			printf("%d\n", num[n - 2]);
		}
	}
	return 0;
}
#include <stdio.h>
#define LAST 3
int main(void)
{
	int N, a, sum;
	while ((scanf("%d", &N)) != EOF)
	{
		for (int i = 0; i < N; i++)
		{
			sum = 0;
			scanf("%d", &a);
			for (int n = 1; n <= a; n++)
			{
				if (n == 1)
					sum = (LAST - 1) * 2;
				else
					sum = (sum - 1) * 2;
			}
			printf("%d\n", sum);
		}
	}
	return 0;
}
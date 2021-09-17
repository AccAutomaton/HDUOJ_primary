#include <stdio.h>
int main()
{
	int N, i, a, sum, c;
	while((scanf("%d",&c))!=EOF)
		for (int b = 0; b < c; b++)
		{
			while (scanf("%d", &N) != EOF)
			{
				sum = 0;
				for (i = 0; i < N; i++)
				{
					scanf("%d", &a);
					sum += a;
				}
				printf("%d\n", sum);
			}
		}
	return 0;
}
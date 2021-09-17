#include <stdio.h>
int main(void)
{
	int N, i, sum, n;
	while ((scanf("%d", &N)) != EOF)
	{
		sum = 0;
		for (i = 1; i <= N; i++)
		{
			scanf("%d", &n);
			sum += n;
		}		
		printf("%d\n", sum);
	}
	return 0;
}
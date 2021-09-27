#include <stdio.h>
#include <math.h>
int main(void)
{
	int T, N;
	long long int sum;
	while (scanf("%d", &T) != EOF)
	{
		while (T--)
		{
			scanf("%d", &N);
			sum = (long long int)pow(3, N);
			printf("%lld\n", sum);
		}
	}
	return 0;
}
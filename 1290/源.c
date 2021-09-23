#include <stdio.h>
int main(void)
{
	int n, sum;
	while ((scanf("%d", &n)) != EOF)
	{
		sum = (n * n * n + 5 * n) / 6 + 1;
		printf("%d\n", sum);
	}
	return 0;
}
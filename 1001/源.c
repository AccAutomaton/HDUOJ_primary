#include <stdio.h>
int main(void)
{
	int a, n, sum;
	while ((scanf("%d", &n)) != EOF)
	{
		a = 1;
		sum = 0;
		for (; a <= n; a++)
			sum = sum + a;
		printf("%d\n\n", sum);
	}
	return 0;
}
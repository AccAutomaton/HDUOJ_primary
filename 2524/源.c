#include <stdio.h>
int main(void)
{
	int t, n, m;
	while (scanf("%d", &t) != EOF)
	{
		while (t--)
		{
			scanf("%d %d", &n, &m);
			printf("%d\n", n * (n + 1) * m * (m + 1) / 4);
		}
	}
	return 0;
}
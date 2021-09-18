#include <stdio.h>
int main(void)
{
	int n, pro, x;
	while ((scanf("%d", &n)) != EOF)
	{
		pro = 1;
		for (int i = 1; i <= n; i++)
		{
			scanf("%d", &x);
			if (x % 2 == 1)
				pro *= x;
		}
		printf("%d\n", pro);
	}
	return 0;
}
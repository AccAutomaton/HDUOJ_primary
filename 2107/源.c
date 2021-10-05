#include <stdio.h>
int main(void)
{
	int n, m, ans;
	while ((scanf("%d", &n)) != EOF && n != 0)
	{
		ans = 0;
		while (n--)
		{
			scanf("%d", &m);
			if (m > ans)
				ans = m;
		}
		printf("%d\n", ans);
	}
	return 0;
}
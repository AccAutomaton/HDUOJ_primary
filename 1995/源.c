#include <stdio.h>
#include <math.h>
int main(void)
{
	int T, a, b;
	long long int ans;
	while ((scanf("%d", &T)) != EOF)
	{
		while (T--)
		{
			scanf("%d %d", &a, &b);
			ans = pow(2, a - b);
			printf("%lld\n", ans);
		}
	}
	return 0;
}
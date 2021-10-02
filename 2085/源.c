#include <stdio.h>
int main(void)
{
	long long int H, L;
	int n;
	while ((scanf("%d", &n)) != EOF && n != -1)
	{
		H = 1;
		L = 0;
		while (n--)
		{
			L = H + L;
			H = H * 3 + (L - H) * 2;
		}
		printf("%lld, %lld\n", H, L);
	}
	return 0;
}
#include <stdio.h>
void f(void);
long long int fx[1001];
int main(void)
{
	int n, i;
	f();
	while ((scanf("%d", &i)) != EOF)
	{
		while (i--)
		{
			scanf("%d", &n);
			printf("%lld\n", fx[n]);
		}
	}
	return 0;
}
void f(void)
{
	fx[0] = 0;
	fx[1] = 1;
	fx[2] = 3;
	fx[3] = 5;
	for (int i = 4; i < 1001; i++)
		fx[i] = 2 * fx[i - 2] + fx[i - 1];
}
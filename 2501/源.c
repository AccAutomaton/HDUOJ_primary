#include <stdio.h>
void f(void);
long long int fx[30];
int main(void)
{
	int N, x;
	f();
	while((scanf("%d",&N))!=EOF)
		while (N--)
		{
			scanf("%d", &x);
			printf("%lld\n", fx[x]);
		}
	return 0;
}
void f(void)
{
	fx[1] = 1;
	fx[2] = 3;
	for (int i = 3; i <= 30; i++)
	{
		fx[i] = fx[i - 1] + 2 * fx[i - 2];
	}
}
#include <stdio.h>
void f(void);
long long int fx[51];
int main(void)
{
	int N, a, b;
	f();
	while ((scanf("%d", &N)) != EOF)
		for (int i = 0; i < N; i++)
		{
			scanf("%d %d", &a, &b);
			printf("%lld\n", fx[b - a + 1]);
		}
	return 0;
}
void f(void)
{
	fx[0] = 0;
	fx[1] = 0;
	fx[2] = 1;
	fx[3] = 2;
	for (int x = 4; x < 51; x++)
		fx[x] = fx[x - 1] + fx[x - 2];
}
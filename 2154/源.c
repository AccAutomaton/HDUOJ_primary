#include <stdio.h>
void f(void);
long long int fx[1001];
int main(void)
{
	int n;
	f();
	while ((scanf("%d", &n)) != EOF && n != 0)
		printf("%lld\n", fx[n]);
	return 0;
}
void f(void)
{
	fx[0] = 0;
	fx[1] = 0;
	fx[2] = 2;
	fx[3] = 2;
	for (int i = 4; i < 1001; i++)
		fx[i] = (2 * fx[i - 2] + fx[i - 1]) % 10000;
}
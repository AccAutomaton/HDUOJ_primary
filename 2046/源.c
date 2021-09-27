#include <stdio.h>
int f(void);
long long int fx[50];
int main(void)
{
	int n;
	f();
	while ((scanf("%d", &n)) != EOF)
		printf("%lld\n", fx[n]);
	return 0;
}
int f(void)
{
	fx[1] = 1;
	fx[2] = 2;
	for (int i = 3; i <= 50; i++)
		fx[i] = fx[i - 1] + fx[i - 2];
}
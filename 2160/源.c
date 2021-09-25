#include <stdio.h>
void f(void);
int fx[40];
int main(void)
{
	int T, N;
	f();
	while ((scanf("%d", &T)) != EOF)
		for (int i = 0; i < T; i++)
		{
			scanf("%d", &N);
			printf("%d\n", fx[N]);
		}
	return 0;
}
void f(void)
{
	fx[0] = 0;
	fx[1] = 1;
	fx[2] = 2;
	for (int i = 1; i <= 30; i++)
		fx[i + 2] = fx[i + 1] + fx[i];
}
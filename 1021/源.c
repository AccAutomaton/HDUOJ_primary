#include <stdio.h>
void fx(void);
long long int f[1000001];
int main(void)
{
	int n;
	fx();
	while ((scanf("%d", &n)) != EOF)
	{
		if (f[n] == 0)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}
void fx(void)
{
	f[0] = 7 % 3;
	f[1] = 11 % 3;
	for (int i = 2; i < 1000001; i++)
		f[i] = (f[i - 1] + f[i - 2]) % 3;
}
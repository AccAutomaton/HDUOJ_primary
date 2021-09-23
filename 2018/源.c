#include <stdio.h>
void form(void);
int f[56];
int main(void)
{
	int n;
	form();
	while ((scanf(" %d", &n)) != EOF && n != 0)
		printf("%d\n",f[n-1]);
	return 0;
}
void form(void)
{
	f[0] = 1;
	f[1] = 2;
	f[2] = 3;
	for (int i = 3; i < 56; i++)
		f[i] = f[i - 3] + f[i - 1];
}
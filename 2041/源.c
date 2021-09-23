#include <stdio.h>
int f(int n);
int main(void)
{
	int i;
	while ((scanf("%d", &i)) != EOF)
		printf("%d\n", f(i));
	return 0;
}
int f(int n)
{
	if (n == 1)
		return 0;
	if (n == 2)
		return 1;
	if (n == 3)
		return 2;
	if (n > 3)
		return (f(n - 1) + f(n - 2));
}
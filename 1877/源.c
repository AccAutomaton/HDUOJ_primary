#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a, b, m;
	char ans[100000];
	while (scanf("%d %d %d", &m, &a, &b) != EOF && m != 0)
	{
		itoa(a + b, ans, m);
		printf("%s\n", ans);
	}
	return 0;
}
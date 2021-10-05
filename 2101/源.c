#include <stdio.h>
int main(void)
{
	int a, b;
	while ((scanf("%d %d", &a, &b)) != EOF)
	{
		if ((a + b) % 86 == 0)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}
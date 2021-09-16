#include <stdio.h>
int main(void)
{
	int N, a, b;
	while((scanf("%d",&N))!=EOF)
		for (int i = 0; i < N; i++)
		{
			scanf("%d %d", &a, &b);
			printf("%d\n", a + b);
		}
	return 0;
}
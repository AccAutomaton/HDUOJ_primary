#include<stdio.h>

int main()

{
	int a, n;

	while (scanf("%d", &n)!= EOF)
	{
		int sum = 0, i;

		for (i = 0; i < n; i++)
		{
			scanf("%d", &a);

			sum += a;
		}
		printf("%d\n", sum);
	}
	return 0;
}

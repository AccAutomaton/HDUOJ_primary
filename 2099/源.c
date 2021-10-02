#include <stdio.h>
int main(void)
{
	int a, b;
	while ((scanf("%d %d", &a, &b)) != EOF && (a != 0 || b != 0))
	{
		a *= 100;
		int n = 0;
		for (int i = a; i < a + 100; i++)
		{
			if (i % b == 0)
			{
				if (n == 0)
				{
					if (i - a == 0)
						printf("00 ");
					else
					{
						printf("%d", i - a);
						n++;
					}
				}
				else
				{
					printf(" %d", i - a);
					
				}
			}
		}
		printf("\n");
	}
	return 0;
}
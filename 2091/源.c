#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	int n, mspace;
	char a;
	bool flag = false;
	while ((scanf("%c", &a)) != EOF && a != '@')
	{
		scanf("%d", &n);
		mspace = 1;
		if (n == 1)
		{
			if (flag == true)
				printf("\n");
			printf("%c\n", a);
		}
		else
		{
			if (flag == true)
				printf("\n");
			for (int i = 1; i <= n; i++)
			{
				if (i == 1)
				{
					for (int x = n - i; x >= 1; x--)
						printf(" ");
					printf("%c\n", a);
				}
				if (i > 1 && i < n)
				{
					for (int x = n - i; x >= 1; x--)
						printf(" ");
					printf("%c", a);
					for (int y = 1; y <= mspace; y++)
						printf(" ");
					mspace += 2;
					printf("%c\n", a);
				}
				if (i == n)
				{
					for (int z = 1; z <= 2 * n - 1; z++)
						printf("%c", a);
					printf("\n");
				}
			}
		}
		flag = true;
		getchar();
	}
	return 0;
}
#include <stdio.h>
int main(void)
{
	int x, n, ans, temp;
	while ((scanf("%d", &x)) != EOF)
	{
		while (x--)
		{
			ans = 1;
			scanf("%d", &n);
			temp = n;
			do
			{
				n = n % 10;
			} while (n >= 10);
			for (int i = 1; i <= temp; i++)
			{
				ans *= n;
				if (ans >= 10)
				{
					do
					{
						ans = ans % 10;
					} while (ans >= 10);
				}
			}
			printf("%d\n", ans);
		}
	}
	return 0;
}
/*
#include <stdio.h>
int main(void)
{
    int i, m, n, str[20] = { 0,1,4,7,6,5,6,3,6,9,0,1,6,3,6,5,6,7,4,9 };
    while (scanf("%d", &m) != EOF)
    {
        for (i = 0; i < m; i++)
        {
            scanf("%d", &n);
            n = n % 20;
            printf("%d\n", str[n]);
        }
    }
}
*/
#include <stdio.h>
int main(void)
{
	int n, x, sum, temp;
	while ((scanf("%d", &n)) != EOF && n != 0)
	{
		sum = temp = 0;
		while (n--)
		{
			scanf("%d", &x);
			if (x == temp)
			{
				sum += 5;
			}
			if (x > temp)
			{
				sum += (x - temp) * 6 + 5;
				temp = x;
			}
			if (x < temp)
			{
				sum += (temp - x) * 4 + 5;
				temp = x;
			}
		}
		printf("%d\n", sum);
	}
}
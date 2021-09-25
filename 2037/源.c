#include <stdio.h>
int main(void)
{
	int n;
	int a[100], b[100];
	while ((scanf("%d", &n)) != EOF)
	{
		if (n == 0)
			break;
		int count = 1;
		for (int i = 0; i < n; i++)
			scanf("%d %d", &a[i], &b[i]);
		for (int i = 0; i < n - 1; i++)
			for (int j = i + 1; j < n; j++)
				if (b[j] < b[i])
				{
					int tmp = b[i];
					int tmp1 = a[i];
					b[i] = b[j];
					a[i] = a[j];
					b[j] = tmp;
					a[j] = tmp1;
				}
		int k = 0;
		for (int j = 1; j < n; j++)
		{
			if (b[k] <= a[j])
			{
				count++;
				k = j;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}
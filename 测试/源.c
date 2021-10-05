#include<stdio.h>
int main()
{
	int n;
	while (~scanf("%d", &n))
	{
		double sum = 0;
		double min = 1000, max = 0, s[105];
		for (int i = 0; i < n; i++)
		{
			scanf("%lf", &s[i]);
			sum = sum + s[i];
			if (s[i] > max)max = s[i];
			if (s[i] < min)min = s[i];
		}
		printf("%.2lf\n", (sum - max - min) / (n - 2));
	}
	return 0;
}

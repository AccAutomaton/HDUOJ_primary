#include <stdio.h>
int max(int a, int b, int c);
int main(void)
{
	int n, t, x, maxt = 0;
	int dp[100000][11] = { 0 };
	while (scanf("%d", &n) != EOF && n != 0)
	{
		while (n--)
		{
			scanf("%d %d", &t, &x);
			if (n == 0)
				break;
			dp[t][x]++;
			if (maxt < t)
				maxt = t;
		}
		dp[1][0] = dp[1][1] = dp[1][2] = dp[1][3] = dp[1][7] = dp[1][8] = dp[1][9] = dp[1][10] = 0;
		dp[2][0] = dp[2][1] = dp[2][2] = dp[2][8] = dp[2][9] = dp[2][10] = 0;
		dp[3][0] = dp[3][1] = dp[3][9] = dp[3][10] = 0;
		dp[4][0] = dp[4][10] = 0;
		for (int j = maxt - 1; j >= 0; j--)
		{
			for (int k = 1; k <= 9; k++)
			{
				dp[j][k] = max(dp[j + 1][k - 1], dp[j + 1][k], dp[j + 1][k + 1]) + dp[j][k];
			}
			dp[j][0] = max(0, dp[j + 1][0], dp[j + 1][1]) + dp[j][0];
			dp[j][10] = max(dp[j + 1][10], dp[j + 1][9], 0) + dp[j][10];
		}
		printf("%d\n", dp[0][5]);
	}
}
int max(int a, int b, int c)
{
	int ret;
	if (a > b)
		ret = a;
	else
		ret = b;
	if (ret > c)
		return ret;
	else
		return c;
}
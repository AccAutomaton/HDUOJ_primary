#include <stdio.h>
#include <math.h>
int main()
{
	int m, n, x, y, i;
	while (scanf("%d%d", &m, &n) != EOF) {
		x = 0, y = 0;
		if (m < n) {
			for (i = m; i <= n; i++) {
				if (i % 2 == 0)x += i * i;
				else y += i * i * i;
			}
		}
		else if (m == n) {
			if (m % 2 != 0)x = 0, y = m * m * m;
			else x = m * m, y = 0;
		}
		else {
			for (i = m; i >= n; i--) {
				if (i % 2 == 0)x += i * i;
				else y += i * i * i;
			}
		}

		printf("%d %d\n", x, y);
	}
	return 0;
}

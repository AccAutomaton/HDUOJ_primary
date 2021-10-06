#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	long int A[101], B[101], n, m, temp, k;
	int ans[101];
	while (scanf("%d %d", &n, &m) != EOF && (n != 0 || m != 0))
	{
		bool flag = false;
		memset(A, 0, sizeof(A));
		memset(B, 0, sizeof(B));
		memset(ans, 0, sizeof(ans));
		for (int i = 0; i < n; i++)
			scanf("%ld", &A[i]);
		for (int i = 0; i < m; i++)
			scanf("%ld", &B[i]);
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (A[i] == B[j])
					A[i] = 3000000000;
			}
		}
		k = 0;
		for (int i = 0; i < n; i++)
		{
			if (A[i] != 3000000000)
			{
				ans[k] = A[i];
				k++;
				flag = true;
			}
		}
		if (flag == true)
		{
			for (int i = 0; i < k; i++)
			{
				for (int j = 0; j < k - i - 1; j++)
				{
					if (ans[j] > ans[j + 1])
					{
						temp = ans[j+ 1];
						ans[j + 1] = ans[j];
						ans[j] = temp;
					}
				}
			}
			for (int i = 0; i < k; i++)
			{
				printf("%d ", ans[i]);
			}
		}
		if (flag == false)
			printf("NULL");
		printf("\n");
	}
	return 0;
}
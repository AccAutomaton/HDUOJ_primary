#include <stdio.h>
int main(void)
{
	int T, A, B, tmp;
	while ((scanf("%d", &T)) != EOF)
	{
		while (T--)
		{
			scanf("%d %d", &A, &B);
			if (A > B)
			{
				tmp = B;
				B = A;
				A = tmp;
			}
			if (B % A == 0)
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
	return 0;

}
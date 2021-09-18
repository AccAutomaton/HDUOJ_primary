#include <stdio.h>
int main(void)
{
	int M;
	double A, B, C;
	while ((scanf("%d", &M)) != EOF)
	{
		for (int i = 0; i < M; i++)
		{
			scanf("%lf %lf %lf", &A, &B, &C);
			if (A + B > C && A + C > B && B + C > A)
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
	return 0;
}
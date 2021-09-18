#include <stdio.h>
int main(void)
{
	int AH, AM, AS, BH, BM, BS;
	int N;
	int H, M, S;
	while ((scanf("%d", &N)) != EOF)
	{
		for (int i = 0; i < N; i++)
		{
			scanf("%d %d %d %d %d %d", &AH, &AM, &AS, &BH, &BM, &BS);
			H = AH + BH;
			M = AM + BM;
			S = AS + BS;
			if (S >= 60)
			{
				S -= 60;
				M += 1;
			}
			if (M >= 60)
			{
				M -= 60;
				H += 1;
			}
			printf("%d %d %d\n", H, M, S);
		}
	}
	return 0;
}
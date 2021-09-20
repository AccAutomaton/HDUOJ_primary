#include <stdio.h>
int main(void)
{
	int n,N;
	char ch;
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++)
	{
		N = 0;
		for (;;)
		{
			ch = getchar();
			if (ch < 0)
				N++;
			if (ch == '\n')
				break;
		}
		printf("%d\n", N / 2);
	}
	return 0;
}
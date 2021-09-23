#include <stdio.h>
#define N 100
int main(void)
{
	char ch[N + 1];
	char max;
	int i;
	while ((scanf("%s", ch)) != EOF)
	{
		max = '\0';
		for (i = 0; ch[i]; i++)
			if (ch[i] > max)
				max = ch[i];
		for (i = 0; ch[i]; i++)
		{
			printf("%c", ch[i]);
			if (ch[i] == max)
				printf("(max)");
		}
		printf("\n");
	}
	return 0;
}
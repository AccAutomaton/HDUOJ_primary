#include <stdio.h>
int main(void)
{
	int n, i, c;
	char ch[10000];
	scanf("%d", &n);
	while (n--)
	{
		scanf("%s", ch);
		i = 0;
		while (ch[i++])
		{
			c = 1;
			while (ch[i] == ch[i - 1])
			{
				i++;
				c++;
			}
			if (c > 1)printf("%d%c", c, ch[i - 1]);
			else printf("%c", ch[i - 1]);
		}
		printf("\n");
	}
	return 0;
}
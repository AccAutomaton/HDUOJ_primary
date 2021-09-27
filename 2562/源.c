#include <stdio.h>
#include <string.h>
int main(void)
{
	int C, tmp;
	while ((scanf("%d", &C)) != EOF)
	{
		while (C--)
		{
			char ch[50];
			scanf("%s", ch);
			for (int i = 0; i < strlen(ch); i = i + 2)
			{
				tmp = ch[i];
				ch[i] = ch[i + 1];
				ch[i + 1] = tmp;
			}
			printf("%s\n", ch);
		}
	}
	return 0;
}
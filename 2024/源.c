#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[50];
	int n, len, i, flag;
	while (scanf("%d\n", &n) != EOF)
	{
		while (n--)
		{
			flag = 0;
			gets(a);
			len = strlen(a);
			for (i = 0; i < len; i++)
			{
				if (i == 0)
				{
					if (!(a[i] == '_' || (a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')))
					{
						flag = 1;
						break;
					}
				}
				else
				{
					if (!(a[i] == '_'|| (a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= '0' && a[i] <= '9')))
					{
						flag = 1;
						break;
					}
				}
			}
			if (flag == 1)
				printf("no\n");
			else printf("yes\n");
		}
	}
	return 0;
}
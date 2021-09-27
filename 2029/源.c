#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(void)
{
	int n, len;
	char ch1[1000], ch2[1000];
	bool flag;
	while ((scanf("%d", &n)) != EOF)
	{
		while (n--)
		{
			memset(ch1, 0, sizeof(ch1));
			memset(ch2, 0, sizeof(ch2));
			scanf("%s", ch1);
			len = strlen(ch1);
			for (int i1 = 0, i2 = len - 1; i2 >= 0; i1++, i2--)
			{
				ch2[i1] = ch1[i2];
			}
			for (int i = 0; i < len; i++)
			{
				if (ch1[i] == ch2[i])
					flag = true;
				else
				{
					flag = false;
					break;
				}
			}
			if (flag == true)
				printf("yes\n");
			else
				printf("no\n");
		}
	}
	return 0;
}
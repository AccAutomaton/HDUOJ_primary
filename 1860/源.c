#include<stdio.h>
#include<string.h>
int main(void)
{
	char str1[5];
	char str2[80];
	int i, j, len1, len2, count;
	while (gets(str1) && strcmp(str1, "#") != 0)
	{
		gets(str2);
		len1 = strlen(str1);
		len2 = strlen(str2);
		for (i = 0; i < len1; i++)
		{
			count = 0;
			for (j = 0; j < len2; j++)
			{
				if (str1[i] == str2[j])
				{
					count++;
				}
			}
			printf("%c %d\n", str1[i], count);
		}
	}
}
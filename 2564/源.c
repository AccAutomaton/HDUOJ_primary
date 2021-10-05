#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[120], c[12];
    int n, t, i, f, k;
    while (scanf("%d%*c", &n) != EOF)
    {
        while (n--)
        {
            gets(str);
            t = strlen(str);
            for (i = 0, f = k = 0; i < t; i++)
            {
                if (!f)
                {
                    if (str[i] >= 'a' && str[i] <= 'z')
                        c[k++] = str[i] - 32;
                    else if (str[i] >= 'A' && str[i] <= 'Z')
                        c[k++] = str[i];
                }
                if (str[i] != ' ')
                    f = 1;
                else if (i > 0 && str[i + 1] != ' ')
                    f = 0;

            }
            for (i = 0; i < k; i++)
                printf("%c", c[i]);
            printf("\n");

        }
    }
    return 0;
}
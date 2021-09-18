
#include<stdio.h>  
int main()
{
    int n, c, i;
    char a[1000];
    while (scanf("%d", &n) != EOF)
    {
        while (n--)
        {
            scanf("%s", a);
            c = 0;
            for (i = 0; a[i] != '\0'; i++)
            {
                if (a[i] >= '0' && a[i] <= '9')
                    c++;
            }
            printf("%d\n", c);
        }
    }

    return 0;
}

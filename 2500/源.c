#include<stdio.h>
int main(void)
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        for (int i = 1; i <= 3 * n; i++)
        {
            for (int j = 1; j <= n; j++)
                printf("HDU");
            printf("\n");
        }
    }
    return 0;
}
#include <stdio.h>

int main(void)
{
    int n, val[100 + 1], mini, i;

    while ((scanf("%d", &n) != EOF) && n != 0)
    {
        for (i = 0; i < n; i++)
            scanf("%d", &val[i]);

        mini = 0;
        for (i = 1; i < n; i++)
            if (val[i] < val[mini])
                mini = i;

        int temp = val[mini];
        val[mini] = val[0];
        val[0] = temp;

        for (i = 0; i < n; i++) {
            if (i != 0)
                printf(" ");
            printf("%d", val[i]);
        }
        printf("\n");
    }

    return 0;
}
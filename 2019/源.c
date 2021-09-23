#include <stdio.h>
int main(void)
{
    int n, m, a[102];
    while (scanf("%d %d", &n, &m) != EOF && m != 0 && n != 0)
    {
        for (int i = 0; i < n; ++i)
            scanf("%d", &a[i]);
        if (m < a[0])
        {
            for (int i = n - 1; i >= 0; --i)
                a[i + 1] = a[i];
            a[0] = m;
        }
        if (m > a[n - 1])
            a[n] = m;
        if (m >= a[0] && m <= a[n - 1])
        {
            for (int i = n - 1; i >= 0; --i)
                if (m >= a[i])
                {
                    for (int j = n - 1; j > i; --j)
                        a[j + 1] = a[j];
                    a[i + 1] = m;
                    break;
                }
        }
        printf("%d", a[0]);
        for (int i = 1; i <= n; ++i)
            printf(" %d", a[i]);
        printf("\n");
    }
    return 0;
}
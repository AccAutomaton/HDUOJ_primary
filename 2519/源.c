#include <stdio.h>
long long c(int n, int m)
{
    long long c;
    if (n < m)
        c = 0;
    else if (n == m || m == 0)
        c = 1;
    else 
    {
        c = 1;
        n = n - m + 1;
        for (int i = 1; i <= m; i++) 
        {
            c *= n++;
            c /= i;
        }
    }
    return c;
}
int main(void)
{
    int t, n, m;

    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &n, &m);
        printf("%lld\n", c(n, m));
    }
    return 0;
}
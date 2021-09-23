#include<stdio.h>
int main()
{
    int n;
    while (scanf("%d\n", &n) != EOF && n)
    {
        int i, a, b, c, d, e, f, s = 0;
        int k[1000];
        for (i = 0; i < n; i++)
            scanf("%d", &k[i]);
        for (i = 0; i < n; i++)
        {
            a = k[i] / 100;
            f = (k[i] - a * 100) / 50;
            b = (k[i] - a * 100 - f * 50) / 10;
            c = (k[i] - a * 100 - b * 10 - f * 50) / 5;
            d = (k[i] - a * 100 - b * 10 - c * 5 - f * 50) / 2;
            e = k[i] - a * 100 - b * 10 - c * 5 - d * 2 - f * 50;
            s = s + a + b + c + d + e + f;
        }
        printf("%d\n", s);
    }
    return 0;
}
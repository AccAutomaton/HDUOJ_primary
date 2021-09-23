#include<stdio.h>
int main()
{
    int n, i; 
    long long int a[21];
    while ((scanf("%d", &n))!=EOF)
    {
        a[0] = a[1] = 0;
        a[2] = 1;
        for (i = 3; i <= n; i++)
            a[i] = (i - 1) * (a[i - 1] + a[i - 2]);
        printf("%lld\n", a[n]);
    }
    return 0;
}
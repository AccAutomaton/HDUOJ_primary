#include<stdio.h>
int main()
{
    int c;
    scanf("%d", &c);
    while (c--)
    {
        int n, a, b, c, s;
        scanf("%d", &n);
        a = (n / 2 + 9) / 10;
        n = n - n / 2;
        b = (n * 2 / 3 + 9) / 10;
        n = n - n * 2 / 3;
        c = (n + 9) / 10;
        s = a + b + c;
        printf("%d\n", s);
    }
    return 0;
}
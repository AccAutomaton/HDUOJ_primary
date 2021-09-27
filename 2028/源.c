#include <stdio.h>
int gcd(int a, int b);
int main(void)
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int a, ans = 1, i;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a);
            ans = gcd(a, ans);
        }
        printf("%d\n", ans);
    }
    return 0;
}
int gcd(int a, int b)
{
    int temp, ans, c = a, d = b;
    if (c < d)
    {
        temp = c; 
        c = d; 
        d = temp;
    }
    while (d != 0)
    {
        temp = c % d; 
        c = d; 
        d = temp;   //求最大公约数
    }
    ans = (a / c) * b;   // 最小公倍数等于两数之积除以其最大公约数 && a*b可能超出int的范围
    return ans;
}
/*       假设将n层塔从A经B挪到C需要f[n]步。那么具体的移动过程可以这样看：将上面n-1层从A经B挪到C需要f[n-1]步，再将第n层从A挪到B，需要一步，
         再将上n-1层从C经B挪到A，需要f[n-1]步，再将第n层从B挪到C，需要一步，再将上n-1层从A经B挪到C，需要f[n-1]步，总计3*f[n-1] + 2步，其中 f[1] = 2
*/
#include <stdio.h>
void f(void);
long long int fx[65];
int main(void)
{
    int n;
    f();
    while ((scanf("%d", &n)) != EOF)
    {
        printf("%lld\n", fx[n]);
    }
    return 0;
}
void f(void)
{
    fx[1] = 2;
    for (int i = 2; i < 65; i++)
        fx[i] = 3 * fx[i - 1] + 2;
}
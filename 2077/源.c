/*         假设现在有n块盘  要将其从A盘通过B盘搬到C盘   只需将上面的（n-2）块盘先从A柱通过B柱搬到C柱    再将第n-1块盘搬到B柱上  又因为第n块最大有特权可以放在第(n-1)块上面 
           之后的思路就跟2064那题一样 就是将C柱子上的n-2块盘一并搬到A柱上 再将B柱上的倒着放的第n-1块和第n块搬到C竹子上
           由此可见   上面的n-2块  一共搬动整体移动3次  下面的第n块和第n-1块只需搬动4次
           ss[n]=3*as[n-2]+4;  
           as[i]保存的是n个没有特权的盘子移动的最优次数
*/
#include <stdio.h>
void f(void);
long long int fx[65], fxx[65];
int main(void)
{
    int n, N;
    f();
    while ((scanf("%d", &N) != EOF))
    {
        while (N--)
        {
            scanf("%d", &n);
            printf("%lld\n", fxx[n]);
        }
    }
    return 0;
}
void f(void)
{
    fx[1] = 2;
    for (int i = 2; i < 65; i++)
        fx[i] = 3 * fx[i - 1] + 2;
    fxx[1] = 2;
    for (int i = 2; i < 65; i++)
        fxx[i] = 3 * fx[i - 2] + 4;
}
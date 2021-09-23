#include <stdio.h>
#include <math.h>
int main()
{
    int m, n, a[50][50];
    while (scanf("%d%d", &m, &n) != EOF)
    {
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                scanf("%d", &a[i][j]);
        int indexi = 0, indexj = 0;
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                if (abs(a[i][j]) > abs(a[indexi][indexj])) 
                {
                    indexi = i;
                    indexj = j;
                }
        printf("%d %d %d\n", indexi + 1, indexj + 1, a[indexi][indexj]);
    }
    return 0;
}
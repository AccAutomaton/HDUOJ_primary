#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    while (scanf("%d", &n) != EOF && n)
    {
        int i, j, t, a[1000];
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (i = 0; i < n; i++)
        {
            for (j = i; j < n; j++)
            {
                if (fabs(a[i]) < fabs(a[j]))
                {
                    t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
            }
            if (i > 0)printf(" ");
            printf("%d", a[i]);
        }
        printf("\n");
    }
    return 0;
}
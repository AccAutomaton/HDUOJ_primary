#include <stdio.h>

int main() {
    int n, sum, a, i;
    while (scanf("%d", &n) != EOF)
        if (n == 0)
            break;
        else
        {
            sum = 0;
            for (i = 0; i < n; i++)
            {
                scanf("%d", &a);
                sum = sum + a;
            }
            printf("%d\n", sum);
        }
    return 0;
}
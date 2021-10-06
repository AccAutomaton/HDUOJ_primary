#include <stdio.h>
int main(void) 
{
    int x, y;
    while (scanf("%d%d", &x, &y)!=EOF&&(x!=0||y!=0) )
    {
        if (x == 0 && y == 0)
        {
            break;
        }
        int i;
        for (i = -20000; i < 20000; i++) 
        {
            if (i * (x - i) == y)
            {
                printf("Yes\n");
                break;
            }
        }
        if (i == 20000) {
            printf("No\n");
        }
    }
    return 0;
}

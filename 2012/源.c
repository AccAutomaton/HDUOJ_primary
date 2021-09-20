#include <stdio.h>
int main()
{
    int x, y, temp, flag;
    while (scanf("%d%d", &x, &y) != EOF && (x != 0 || y != 0))
    {
        flag = 0;
        for (int i = x; i <= y; i++)
        {
            temp = i * i + i + 41;
            for (int j = 2; j < temp; j++)
            {
                if (temp % j == 0)
                    flag += 1;
            }
        }
        if (flag == 0)
            printf("OK\n");
        else
            printf("Sorry\n");
    }
    return 0;
}
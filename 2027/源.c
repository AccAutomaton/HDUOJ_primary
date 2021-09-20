#include<stdio.h>
#include<string.h>
int main()
{
    char b[100];
    int i, j, n;
    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++)
    {
        int a[5] = { 0 };
        if (i > 0)
            printf("\n");
        gets(b);
        for (j = 0; j < strlen(b); j++) 
        {
            if (b[j] == 'a')
                a[0]++;
            if (b[j] == 'e')
                a[1]++;
            if (b[j] == 'i')
                a[2]++;
            if (b[j] == 'o')
                a[3]++;
            if (b[j] == 'u')
                a[4]++;
        }
        printf("a:%d\n", a[0]);
        printf("e:%d\n", a[1]);
        printf("i:%d\n", a[2]);
        printf("o:%d\n", a[3]);
        printf("u:%d\n", a[4]);
    }
    return 0;
}
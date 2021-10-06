#include<stdio.h>
#include<string.h>
int main(void)
{
    char s1[200000], s2[200000];
    int l1, l2, i;
    while (gets(s1))
    {
        gets(s2);
        l1 = strlen(s1);
        l2 = strlen(s2);
        if (l1 < l2) 
            printf("no\n");
        else
        {
            for (i = 0; i < l1; i++)
                s1[l1 + i] = s1[i];
            s1[2 * l1] = '\0';
            if (strstr(s1, s2))
                printf("yes\n");
            else
                printf("no\n");
        }
    }
    return 0;
}
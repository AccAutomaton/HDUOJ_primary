#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char a[100];
    while (gets(a) != NULL)
    {
        int len, i;
        len = strlen(a);
        a[0] = toupper(a[0]);
        for (i = 1; i < len; i++)
        {
            if (a[i] == ' ')
                a[i + 1] = toupper(a[i + 1]);
        }
        puts(a);
    }
    return 0;
}
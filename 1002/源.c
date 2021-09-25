#include<stdio.h>
#include<string.h>
int main(void)
{
    int n, count = 1;
    while (scanf("%d", &n) != EOF)
    {
        while (n--)
        {
            char s1[1005], s2[1005], s4[1005], s5[1005];
            int s3[1005] = { 0 };
            int l1, l2, len, max;
            scanf("%s%s", s1, s2);
            strcpy(s4, s1);
            strcpy(s5, s2);

            l1 = strlen(s1);
            l2 = strlen(s2);

            if (l1 > l2)
            {
                len = l1;
                for (int i = l2 - 1; i >= 0; i--) 
                {
                    s2[i + l1 - l2] = s2[i];
                }
                for (int i = 0; i < l1 - l2; i++) 
                {
                    s2[i] = '0';
                }
            }
            else if (l1 < l2) 
            {
                len = l2;
                for (int i = l1 - 1; i >= 0; i--) 
                {
                    s1[i + l2 - l1] = s1[i];
                }
                for (int i = 0; i < l2 - l1; i++) 
                {
                    s1[i] = '0';
                }
            }
            else
            {
                len = l1;
            }
            max = len;
            int flag = 0;
            for (int i = len - 1; i >= 0; i--)
            {
                if (flag) 
                {
                    if ((s1[i] - '0') + (s2[i] - '0') + 1 > 9)
                    {
                        flag = 1;
                        s3[--len] = ((s1[i] - '0') + (s2[i] - '0') + 1) % 10;
                    }
                    else 
                    {
                        flag = 0;
                        s3[--len] = (s1[i] - '0') + (s2[i] - '0') + 1;
                    }
                }
                else {
                    if ((s1[i] - '0') + (s2[i] - '0') > 9) 
                    {
                        flag = 1;
                        s3[--len] = ((s1[i] - '0') + (s2[i] - '0')) % 10;
                    }
                    else 
                    {
                        flag = 0;
                        s3[--len] = (s1[i] - '0') + (s2[i] - '0');
                    }
                }
            }

            if (flag)
            {
                printf("Case %d:\n%s + %s = 1", count++, s4, s5);

            }
            else 
            {
                printf("Case %d:\n%s + %s = ", count++, s4, s5);
            }
            for (int i = 0; i < max; i++) 
            {
                printf("%d", s3[i]);
            }
            if (n == 0) 
            {
                printf("\n");
            }
            else 
            {
                printf("\n\n");
            }
        }
    }
    return 0;
}
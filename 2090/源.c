#include <stdio.h>
int main(void)
{
    double sum = 0, a, b;
    char s[100];
    while (scanf("%s %lf %lf", s, &a, &b) != EOF)
        sum = a * b + sum;
    printf("%.1lf\n", sum);
}
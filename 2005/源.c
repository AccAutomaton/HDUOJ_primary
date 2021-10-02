#include <stdio.h>
int leapyear_day(int year, int month)
{
    if (month <= 2)
        return 0;
    else
        return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) ? 1 : 0;
}
int main(void)
{
    int year, month, day;
    int days;
    int monthsum[] = {
          0                                 // 1
        , 31                                // 2
        , 31 + 28                             // 3
        , 31 + 28 + 31                          // 4
        , 31 + 28 + 31 + 30                       // 5
        , 31 + 28 + 31 + 30 + 31                    // 6
        , 31 + 28 + 31 + 30 + 31 + 30                 // 7
        , 31 + 28 + 31 + 30 + 31 + 30 + 31              // 8
        , 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31           // 9
        , 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30        // 10
        , 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31     // 11
        , 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30  // 12
    };

    while (scanf("%d/%d/%d", &year, &month, &day) != EOF) 
    {
        days = leapyear_day(year, month) + monthsum[month - 1] + day;
        printf("%d\n", days);
    }
    return 0;
}
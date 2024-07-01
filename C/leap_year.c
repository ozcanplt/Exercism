#include "leap.h"
#include <stdio.h>
bool leap_year(int year)
{    
    bool LEAP_YEAR = false;
    if ((year % 100 == 0)&&(year % 400 != 0))
    {
        printf("%d is not a leap year", year);
    }
    else if (year % 4 != 0)
    {
        printf("%d is not a leap year", year);
    }
    else
    {
        printf("%d is a leap year", year);
        LEAP_YEAR = true;
    }
    return LEAP_YEAR;
}

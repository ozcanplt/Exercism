#include "space_age.h"
#include <stdio.h>
float age(planet_t planet, int64_t seconds)
{
    float space_age;
    int64_t earth_seconds = 31557600;
    switch (planet)
    {
        case 0:
            space_age = seconds/(earth_seconds*0.2408467);
            return space_age;
            break;
        case 1:
            space_age = seconds/(earth_seconds*0.61519726);
            return space_age;
            break;
        case 2:
            space_age = seconds/(earth_seconds*1.0);
            return space_age;
            break;
        case 3:
            space_age = seconds/(earth_seconds*1.8808158);
            return space_age;
            break;
        case 4:
            space_age = seconds/(earth_seconds*11.862615);
            return space_age;
            break;
        case 5:
            space_age = seconds/(earth_seconds*29.447498);
            return space_age;
            break;
        case 6:
            space_age = seconds/(earth_seconds*84.016846);
            return space_age;
            break;
        case 7:
            space_age = seconds/(earth_seconds*164.79132);
            return space_age;
            break;
        default:
            return -1;
    }
}

#include "resistor_color_duo.h"
#include <stdio.h>
int color_code(resistor_band_t bands[static 2])
{
    return (bands[0]*10 + bands[1]);
}

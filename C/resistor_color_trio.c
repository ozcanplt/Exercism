#include "resistor_color_trio.h"
#include <stdio.h>
resistor_value_t color_code(resistor_band_t bands[static 3])
{
    resistor_value_t result;
    uint64_t value = (bands[0]*10 + bands[1]);
    uint32_t multiplier = 1;
    for (resistor_band_t i = 0; i < bands[2]; i++)
    {
        multiplier *= 10;
    }
    value *= multiplier;
    resistor_units_t unit = OHMS;
    while (value >= 1000 && unit < GIGAOHMS) 
    {
        value /= 1000;
        unit++;
    } 
    result.value = value;
    result.unit = unit;
    return result;
}

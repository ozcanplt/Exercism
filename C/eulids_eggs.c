#include "eliuds_eggs.h"
#include <stdio.h>
int egg_count(int decimal_input)
{
    int binary_number = 0;
    while (decimal_input > 0)
    {
        binary_number += decimal_input % 2;
        //binary_number << 1;
        decimal_input = decimal_input / 2;
    }
    return binary_number;
}

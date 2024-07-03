#include "grains.h"
#include <stdio.h>
#include <math.h>
uint64_t square(uint8_t index)
{
    if ((index <= 0)&&(index > 64))
    {
        return 0;
    }
    else
    {
        uint64_t number_of_grains = pow(2,index - 1);
        return number_of_grains;
    }    
}
uint64_t total(void)
{    
    uint64_t total_sum = 0;
    for(int i=0; i<=64; i++)
    {
        total_sum = total_sum + square(i);
    }
    return total_sum;
}

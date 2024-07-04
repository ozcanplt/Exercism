#include "binary.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
int convert(const char *input)
{
    int power = strlen(input) - 1;
    int decimal_number = 0;
    //int *decimal_number = (int*)malloc(strlen(input));
    for(size_t i = 0;i < strlen(input); i++)
    {   
        int binary_digit = input[i] - 48;
        if (!((binary_digit == 1)||(binary_digit == 0)))
        {
            return INVALID;
        }
        else
        {
            decimal_number += binary_digit * pow(2,power);
            power--;
            //printf("%d\n",decimal_number);
        }
    }
    return decimal_number;
}

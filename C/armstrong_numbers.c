#include "armstrong_numbers.h"
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
bool is_armstrong_number(int candidate)
{   
    int power = (candidate == 0 ? 1 : floor(log10(abs(candidate))) + 1);
    int ans = 0;
    int a_candidate = candidate;
    for (int i = 0; i < power; i++)
    {
        ans += pow(a_candidate % 10,power);
        a_candidate = a_candidate / 10;
    }
    if (ans == candidate)
    {
        return true;
    }
    else
    {
        return false;
    }
}

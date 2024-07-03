#include "collatz_conjecture.h"
#include <stdio.h>
int steps(int start)
{
    int n = 0;
    if (start <= 0)
    {
        return -1;
    }
    else
    {
        while (start != 1)
        {
            if (start % 2 == 0)
            {
                start = start/2;
                n++;
            }
            else
            {
                start = start*3 + 1;
                n++;
            }
        }
    }
    
    return n;
}

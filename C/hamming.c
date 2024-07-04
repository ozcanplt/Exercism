#include "hamming.h"
#include <stdio.h>
#include <string.h>
int compute(const char *lhs, const char *rhs)
{   
    int hamming_difference = 0;
    if (strlen(lhs) == strlen(rhs))
    {
        while (*lhs)
        {
            if (!(*lhs == *rhs))
            {
                hamming_difference++;
            }
            else
            {
                ;
            }
        
        lhs++;  
        rhs++;
        }
    }
    else
    {
        return -1;
    }
    return hamming_difference;
    
}

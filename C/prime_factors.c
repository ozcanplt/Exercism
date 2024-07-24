#include <stdint.h>
#include <stddef.h>
#include <stdio.h>

#define MAXFACTORS 10

size_t find_factors(uint64_t n, uint64_t factors[static MAXFACTORS])
{
    size_t factor_count = 0;

    if ( (int64_t)n <= 1 ) return 0;
    
    for (uint64_t i = 2; n > 1; i++) 
    {
        while (n % i == 0) 
        {
            if (factor_count < MAXFACTORS)
            {
                factors[factor_count] = i;
                factor_count++;
            }
            n /= i;
        }
    }
    return factor_count;
}

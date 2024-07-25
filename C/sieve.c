#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

uint32_t sieve(uint32_t limit, uint32_t *primes, size_t max_primes)
{
    bool numbers[limit - 1];
    for (int i = 0; i < limit - 1; i++) 
    {
        numbers[i] = false;
    }

    uint32_t count = 0;
    for (uint32_t i = 2; i <= limit && count < max_primes; i++) 
    {
        if (!numbers[i - 2]) 
        {
            primes[count++] = i;
            for (uint32_t j = i * i; j <= limit; j += i) 
            {
                numbers[j - 2] = true;
            }
        }
    }
    return count;
}

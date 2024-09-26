#include <stdint.h>

uint64_t square_root(uint64_t n)
{
    uint64_t x0 = n >> 1;
    if (x0)
    {
        uint64_t x1 = (x0 + n/x0) >> 1;
        while (x1 < x0)
        {
            x0 = x1;
            x1 = (x0 + n/x0) >> 1;
        }
        return x0;
    }
    return n;
}

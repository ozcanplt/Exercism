#include <stddef.h>
#include <stdlib.h>
#define NUM_OF_ELEMENTS(a) (sizeof(a) / sizeof(a[0]))
unsigned int sum(const unsigned int *factors, 
                 const size_t number_of_factors, 
                 const unsigned int limit)
{
    if (limit <= 1) return 0;

    unsigned char *marked = calloc(limit - 1, sizeof(unsigned char));
    if (!marked) return 0;

    for (size_t j = 0; j < number_of_factors; j++)
    {
        if (factors[j] == 0) continue;  // Skip factor 0
        for (unsigned int i = factors[j]; i < limit; i += factors[j])
        {   
            marked[i - 1] = 1;
        }
    }

    unsigned int sum = 0;
    for (unsigned int i = 0; i < limit - 1; i++)
    {
        if (marked[i])
        {
            sum += i + 1;
        }
    }

    free(marked);
    return sum;
}

int main(void)
{
    const unsigned int factors[] = {3, 0};
    sum(factors, NUM_OF_ELEMENTS(factors), 12);
    return 0;
}

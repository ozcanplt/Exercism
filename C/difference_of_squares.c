#include "difference_of_squares.h"
#include <stdio.h>
unsigned int square_of_sum(unsigned int number)
{
    unsigned int sum = 0;  // Initialize sum
    unsigned int sq_of_sum = 0;  // Initialize sq_of_sum
    for(unsigned int i = 1; i <= number; i++)
    {
        sum = sum + i;
    }
    sq_of_sum = sum * sum;  // Compute the square of the sum outside the loop
    return sq_of_sum;    
}
unsigned int sum_of_squares(unsigned int number)
{
    unsigned int sum_of_sq = 0;  // Initialize sum_of_sq
    for(unsigned int j = 1; j <= number; j++)
    {
        sum_of_sq = sum_of_sq + (j * j);
    }
    return sum_of_sq;
}
unsigned int difference_of_squares(unsigned int number)
{    
    unsigned int difference;
    difference = square_of_sum(number) - sum_of_squares(number);
    return difference;
}

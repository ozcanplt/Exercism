#include "triangle.h"
#include <stdbool.h>
bool is_valid_triangle(triangle_t sides) 
{
    // Check for positive side lengths
    if (sides.a <= 0 || sides.b <= 0 || sides.c <= 0) 
    {
        return false;
    }
    
    // Check the triangle inequality theorem
    if ((sides.a + sides.b >= sides.c) && 
        (sides.a + sides.c >= sides.b) && 
        (sides.b + sides.c >= sides.a)) 
    {
        return true;
    } 
    else 
    {
        return false;
    }
}
bool is_equilateral(triangle_t sides)
{
    if (!is_valid_triangle(sides))
    {
        return false;
    }
    return (sides.a == sides.b && sides.b == sides.c);
}
bool is_isosceles(triangle_t sides)
{
    if (!is_valid_triangle(sides))
    {
        return false;
    }
    return ((sides.a == sides.b)||(sides.a == sides.c)||(sides.c == sides.b));
}
bool is_scalene(triangle_t sides)
{
    if (!is_valid_triangle(sides))
    {
        return false;
    }
    return (!((sides.a == sides.b)||(sides.a == sides.c)||(sides.c == sides.b)));
}

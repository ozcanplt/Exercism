#include "complex_numbers.h"
#include <math.h>
complex_t c_add(complex_t a, complex_t b)
{
    complex_t a_plus_b = {(a.real + b.real), (a.imag + b.imag)};
    return a_plus_b;
}
complex_t c_sub(complex_t a, complex_t b)
{
    complex_t a_sub_b = {(a.real - b.real), (a.imag - b.imag)};
    return a_sub_b;
}
complex_t c_mul(complex_t a, complex_t b)
{
   // (a * c - b * d) + (b * c + a * d) * i
   // A = a + bi, B = c + di
   complex_t a_mul_b = {(a.real * b.real - a.imag * b.imag),
                        (a.imag * b.real + a.real * b.imag)};
   return a_mul_b;
}
complex_t c_div(complex_t a, complex_t b)
{
   // (a * c + b * d)/(c^2 + d^2) + (b * c - a * d)/(c^2 + d^2) * i
   // (a + i * b) / (c + i * d)
   complex_t a_div_b = {(a.real * b.real + a.imag * b.imag)/(pow(b.real, 2) + pow(b.imag, 2)),
                        (a.imag * b.real - a.real * b.imag)/(pow(b.real, 2) + pow(b.imag, 2))};
    return a_div_b;
}
double c_abs(complex_t x)
{
   // sqrt(a^2 + b^2)
   return sqrt(pow(x.real, 2) + pow(x.imag, 2));
}
complex_t c_conjugate(complex_t x)
{
    complex_t conj_x = {x.real, -x.imag};
    return conj_x;
}
double c_real(complex_t x)
{
    return x.real;
}
double c_imag(complex_t x)
{
    return x.imag;
}
complex_t c_exp(complex_t x)
{
    // e^(a + bi) = e^a * (cos(b) + i * sin(b))
    complex_t x_exp = {exp(x.real) * cos(x.imag), exp(x.real)*sin(x.imag)};
    return x_exp;
}

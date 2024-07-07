#include "luhn.h"
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
bool luhn(const char *num)
{
    int len = strlen(num);
    if (len <= 1) return false;
    int digit_count = 0;
    for (int i = 0; i < len; i++)
    {
        if (isdigit(num[i]))
        {
            digit_count++;
        }
        else if (num[i] != ' ')
        {
            return false;
        }
    }
    if (digit_count <= 1) return false;
    char *stripped = malloc(digit_count + 1);
    int j = 0;
    for (int i = 0; i < len; i++) 
    {
        if (isdigit(num[i])) 
        {
            stripped[j++] = num[i];
        }
    }
    stripped[j] = '\0';
    int sum = 0;
    for (int i = digit_count - 1; i >= 0; i--)
    {
        int digit = stripped[i] - '0';
        if ((digit_count - i) % 2 == 0)
        {
            digit *= 2;
            if (digit > 9)
                digit -= 9;
        }
        sum += digit;
    }
    free(stripped);
    if (sum % 10 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

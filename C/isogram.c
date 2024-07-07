#include "isogram.h"
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
bool is_isogram(const char phrase[])
{
    int alphabet[26] = {0};
    int index;
    if (phrase == NULL)
    {
        return false;
    }
    for (int i = 0; phrase[i] != '\0'; i++) 
    {
        if (isalpha(phrase[i])) 
        {
            index = tolower((unsigned char)phrase[i]) - 'a';
            if (index >= 0 && index < 26) 
            {
                alphabet[index] += 1;
            }
        }
    }
    for (int i = 0; i < 26; i++) {
        if (alphabet[i] >= 2) 
        {
            return false;
        }
    }
    return true;
}

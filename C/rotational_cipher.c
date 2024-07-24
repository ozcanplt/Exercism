#include <ctype.h>
#include <string.h>
#include <stdlib.h>

char *rotate(const char *text, int shift_key)
{
    int length = strlen(text);
    char *result = malloc(length + 1);  // +1 for null terminator
    
    if (result == NULL) {
        return NULL;  // Memory allocation failed
    }

    for (int i = 0; i < length; i++)
    {
        if (isalpha(text[i]))
        {
            char base = isupper(text[i]) ? 'A' : 'a';
            result[i] = (text[i] - base + shift_key) % 26 + base;
        }
        else
        {
            result[i] = text[i];
        }
    }
    
    result[length] = '\0';  // Null-terminate the string
    return result;
}

#include "pangram.h"
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
bool is_pangram(const char *sentence)
{   
    bool alphabet[26] = {false};
    int index;
    
    if (sentence == NULL)
    {
        return false;
    }
    // Iterate over each character in the sentence
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (isalpha(sentence[i])) {
            index = tolower((unsigned char)sentence[i]) - 'a';
            // Debug statement to check the character and its index
            printf("Character: %c, Index: %d\n", sentence[i], index);
            if (index >= 0 && index < 26) {
                alphabet[index] = true;
            }
        }
    }
    
    // Check if all letters are present
    for (int i = 0; i < 26; i++) {
        if (!alphabet[i]) {
            return false;
        }
    }
    return true;
}

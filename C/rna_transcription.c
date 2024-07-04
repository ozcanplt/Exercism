#include "rna_transcription.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *to_rna(const char *dna)
{
    if (dna == NULL) //checking if valid argument is given
    {
        return NULL;
    }
    size_t length = strlen(dna);
    char* rna = (char*)malloc(length + 1); //allocating memory with size of the dna
    if (rna == NULL)
    {
        return NULL; // memory allocation failed
    }
    for (size_t i = 0; i < length; i++) //looping through the length of the dna string
    {
        switch (dna[i])
        {
        case 'C':
            rna[i] = 'G';
            break;
        case 'G':
            rna[i] = 'C';
            break;
        case 'T':
            rna[i] = 'A';
            break;
        case 'A':
            rna[i] = 'U';
            break;
        
        default:
            break;
        }
    }
    rna[length] = '\0';
    return rna;                                 
}

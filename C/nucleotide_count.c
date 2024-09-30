#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *count(const char *dna_strand)
{
    int a = 0;
    int c = 0;
    int g = 0;
    int t = 0;
    int len = strlen(dna_strand);

    for (int i = 0; i < len; i++)
    {
        switch (dna_strand[i])
        {
            case 'A': a++; break;
            case 'C': c++; break;
            case 'G': g++; break;
            case 'T': t++; break;
        default:
        {
            char *invalid = malloc(1);
            if (invalid) *invalid = '\0';
            return invalid;
        }    
        }
    }
    
    char *counts = calloc(20,sizeof(char));
    if (!counts)
    {
        printf("Memory Allocation Failed!");
        return NULL;
    }
    sprintf(counts, "A:%d C:%d G:%d T:%d",a,c,g,t);

    return counts;
}

int main()
{
    printf("%s",count("ACGTAGGATACCATTAG"));
    return 0;
}

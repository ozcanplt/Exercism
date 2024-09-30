#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *reverse(const char *value)
{
    size_t length = strlen(value);
    char *r_string = (char*)malloc(sizeof(char)*length+1);
    if (!r_string)
    {
        printf("Memory allocation error!");
        return NULL;
    }

    int n = 0;
    int i = length-1;
    while (value[n] != '\0')
    {
        r_string[n] = value[i];
        n++; i--;
    }
    r_string[n] = '\0';

    return r_string;
}

int main()
{
    printf("%s",reverse("racecar"));
    return 0;
}

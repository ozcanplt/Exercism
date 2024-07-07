#include "binary_search.h"
#include <stdio.h>
#include <stddef.h>
const int *binary_search(int value, const int *arr, size_t length)
{   
    int start = 0;
    int end = length - 1;
    while (start <= end)
    {
        int middle = start + (end - start) / 2;
        if(arr[middle] == value)
        {
            return arr + middle;
        }
        else if(arr[middle] < value)
        {
            start = middle + 1;
        }
        else if(arr[middle] > value)
        {
            end = middle - 1;
        }
    }
    return NULL;
}

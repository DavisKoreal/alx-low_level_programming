#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int *array_range(int min, int max)

{
    
    int * return_pointer;
    int * return_iterator_pointer;
    int iterator;
    int arraysize;
    
    if(min > max )
    {
        return_pointer = NULL;
        return return_pointer;
    }

    arraysize = ((max - min) + 1);
    return_pointer = malloc(arraysize * 4);

    if(return_pointer == NULL)
    {
        return_pointer = NULL;
        return return_pointer;
    }

    return_iterator_pointer = return_pointer;
    iterator = min;
    while (iterator <= max)
    {
        *return_iterator_pointer = iterator;
        iterator ++;
        return_iterator_pointer ++;
    }

    *return_iterator_pointer = '\0';

    return return_pointer;

}
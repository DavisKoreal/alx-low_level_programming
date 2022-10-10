#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - returns pointer to allocated location 
 * 
 *  b - the size of the storage 
 *  void* - returns a void pointer
 */

void * malloc_checked(unsigned int b)
{
    void *result = malloc(b);
    
    if(result == NULL)
    {
        return (NULL);
    }

    if (b == 0)
    {
        return (NULL);
    }

    return result;

}
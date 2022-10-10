#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - returns pointer to allocated location 
 * 
 *  b - the size of the storage 
 *  void* - returns a void pointer
 */

void *malloc_checked(unsigned int b)
{
    void *result = malloc(b);
    int trials = 1;
    while((result == NULL)&&(trials < 10))
    {
        result = malloc(b);
    }
    if((b ==0) || (b < 0)) 
    {
        return (NULL);
    }
    return result;

}
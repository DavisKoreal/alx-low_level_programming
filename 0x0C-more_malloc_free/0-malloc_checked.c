#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes in memory to allocate
 * Return: pointer to allocated memory(Success), 98 on failure
 */

void * malloc_checked(unsigned int b)
{
    void *pointer = malloc(b);
    
    if(pointer == NULL)
    {
        return (98);
    }

    if (b == 0)
    {
        return (98);
    }

    return pointer;

}
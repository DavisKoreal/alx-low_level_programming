#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *array_range - function that creates and array
 *@ min: minimum number
 *@ max: maximum number
 *Return: pointer to start of array 
*/
int * array_range(int min, int max)
{
    int* return_pointer;
    int* array_iteration_pointer;
    int i;
    int sizeofint;

    if (min > max)
    {
        return (NULL);
    }
    else 
    {
        printf("Min is greater than max \n");
    }

    sizeofint = sizeof(int);
    return_pointer = malloc(((max - min) + 1) * sizeofint);

    if(return_pointer == NULL)
    {
        return (NULL);
    }
    else
    {
        printf("The return pointer is not null\n");
    }
    array_iteration_pointer = return_pointer;

    i = 0;
    
    while( i < (max + 1))
    {
        *array_iteration_pointer = i;
        array_iteration_pointer += sizeofint;
        i++;
    }

    return return_pointer;
}
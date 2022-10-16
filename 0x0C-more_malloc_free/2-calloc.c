#include <stdlib.h>
#include <stdio.h>

/*
 * string_nconcat - concatenates two strings
 * s1 - string number one
 * s2 - string number two
 * n = number of characters to be concatenated to first string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{ 
    /*
     * declaration of variables
     */

    char * return_pointer;
    char * return_iteration_pointer;
    unsigned int array_iteration_counter;

    return_pointer = malloc( nmemb * size);

    if(return_pointer == NULL)
    {
        return return_pointer;
    }

    else
    {
        return_iteration_pointer = return_pointer;

        array_iteration_counter = 0;

        while(array_iteration_counter < nmemb)
        {
            *return_iteration_pointer = 0;
            return_iteration_pointer += size;

            array_iteration_counter ++;
        }

        *return_iteration_pointer = '\0'; 
        
        return (return_pointer);
    }
}

#include <stdlib.h>
#include <stdio.h>

/*
 * string_nconcat - concatenates two strings
 * s1 - string number one
 * s2 - string number two
 * n = number of characters to be concatenated to first string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{ 

    char * first_iteration_address;
    char * second_iteration_address;
    unsigned int sizeoffirststring;
    unsigned int sizeofsecondstring;
    int sizeofreturnstring;
    char * return_string_pointer;
    char * return_iteration_pointer;
    unsigned int second_string_counter;


    second_iteration_address = s2;
    first_iteration_address = s1;

    sizeoffirststring = 0;
    while((*first_iteration_address) != '\0')
    {
        sizeoffirststring++;
        first_iteration_address += 1;
    }

    sizeofsecondstring = 0;
    while((*second_iteration_address) != '\0')
    {
        sizeofsecondstring++;
        second_iteration_address += 1;
    }

    sizeofreturnstring = 0;
    if((n >= sizeofsecondstring) || (n == sizeofsecondstring))
    {
        sizeofreturnstring = sizeoffirststring + sizeofreturnstring;
    }
    else
    {
        sizeofreturnstring = sizeoffirststring + n;
    }

    return_string_pointer = malloc(sizeofreturnstring);
    return_iteration_pointer = return_string_pointer;
    first_iteration_address = s1;
    second_iteration_address = s2;

    while( *first_iteration_address != '\0')
    {
        (*return_iteration_pointer) = (*first_iteration_address);
        first_iteration_address += 1;
        return_iteration_pointer += 1;
    }

    second_string_counter = 0;
    while(second_string_counter < n )
    {
        (*return_iteration_pointer) = (*second_iteration_address);
        second_iteration_address += 1;
        return_iteration_pointer += 1;
        second_string_counter += 1;
    }

    *return_iteration_pointer = '\0';

    return (return_string_pointer);
}

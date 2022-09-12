#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - prints lowercase alphabets in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    for (int letter = 'z'; letter >= 'a'; letter--)
        putchar(letter);
    
        
    putchar('\n');

return (0);
}
#include <stdio.h>

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
void lowercaseAlphabets()
{
   for (int c = 97; c <= 122; ++c)
        printf("%c ", c);
    printf("\n");
}

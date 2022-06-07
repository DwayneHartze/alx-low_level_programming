#include <stdio.h>

/**
 * main - Prints alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main()
{
    for(int x = 'a'; x <= 'z'; x++)
    {
        x = tolower(x);
        putchar(x);
    }
    return 0;
}

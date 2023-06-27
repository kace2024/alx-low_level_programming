#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: The input string
 */
void print_rev(char *s)
{
    if (s == NULL)
        return;

    int length = strlen(s);

    for (int i = length - 1; i >= 0; i--)
    {
        putchar(s[i]);
    }

    putchar('\n');
}

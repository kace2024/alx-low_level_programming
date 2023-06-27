#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The input string
 */
void rev_string(char *s)
{
    if (s == NULL)
        return;

    int length = strlen(s);
    int i, j;
    char temp;

    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

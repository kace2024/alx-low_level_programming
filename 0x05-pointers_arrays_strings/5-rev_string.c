#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The input string
 */
void rev_string(char *s)
{
    if (s == NULL)
        return;

    int len = 0;
    int i, j;
    char tmp;

    while (s[len] != '\0')
    {
        len++;
    }

    j = len - 1;

    for (i = 0; i < len / 2; i++)
    {
        tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
        j--;
    }
}

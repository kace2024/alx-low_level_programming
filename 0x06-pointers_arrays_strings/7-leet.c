#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: Pointer to the string.
 *
 * Return: Pointer to the resulting string.
 */
char *leet(char *s)
{
        char a[] = "aAeEoOtTlL";
        char n[] = "4433007711";
        int i = 0;
        int j;

        while (*(s + i) != '\0')
        {
                for (j = 0; j <= 9; j++)
                {
                        if (*(s + i) == a[j])
                        {
                                *(s + i) = n[j];
                        }
                }
                i++;
        }
        return (s);
}

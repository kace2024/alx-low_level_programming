#include "main.h"
/**
 * infinite_add - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result, or 0 if the result cannot fit in the buffer.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = 0, len2 = 0, max_len = 0, sum = 0, carry = 0;
    int i, j;

    // Calculate the lengths of the input numbers
    while (n1[len1] != '\0')
        len1++;
    while (n2[len2] != '\0')
        len2++;

    // Determine the maximum length between the two numbers
    max_len = (len1 > len2) ? len1 : len2;

    // Check if the result can fit in the buffer
    if (size_r < max_len + 1)
        return 0;

    // Add the numbers digit by digit
    for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
    {
        int digit1 = (i >= 0) ? n1[i] - '0' : 0;
        int digit2 = (j >= 0) ? n2[j] - '0' : 0;

        sum = digit1 + digit2 + carry;
        carry = sum / 10;
        sum %= 10;

        r[max_len] = sum + '0';
        max_len--;
    }

    // Null-terminate the result string
    r[len1 > len2 ? len1 : len2] = '\0';

    // If there is remaining carry, shift the result and add the carry
    if (carry)
    {
        for (i = len1 > len2 ? len1 : len2; i >= 0; i--)
            r[i + 1] = r[i];
        r[0] = carry + '0';
    }

    return (r);
}

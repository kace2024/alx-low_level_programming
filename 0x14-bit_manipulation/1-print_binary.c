#include "main.h"

/**
 * MY_print_binary - prints the binary representation of a decimal number
 * @n: The decimal number to print in binary
 */
void MY_print_binary(unsigned long int n)
{
    int i;
    int leading_zeros = 0;

    if (n == 0)
    {
        _putchar('0');
        return;
    }

    for (i = 63; i >= 0; i--)
    {
        unsigned long int mask = 1UL << i;

        if (n & mask)
        {
            _putchar('1');
            leading_zeros = 1;
        }
        else if (leading_zeros || i == 0)
        {
            _putchar('0');
        }
    }
}

#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to print.
 *
 * Description: This function prints an integer using only the _putchar function.
 *              It handles both positive and negative integers.
 *
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar('0' + (n % 10));
}

#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to get the last digit from.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int dgt)
{
	int ldgt;

	ldgt = (dgt % 10);

	if (ldgt < 0)
	{
		ldgt = (-1 * ldgt);
	}
	_putchar('0' + ldgt);
	
	return (ldgt);
}

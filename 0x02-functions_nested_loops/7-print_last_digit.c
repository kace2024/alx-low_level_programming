#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @dgt: number's last digit result.
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

	_putchar(ldgt + '0');
	
	return (ldgt);
}

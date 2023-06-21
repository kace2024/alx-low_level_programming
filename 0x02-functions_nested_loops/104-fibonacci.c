#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_comma - prints a comma and space
 */
void print_comma(void)
{
	_putchar(',');
	_putchar(' ');
}

/**
 * print_number - prints a number
 * @num: The number to print
 */
void print_number(unsigned long num)
{
	if (num > 9)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}

/**
 * print_fibonacci - prints the first 98 Fibonacci numbers
 */
void print_fibonacci(void)
{
	unsigned long first = 1;
	unsigned long second = 2;
	unsigned long next;
	int count;

	print_number(first);
	print_comma();
	print_number(second);

	for (count = 3; count <= 98; count++)
	{
		next = first + second;
		print_comma();
		print_number(next);
		first = second;
		second = next;
	}

	_putchar('\n');
}

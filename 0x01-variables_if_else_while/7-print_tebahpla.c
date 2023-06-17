/*
 * File: 7-print_tebahpla.c
 * Auth: KACEMI ABDALLAH
 */
#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse, followed by a new line.
 *
 * Return: Always 0.
*/

int main(void)
{
	 int number;

	 for (number = 'z' ; number >= 'a' ; number--)
		 putchar(number);

	 putchar('\n');

	 return (0);
}

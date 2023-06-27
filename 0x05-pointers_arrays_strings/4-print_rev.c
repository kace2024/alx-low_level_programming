#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: The input string
 */
void print_rev(char *s)
{
	if (s == NULL)
		return;

	int length = 0;
	char *temp = s;

	while (*temp != '\0')
	{
		length++;
		temp++;
	}

	for (int i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}

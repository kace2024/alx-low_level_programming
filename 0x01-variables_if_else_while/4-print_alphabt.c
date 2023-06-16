/*
 * File: 4-print_alphabt.c
 * Auth: KACEMI ABDALLAH
 */
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0.
*/
int main(void)
{
	char letter;  /* variable to store each letter of the alphabet */

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{

			putchar(letter); /* print the letter */

		}
	}
	putchar('\n'); /* print a newline character at the end */
	return (0);
}

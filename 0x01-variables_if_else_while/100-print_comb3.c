/*
 * File: 100-print_comb3.c
 * Auth: KACEMI ABDALLAH
 */
#include <stdio.h>
/**
 * main - Prints all possible different combinations of two digits.
 *
 * Return: Always 0.
*/
int main(void)
{
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
		 k = j + 1;
		 while (k <= 9)

		 putchar(j + '0');
		 putchar(k + '0');

		 if (i != 7 || j != 8 || k != 9)

		 putchar(',');
		 putchar(' ');

		 k++;
	}
	putchar('\n');

	return (0);

}

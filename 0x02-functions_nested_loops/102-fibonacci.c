#include <stdio.h>

/**
 * main - Prints the first 52 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long j = 1, k = 2;

	printf("%ld, %ld", j, k);

	for (i = 2; i < 52; i++)
	{
		long temp = k;
		k = j + k;
		j = temp;
		printf(", %ld", k);
	}

	printf("\n");

	return (0);
}

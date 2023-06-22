#include <stdio.h>

/**
 * largest_prime_factor - finds the largest prime factor of a number
 * @num: the number to find the largest prime factor of
 *
 * Return: the largest prime factor
 */
unsigned long largest_prime_factor(unsigned long num)
{
	unsigned long i;

	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			while (num % i == 0)
				num /= i;
		}
	}

	return (i - 1);
}

int main(void)
{
	unsigned long number = 612852475143;
	unsigned long largest_factor;

	largest_factor = largest_prime_factor(number);

	printf("The largest prime factor of %lu is %lu\n", number, largest_factor);

	return (0);
}

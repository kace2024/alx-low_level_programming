#include <stdio.h>
#include "main.h"
/**
 * flip_bits - counts the number of bits you would need to flip to get from one number to another.
 * @n: the first number.
 * @m: the second number.
 *
 * Return: the number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	while (n || m) {
		if ((n & 1) != (m & 1))
			count++;
		n >>= 1;
		m >>= 1;
	}
	return (count);
}
/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;
	return (*c);
}

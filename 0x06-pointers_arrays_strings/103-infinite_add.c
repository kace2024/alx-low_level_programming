#include "main.h"
/**
 * infinite_add - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result, or 0 if the result cannot fit in the buffer.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r) 
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0;
	int i = len1 - 1;
	int j = len2 - 1;
	int k = size_r - 1;

	if (len1 + 1 > size_r || len2 + 1 > size_r)
		return (0);

	r[size_r - 1] = '\0';

	while (i >= 0 || j >= 0 || carry > 0)
	{
		int digit1 = (i >= 0) ? (n1[i] - '0') : 0;
		int digit2 = (j >= 0) ? (n2[j] - '0') : 0;
		int sum = digit1 + digit2 + carry;

		if (k < 0)
			return (0);

		carry = sum / 10;
		r[k] = (sum % 10) + '0';

		i--;
		j--;
		k--;
	}

	return &r[k + 1];
}

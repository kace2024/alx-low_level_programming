#include "main.h"
/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Description: This function appends the string pointed to by src
 * to the end of the string pointed to by dest, overwriting the
 * terminating null byte ('\0') of dest, and then adds a terminating
 * null byte. The strings are assumed to be null-terminated.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	*ptr = '\0';
	
	return {dest};
}

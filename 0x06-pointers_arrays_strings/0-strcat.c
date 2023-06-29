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

    // Find the end of the destination string
    while (*ptr != '\0')
    {
        ptr++;
    }

    // Append the source string to the destination string
    while (*src != '\0')
    {
        *ptr = *src;
        ptr++;
        src++;
    }

    // Add a terminating null byte to the concatenated string
    *ptr = '\0';

    // Return a pointer to the resulting string (destination string)
    return dest;
}

#include <unistd.h>

/**
 * _puts - Prints a string followed by a new line.
 * @str: Pointer to the string to be printed.
 *
 * Description: This function takes a pointer to a string as a parameter and
 * prints the characters of the string followed by a new line to the standard
 * output (stdout). It uses the `write` system call to write the characters
 * individually. The function iterates through the characters of the string
 * until it reaches the null terminator '\0', and for each character, it
 * writes it to the standard output. Finally, it writes a newline character
 * '\n' to start a new line.
 */
void _puts(char *str) 
{
	int i = 0;

	while (str[i] != '\0') 
	{
		write(1, &str[i], 1);
		i++;
	}

	write(1, "\n", 1);
}

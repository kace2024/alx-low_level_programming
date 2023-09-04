#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int file(int fd);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
@@ -51,10 +51,10 @@ void close_file(int fd)
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect, the program will exit with code 97.
 * If the file_from does not exist or cannot be read, the program will exit with code 98.
 * If the file_to cannot be created or written to, the program will exit with code 99.
 * If either the file_to or file_from cannot be closed, the program will exit with code 100.
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{

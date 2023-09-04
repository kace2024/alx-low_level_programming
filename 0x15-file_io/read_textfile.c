#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - Reads and prints the content of a text file.
 * @filename: Pointer to the name of the file to read.
 * @letters: Number of letters to read and print.
 * Return: The actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd, bytes_read, bytes_written;
    char *buffer;
    if (filename == NULL)
        return (0);
    // Open the file for reading
    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);
    // Allocate memory for the buffer
    buffer = malloc(letters);
    if (buffer == NULL)
    {
        close(fd);
        return (0);
    }
    // Read from the file
    bytes_read = read(fd, buffer, letters);
    if (bytes_read == -1)
    {
        free(buffer);
        close

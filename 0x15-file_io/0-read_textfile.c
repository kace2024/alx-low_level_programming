#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    ssize_t n, total;
    char buf[BUFSIZ];
    if (filename == NULL)
        return 0;
    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return 0;
    total = 0;
    while ((n = read(fd, buf, letters - total)) > 0) {
        if (write(STDOUT_FILENO, buf, n) != n) {
            close(fd);
            return 0;
        }
        total += n;
        if (total == letters)
            break;
    }
    close(fd);
    return total;
}

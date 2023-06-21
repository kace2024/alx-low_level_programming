#include <stdio.h>

/**
 * main - Prints the first 52 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
    int i = 0;
    long j = 0, k = 1;

    while (i < 52)
    {
        if (i == 0)
            printf("%ld", j);
        else if (i == 1)
            printf(", %ld", k);
        else
        {
            long temp = k;
            k = j + k;
            j = temp;
            printf(", %ld", k);
        }
        i++;
    }
    printf("\n");

    return 0;
}

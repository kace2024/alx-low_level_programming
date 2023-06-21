#include "main.h"
/**
 * print_times_table - Prints the n times table starting with 0.
 * @n: The number for which to print the times table.
 * return: Number matrix
 */
void print_times_table(int n)
{
    int row, column, product;

    if (n < 0 || n > 15)
        return;

    for (row = 0; row <= n; row++)
    {
        for (column = 0; column <= n; column++)
        {
            product = row * column;

            if (column == 0)
            {
                printf("%2d", product);
            }
            else
            {
                printf(", %3d", product);
            }
        }

        printf("\n");
    }
}

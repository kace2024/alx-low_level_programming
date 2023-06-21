#include <stdio.h>
/**
 * times_table - a function that prints the 9 times table, starting with 0
 * i = row, j = column, d = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
    int i, j, result;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            result = i * j;
            if (j == 0)
            {
                printf("%2d", result);
            }
            else
            {
                printf(", %2d", result);
            }
        }
        printf("\n");
    }
}
